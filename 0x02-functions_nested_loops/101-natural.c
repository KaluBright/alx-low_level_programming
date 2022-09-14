#include <stdio.h>

const findSum = n =>
{
	let countArr = []
		
		for(let i = 0; i <= n; i++) if(i % 3 === 0 || i % 5 === 0) countArr.push(i)
			return countArr.reduce((acc , curr) => acc + curr)
}
console.log(findSum(5))
