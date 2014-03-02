#This script takes a 20 pixel wide bitmap with 1-bit color depth
#and prints out a graphical representation of the image along with
#byte values as they 

from PIL import Image

im = Image.open("bettersmile.bmp")
bitlist =  list(im.getdata())

#3 bytes that make up each row of the image on my circuit.
dbyte = []
bbyte = []
cbyte = []
templist = []
superstring = ""

#the first two bytes of the resulting array will contain the length of the array
#in hex.  "superstringlength" is the length%256 and superduperstringlength is length/256
superstringlength=2
superduperstringlength=0


#converts a list of binary bits to a hexidecimal value.
def listtohex(list):
    output = 0
    for x in range(0,len(list)):
        output += list[x]*2**x
    return hex(output)

for x in range(0, len(bitlist)+1):
    if ((x)%20) ==0 and x>2:
        #With a whole row of image stored in templist
        #begin moving the row into b,c,and dbyte.
        #these assignments will look pretty arbitrary unless
        #you have studied the schematic.
        bbyte.append(templist[5])
        for y in [0,1,2,3,4]:
            bbyte.append(templist[y])
        bbyte.append(templist[10])
        bbyte.append(templist[9])
        for y in [15,14,13,12,11]:
            dbyte.append(templist[y])
        for y in [8,7,6]:
            dbyte.append(templist[y])
        cbyte.append(0)
        cbyte.append(0)
        for y in templist[16:20]:
            cbyte.append(y)
        for y in range (0,2):
            cbyte.append(0)
        #print templist

        print templist #print out the row
        superstring = superstring + listtohex(bbyte) + "," + listtohex(cbyte) + "," + listtohex(dbyte) + ","
        superstringlength = superstringlength+3
        if superstringlength / 256 >= 1:
            superduperstringlength+=1
            superstringlength-=256
        bbyte = []
        cbyte = []
        dbyte = []
        templist = []
        if x <=len(bitlist)-1:
            templist.append(bitlist[x])
    else:
        #grab 20 bits that make up a row of image
        templist.append(bitlist[x])
        
print superduperstringlength*256+superstringlength
superstring = hex(superduperstringlength) + "," +hex(superstringlength) + "," + superstring
print superstring #print array to be used in firmware
