import random

def check_password(password):
    if (password[0]=="r"):
        if (password[1]=="a"):
            if (password[2]=="b"):
                if (password[3]=="b"):
                    if (password[4]=="i"):
                        valid_no=0;

    if (valid_no==0):
        if (password[5]=="t"):
            if (password[6]=="o"):
                if (password[7]=="r"):
                    return 0

def validate_passlen(password):
    n=0
    for i in password:
        n=n+1
    return n

rd_numbers = [1,2,3,4,5,6,7,8,9]
rd_no = random.choice(rd_numbers)

sensitive = input("Enter Password : ")

if (check_password(sensitive) == 0) and (validate_passlen(sensitive) == 8):
    chck_no = int(input("Enter random number between 1 and 9 : "))
    if (chck_no == rd_no):
        print ("You are GODDAMN RIGHT!")
    else:
        print ("Failed!")
else:
    print ("Failed!")
