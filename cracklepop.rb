(1..100).to_a.each do |i| 
	if i % 3 == 0 && i % 5 == 0
		puts "CracklePop"
	elsif i % 3 == 0
		puts "Crackle"
	elsif i % 5 == 0
		puts "Pop"
	else
		puts i
	end
end
