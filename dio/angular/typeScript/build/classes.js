"use strict";
class Pessoa {
    constructor(id, nome, idade, profissao) {
        this.id = id++;
        this.nome = nome;
        this.idade = idade;
        this.profissao = profissao;
    }
    atividade() {
        console.log(`${this.id} ${this.nome} de ${this.idade} é ${this.profissao}.`);
    }
}
class Aluno extends Pessoa {
    constructor(id, nome, idade, profissao, escola) {
        super(id, nome, idade, profissao);
        this.escola = escola;
    }
    class() {
        console.log(`${this.nome} é aluno da ${this.escola}`);
    }
}
for (let i = 0; i < 5; i++) {
    const p1 = new Pessoa(i + 1, "David", 27, "Programador");
    p1.atividade();
    const aluno = new Aluno(i + 1, "David", 27, "Programador", "IFPI/UFPI");
    aluno.class();
}
