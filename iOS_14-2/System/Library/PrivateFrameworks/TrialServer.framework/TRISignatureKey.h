/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


#import <TrialServer/TrialServer-Structs.h>
@interface TRISignatureKey : NSObject {

	SecKeyRef _key;

}
+(id)keyFromData:(id)arg1 ;
+(SecKeyRef)_keyFromCertificateChain:(id)arg1 ;
-(id)init;
-(id)initWithKey:(SecKeyRef)arg1 ;
-(void)dealloc;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 ;
-(BOOL)_validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(const CFStringRef)arg3 ;
-(BOOL)_validateSignature:(id)arg1 data:(id)arg2 algorithm:(const CFStringRef)arg3 ;
@end

