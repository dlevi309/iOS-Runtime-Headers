/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


#import <TrialServer/TrialServer-Structs.h>
@interface TRISignatureKey : NSObject {

	SecKeyRef _key;

}

@property (assign) SecKeyRef key;              //@synthesize key=_key - In the implementation block
+(id)keyFromData:(id)arg1 ;
+(SecKeyRef)keyFromCertificateChain:(id)arg1 ;
+(void)releaseCertificates:(id)arg1 ;
-(void)dealloc;
-(SecKeyRef)key;
-(id)initWithKey:(SecKeyRef)arg1 ;
-(void)setKey:(SecKeyRef)arg1 ;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 ;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(CFStringRef)arg3 ;
-(BOOL)validateSignature:(id)arg1 data:(id)arg2 algorithm:(CFStringRef)arg3 ;
@end

