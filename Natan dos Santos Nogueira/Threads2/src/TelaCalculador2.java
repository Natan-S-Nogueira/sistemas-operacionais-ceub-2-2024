import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class TelaCalculador2 {
	
	public static void main(String[] args) throws InterruptedException {
		
		JFrame janela = new JFrame("Multiplica��o Longa");
		
		JTextField primeiro = new JTextField(10);
		JTextField segundo = new JTextField(10);
		
		JButton botao = new JButton(" = ");
		JLabel resultado = new JLabel("  Aguardando...  ");
		
		botao.addActionListener(new AcaoBotao(primeiro, segundo, resultado));
		
		JPanel painel = new JPanel();
		painel.add(primeiro);
		painel.add(new JLabel("X"));
		painel.add(segundo);
		painel.add(botao);
		painel.add(resultado);
		
		janela.add(painel);
		janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		janela.pack();
		janela.setVisible(true);
		
	}
	
}
