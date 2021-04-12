/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload {

	NSData* _encryptedData;

}

@property (retain) NSData * encryptedData;              //@synthesize encryptedData=_encryptedData - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setEncryptedData:(NSData *)arg1 ;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(id)copyDecryptedPayloadsForEncryption:(id)arg1 integrity:(id)arg2 encryptionKey:(id)arg3 integrityKey:(id)arg4 packetData:(id)arg5 ;
-(BOOL)encryptPayloads:(id)arg1 encryption:(id)arg2 integrity:(id)arg3 encryptionKey:(id)arg4 integrityKey:(id)arg5 aad:(id)arg6 encryptionContext:(id)arg7 ;
-(unsigned long long)type;
-(NSData *)encryptedData;
@end

