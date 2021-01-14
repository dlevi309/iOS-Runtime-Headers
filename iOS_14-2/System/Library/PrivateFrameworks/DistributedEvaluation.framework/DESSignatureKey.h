/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
@interface DESSignatureKey : NSObject {

	SecKeyRef _key;

}
+(void)initialize;
+(id)keyFromData:(id)arg1 ;
+(SecKeyRef)keyFromCertificateChain:(id)arg1 ;
-(id)init;
-(id)initWithKey:(SecKeyRef)arg1 ;
-(void)dealloc;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 ;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(CFStringRef)arg3 ;
-(BOOL)validateSignature:(id)arg1 data:(id)arg2 algorithm:(CFStringRef)arg3 ;
@end

