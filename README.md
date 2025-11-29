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

<p>
Este projeto demonstra conceitos fundamentais da linguagem C aplicados a um sistema funcional e interativo.
</p>
