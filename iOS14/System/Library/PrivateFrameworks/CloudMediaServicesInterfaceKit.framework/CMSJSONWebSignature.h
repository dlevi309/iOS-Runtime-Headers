/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/


#import <CloudMediaServicesInterfaceKit/CloudMediaServicesInterfaceKit-Structs.h>
@class NSString, NSData, NSError;

@interface CMSJSONWebSignature : NSObject {

	NSString* _keyID;
	NSData* _payload;
	NSError* _verificationError;

}

@property (nonatomic,readonly) NSString * keyID;                         //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,readonly) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSError * verificationError;              //@synthesize verificationError=_verificationError - In the implementation block
-(NSString *)keyID;
-(NSData *)payload;
-(NSError *)verificationError;
-(id)initWithJWSCompactEncodedString:(id)arg1 keyID:(id)arg2 publicKey:(id)arg3 ;
-(BOOL)_validateJWSProtectedHeader:(id)arg1 ;
-(SecKeyRef)_createPublicKeyFromPEM:(id)arg1 ;
-(void)_validateJWSSignature:(id)arg1 ofHeader:(id)arg2 andPayload:(id)arg3 withPublicKey:(SecKeyRef)arg4 ;
-(id)_createASN1SignatureFromJWSSignature:(id)arg1 ;
@end

