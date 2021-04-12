/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface SFUCryptor : NSObject {

	int mOperation;
	CCCryptorRef mCryptor;
	unsigned long long mBlockSize;
	BOOL mFinished;
	char* mDecryptionInputBuffer;
	char* mOutputBuffer;
	char* mOutputBufferPos;
	unsigned long long mOutputBufferAvailable;

}
-(void)dealloc;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 usePKCS7Padding:(BOOL)arg5 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned*)arg5 error:(id*)arg6 ;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
@end

