x=int(input())
y=int(input())
z=int(input())
num_max=max(x,y,z)
num_min=min(x,y,z)
mid=x+y+z-num_max-num_min
print('%d,%d,%d'%(num_max,mid,num_min))