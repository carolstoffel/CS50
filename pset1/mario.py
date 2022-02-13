
def get_width():
    width = 0
    while width < 1 or width > 8:
        width = int(input("Type a width between 1 and 8: "))
    return width
    
    
def main():
    width = get_width()
    for i in range(width):
        for j in range(width):
            if i + j < width - 1:
                print(" ",end="")
            elif i + j > width - 1:
                print("#",end="")
        print()

main()
