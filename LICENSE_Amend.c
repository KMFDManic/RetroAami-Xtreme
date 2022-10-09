**To Abide by GNU GENERAL PUBLIC & Other Applicable LICENSES:**

**Hex Edit Removed Segmentation Fault Obfuscation Oversight to correct License Violation**

**capsimg.so not permissible for usage in Commercial Project; Non-Commercial ONLY**

**capsimg.so generally a standalone file that End User can manually add**

**Removed Pandory Obfuscation Coding Below to document that particular License Correction**

int main(int argc,char **argv)
{
  size_t len;
  int ret;
  stat64 statbuf;
  char pathname [80];
  char cmdreboot [8];
  int fileExists;

  memcpy(cmdreboot,"reb",4);
  len = strlen(cmdreboot);
  memcpy(cmdreboot + len,"oot",4);

  memcpy(pathname,"/mn",4);
  len = strlen(pathname);
  memcpy(pathname + len,"t/Pan",6);
  len = strlen(pathname);
  memcpy(pathname + len,"dor",4);
  len = strlen(pathname);
  memcpy(pathname + len,"y/.pan",7);
  len = strlen(pathname);
  memcpy(pathname + len,"do",3);
  len = strlen(pathname);
  memcpy(pathname + len,"ry",3);

  fileExists = false;
  ret = access(pathname,F_OK);
  if (ret == 0) {
    stat(pathname,&statbuf);
    if (statbuf.st_size > 200000000) {
      fileExists = true;
    }
  }

  if (fileExists) {
    ret = rarch_main(argc,argv,0);
  }
  else {
    printf("Segmentation fault");
    system(cmdreboot);
    ret = 53;
  }
  return ret;
}
