# Gerenciamento e versionamento de dados

Material para o curso de Gerenciamento e versionamento de dados

## Adicione seu nome na chamada 🏫

O que iremos fazer?

Criar um arquivo com seu usuário, e adicioná-lo ao repositório.

### Primeiro, crie um arquivo alunos/SEU-USUARIO.md

Clone esse repositório, crie uma cópia do arquivo markdown `template.md` dentro da pasta `alunos`, e adicione seu usuário no github como nome do arquivo. A estrutura será algo assim `alunos/<SEU-USUARIO>.md`.

### Segundo, adicione seus dados

Edite o arquivo que você acabou de criar.

`alunos/<SEU-USUARIO>.md`

Altere o template com seus dados:

```
---
nome: NOME-COMPLETO
instituicao: NOME-DA-SUA-INSTITUICAO-DE-ENSINO 🚩 
github_user: SEU-USUARIO-DO-GITHUB
---
```

### Crie uma branch

Crie uma nova branch a partir da `main`, utilizando o seu usuário como identificador. Da seguinte forma `add\SEU-USUARIO`.

Para criar através do terminal/cmd o seu comando será conforme o exemplo abaixo

`git checkout -b add\SEU-USUARIO`

Para verificar se está tudo certo com a sua branch, pode rodar o comando `git branch`

## Faça commit

Para realizar o commit, utilize primeiramente o comando

`git add .`

Esse comando serve para adicionar todas as suas modificações no commit.

Após, utilize o comando

`git commit -m "SUA-MENSAGEM"`

O comando irá adicionar seu commit a árvore, a flag `-m` serve para adicionar uma mensagem ao commit, que serve para identificar as alterações.

Para verificar se está tudo certo até aqui, execute o `git status`. Com esse comando, você será capaz de verificar quais ações estão pendentes seu repositório.

### Envie para o repositório

Até esse ponto, todas as suas alterações foram feitas de forma local.

Agora é necessário enviar tudo para o nosso respositório.

Para isso, vamos utilizar o comando `push`. Precisaremos especificar para qual branch que vamos mandar esse commit. O comando vai ficar mais ou menos assim

`git push add\SEU-USUARIO`

Com esse comando, a sua branch contendo o seu commit, foi enviada para o repositório. Você pode conferir [aqui](https://github.com/ec-setrem/estrutura-dados/branches).

### Solicitação de PR

![Fusão](https://media1.tenor.com/images/4a8bba4f59cda65616d27078e7599b87/tenor.gif?itemid=4929472)

Hora de juntar as suas alterações ao repositório. Para isso, será necessário criar uma Pull Request para a `branch main`.

A PR deverá ser criada [aqui](https://github.com/ec-setrem/estrutura-dados/pulls).

Basta escolher a opção nova pull request, a tela de comparações deverá ser aberta.

Nesse momento, você escolhe a sua branch na segunda opção, e a branch main na primeira.

Após, basta clicar em criar.

Pronto, agora basta aguardar aprovação.