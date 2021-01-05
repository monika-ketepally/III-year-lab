import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class DBconnection {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Connection con = null;
		try {
			Class.forName("com.mysql.jdbc.Driver");
			con = DriverManager.getConnection("jdbc:mysql://localhost:3306/wplab","root","root");
			Statement st = con.createStatement();
			System.out.println("connection established.....");
			ResultSet rs = st.executeQuery("select * from student");
			while(rs.next()){
				System.out.println(rs.getString(1)+"  "+rs.getString(2)+"  "+rs.getString(3));
			}
			st.close();

			con.close();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}


}
