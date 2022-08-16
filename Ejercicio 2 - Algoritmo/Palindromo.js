// Ejecución en ideone.com : https://ideone.com/LPLyK7

function combs(str){
    const combinaciones = [];
    for (let i = 0; i < str.length; i++) {
        let combinacion = str.substring(i,i+3);
        for (let j = i + 3; j < str.length; j++) {
            combinacion += str.charAt(j);
            if(palin(combinacion)){
            	// console.log(combinacion+" "+combinacion.length);
            	combinaciones.push(combinacion);
            }
        }
    }
    return combinaciones;
}

function palin(str) {
  const reverse = str.split("").reverse().join("");
  return reverse === str ? true : false;
}

const palabra = "anulalalunapaisajemontanaguaamoraromacomidaluzazulsillagatobotellacamarayosoypalindromocasaverdebanderaventanacangrejolarutanosaportootropasonaturaliniciaracaestoseralodoodolaresdonasbarcosmarcieloaviontierrapaisbicicletaestonoespalindromojugarseverlasalrevesusandounradarenelojorejero";
const combinaciones = combs(palabra);
console.log(combinaciones.length)
 //for (const combinacion of combinaciones) {
 //    console.log(combinacion);
 //}