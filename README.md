<h1>🏦 Sistema Bancário em C</h1>

<p>
Este projeto implementa um sistema bancário simples em <strong>linguagem C</strong>, dividido em duas áreas principais:
<strong>Administrador</strong> e <strong>Cliente</strong>.  
Ele simula operações essenciais como visualização de dados, alteração de informações, saques, depósitos e solicitação de empréstimos.
</p>

<h2>🔐 Modo Administrador</h2>
<p>Para acessar esta área, é necessário digitar a senha correta (<code>123</code>). O administrador pode:</p>
<ul>
  <li>Visualizar a tabela completa de clientes</li>
  <li>Alterar saldo, ID, CPF, nome ou número da conta</li>
  <li>Atualizar dados diretamente nos vetores do programa</li>
</ul>

<h2>👤 Modo Cliente</h2>
<p>
O cliente acessa sua conta informando o número da conta e a senha correspondente. Após a confirmação, ele pode usar as seguintes funções:
</p>

<h3>💸 Saque</h3>
<ul>
  <li>Revalidação de senha</li>
  <li>Exibição do saldo atual</li>
  <li>Realização do saque</li>
  <li>Extrato mostrando saldo antigo e atualizado</li>
</ul>

<h3>💰 Depósito</h3>
<ul>
  <li>Revalidação de senha</li>
  <li>Exibição do saldo atual</li>
  <li>Depósito de valores</li>
  <li>Extrato detalhado</li>
</ul>

<h3>📈 Empréstimo</h3>
<ul>
  <li>Revalidação de senha</li>
  <li>Exibição do saldo</li>
  <li>Solicitação de empréstimo de até <strong>10× o saldo</strong></li>
  <li>Cálculo automático das parcelas com juros</li>
  <li>Opção de confirmar ou cancelar</li>
</ul>

<h2>⚙️ Estrutura Interna</h2>
<p>O programa utiliza:</p>
<ul>
  <li>Condicionais <code>if/else</code></li>
  <li>Laços <code>do/while</code></li>
  <li>Vetores para armazenar informações de 5 clientes</li>
  <li><code>strcpy</code> para alterar nomes</li>
  <li>Impressões formatadas para tabelas e extratos</li>
</ul>

<h2>🚀 Como acessar e usar</h2>

<h3>1️⃣ Compilar o projeto</h3>
<p>Use GCC ou qualquer compilador C compatível:</p>
<pre><code>gcc sistema_bancario.c -o banco
</code></pre>

<h3>2️⃣ Executar o programa</h3>
<pre><code>./banco
</code></pre>

<h3>3️⃣ Navegação no sistema</h3>
<ul>
  <li>Escolha entre <strong>Modo Administrador</strong> ou <strong>Modo Cliente</strong></li>
  <li>No modo Administrador, digite a senha <code>123</code></li>
  <li>No modo Cliente, informe número da conta + senha cadastrada</li>
  <li>Siga o menu para realizar ações como saque, depósito ou empréstimo</li>
</ul>

<h3>4️⃣ Saindo do sistema</h3>
<p>Basta selecionar a opção “Sair” nos menus ou encerrar no terminal.</p>

<p>Esse sistema é um exemplo prático de lógica de programação aplicando estruturas fundamentais em C.</p>

<img width="377" height="616" alt="image" src="https://github.com/user-attachments/assets/db70a128-34e8-4d26-aeda-6c940b45a695" />

