#!/usr/bin/env ruby

a = 64/3
b = 219/a
c = 313/(a+b)
arr = [a,b,c]
v = arr[2]
f = if v > 5 or arr[0] < 16 then 0.1 else 1.4 end
if f == 1.4 or arr[0] > 5
  b = 25
else
  a = 27
end
puts "a=#{a},b=#{b},c=#{c}"

while a < b and c > 7
  a += 1
  b -= 1
  c -= 1
end
puts "a=#{a},b=#{b},c=#{c}"

sum = 0.0
0.upto(5).each do |i|
  sum += Math.sqrt(i.to_f)
end

printf("%.4f\n",sum)

'a'.upto('f').each do |cc|
  puts "#{cc}\t#{cc.capitalize}"
end
