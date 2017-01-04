#include<iostream>
#include<string>

typedef int (*FtpCallbackIdle)(void *arg);
/*out indicates wether the log information in str is incoming or outgoing*/
typedef int (*FtpCallbackLog)(char str, void arg, bool out);
typedef int (*FtpCallbackXfer)(off64_t xfered, void *arg);
typedef bool (*FtpCallbackCert)(void *arg, X509 *cert);

typedef enum {
	dir = 1,
	dirverbose,
	fileread,
	filewrite,
	filereadappend = 5,
	filewriteappend
}accesstype;

typedef enum {
	ascii = 'A',
	image = 'I',
	binary = 'B'
}transfermode;

/* determines wether data is to be transferred using the pasv or active mode*/
typedef enum {
	pasv = 1,
	port = 2
} connmode;

typedef enum {
	defaultfxp = 0,
	alternativefxp
}fxpmethod;

int EOK = 1;
int ERR = 0;

class ftplibClient {
	accesstype fileAccessType;
	transfermode transMode;
	connmode connMode;
	fxpmethod fxpMethod;

	public:

	ftplibClient() {
	}
	
	/*LastResponse() returns a pointer to the last server response string. Otherwise, NULL is returned. */
	char * lastResponse {
	}
	
	/* Connect() establishes a connection to the FTP server on the specified 
	 * machine and returns a handle which can be used to initiate data transfers.
	 * If the connection to the remote server if successful, Connect() returns 1.
	 * Otherwise, 0 is returned. 
	 */
	int Connect(const char *host) {
	}

	/* Login() attempts to login to the remote system with the supplied username 
	 * and password. 
	 */
	login(const char* user, const char *pass) {
	}
	
	/*site send the specified command as an agument to SITE command*/
	int Site (const char *cmd) {
	}

	/*Raw sends the specified command unmodified*/
	int Raw(const char *cmd) {
	}

	/* SysType() issues a SYST command to the remote system and attempts to
	 * parse the system type out of the response and return it to the user's
	 * buffer.
	 * Parameters:
	 * buf: A pointer to a buffer where the result will be returned to.
	 * max: Specifies the size of the user buffer.
	 */
	int SysType(char *buf, int max) {
	}

	/* mkdir() sends a make directory request on the remote system*/
	int mkdir(const char *path) {
	}

	/* Sends a change working directory request to the server using the specified
	 * path
	 */
	int chdir(const char *path) {
	}

	int rmdir(const char *path) {
	}
	
	/* Pwd() attempts to determine the current default directory at the server
	 * and return it to the user's buffer
	 */
	int pwd(char *path, int max_buffer) {
	}

	/* output: Specifies the name of a file to receive the directory listing.
	 * path: Specifies an argument to 'ls' on the remote system.
	 */
	int dir(char* outputfile, const char* path) {
	}

	/* Size() attempts to determine the size of a remote file. */
	int size(const char *path, int *size) {
	}

	/* get() copies the content of a remote file to a local file*/
	int get(const char *outputfile, const char *path, transfermode Mode) {
	}

	/*put() transfers a local file to a remote system*/
	int put(const char *inputfile, const char *path, transfermode Mode) {
	}

	/*FtpRename() sends a rename request to the remote server
	 * src: A string containing the current name of the remote file.
	 * dst: A string containing the desired new name for the remote file.
	 */
	ftpRename(const char *src, const char *dst) {
	}

	/* Requests that the server remove the specified file from the remote file
	 * system
	 */
	 int deletefile(const char *path) {
	 }
	
	 /* Quit() issues a 'QUIT' command and closes the connection to the remote
	  * server.
	  */
	 void quit() {
	 }


};

	


