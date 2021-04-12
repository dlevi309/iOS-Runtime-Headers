/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEEncrypted : NSObject
+(id)decrypt:(id)arg1 ;
+(id)getKey:(unsigned long long)arg1 ;
+(id)encrypt:(id)arg1 keyId:(unsigned long long)arg2 multipart:(BOOL)arg3 ;
+(id)getKeyWithVersion:(id)arg1 ;
+(id)versionFile:(id)arg1 ;
+(id)encryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 keyId:(unsigned long long)arg4 multipart:(BOOL)arg5 ;
+(id)decryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 ;
+(BOOL)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 ;
+(id)decrypt:(id)arg1 keyVersion:(id*)arg2 ;
+(id)readDataOfLength:(unsigned long long)arg1 from:(id)arg2 or:(id)arg3 ;
+(BOOL)decryptFrom:(id)arg1 to:(id)arg2 keyVersion:(id*)arg3 ;
+(BOOL)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 encrytpedPb:(Encrypted*)arg4 ;
+(BOOL)wrapFrom:(id)arg1 to:(id)arg2 encrytpedPb:(Encrypted*)arg3 multipart:(BOOL)arg4 ;
+(BOOL)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 multipart:(BOOL)arg4 ;
@end

