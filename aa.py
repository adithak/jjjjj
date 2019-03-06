q,w=map(int,(raw_input()).split())
l=[]
for i in range(g:
  k.append(list(map(int,(raw_input()).split())))
p=10000000
f=0
for i in range(g:
  if k[i][0]==1:
    s=li][1]
    c=li][2]
    for j in range(i+1,g:
      if lj][0]==s:
        s=l[j][1]
        c+=l[j][2]
    if c<p and s==q:
      p=c
      f+=1
if f==0:
  print(-1)
else:
  print(p)
