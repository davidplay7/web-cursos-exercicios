let variavel:boolean = true;
variavel = false;
//variavel = 10 da erro;

let numero: number = 10;

let texto: string = "David";

let nulo: null = null;

let indefinida: undefined = undefined

let vazio: void // não recebe nada

let coisa: any = 10; //retorna qualquer coisa
let coisa2: any = true; //retorna qualquer coisa
let coisa3: any = null;//retorna qualquer coisa

let objeto: object = {
    nome: "David",
    idade: 27,
    ativo: true,
};
type pessoa = {
    nome: string,
    idade: number,
    ativo: boolean,
}

let novaPessoa: pessoa = {
    nome: "Ariely",
    idade: 22,
    ativo: true,
}

console.log(variavel, numero, texto, nulo,indefinida,coisa,coisa2,coisa3, objeto);