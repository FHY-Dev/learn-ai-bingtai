import re

str_1=input()
ol_not=re.findall(r'[^ol]*',str_1)
str_2='fzu'.join(ol_not)
print(str_2)+