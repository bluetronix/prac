function show(){
    let x = prompt("Enter number To Generate Multiples");
    let y = prompt("Enter Highest Value to set the limit for the multiples");
    window.alert("Display The multiples of the selected number")

    for(let i=1; i <= y; i++){
        
        document.writeln( x +" x " + i +" = "+ (x * i)+ "<br>");
    }
    //document.getElementById(`ans`).innerHTML = "<br>"
}