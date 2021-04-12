/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFCryptographProtocol.h>

@class NSString;

@interface ACFCryptograph : NSObject <ACFCryptographProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sha1Context;
-(id)compressData:(id)arg1 ;
-(id)randomDataOfLength:(unsigned long long)arg1 ;
-(id)encryptData:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(id)signatureForData:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(id)decodeBase64:(id)arg1 ;
-(id)encodeBase64:(id)arg1 ;
-(id)decodeBase16:(id)arg1 ;
-(id)encodeBase16:(id)arg1 ;
-(id)decodeStringWithObscuredData:(id)arg1 ;
-(id)encodeObscuredDataWithString:(id)arg1 length:(unsigned long long)arg2 ;
-(id)hashDataSHA256WithData:(id)arg1 ;
-(id)hashStringSHA256WithString:(id)arg1 ;
-(id)hashDataSHA1WithString:(id)arg1 ;
-(id)hashStringSHA1WithString:(id)arg1 ;
-(void)sha1Context:(id)arg1 updateWithData:(id)arg2 ;
-(id)sha1ContextFinalize:(id)arg1 ;
-(id)randomStringOfLength:(unsigned long long)arg1 ;
-(id)encryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(BOOL)arg4 ;
-(id)decryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(BOOL)arg4 ;
-(id)encrypt3DESCBCData:(id)arg1 withKey:(id)arg2 pading:(BOOL)arg3 ;
-(id)decrypt3DESCBCData:(id)arg1 withKey:(id)arg2 ;
-(id)hmac256DataWithData:(id)arg1 key:(id)arg2 ;
-(void)fillEncryptionSuffix:(id)arg1 ;
-(void)fillHMACSuffix:(id)arg1 ;
-(void)clearKey:(id)arg1 ;
-(id)compactDataFromPropertyList:(id)arg1 ;
-(void)setLength:(unsigned long long)arg1 toData:(id)arg2 ;
@end

