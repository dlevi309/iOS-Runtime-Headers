/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@interface ECDKIMVerifier : NSObject
-(id)verificationContextForMessageData:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyMessageWithContext:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3 error:(out id*)arg4 ;
-(BOOL)verifyMessageBodyData:(id)arg1 withContext:(id)arg2 usingSignature:(id)arg3 ;
-(BOOL)verifyMessageHeaders:(id)arg1 usingSignature:(id)arg2 publicKeySource:(id)arg3 error:(out id*)arg4 ;
-(void)canonicalizeBodyDataUsingSimpleAlgorithm:(id)arg1 ;
-(void)canonicalizeBodyDataUsingRelaxedAlgorithm:(id)arg1 ;
-(id)_base64HashBodyData:(id)arg1 usingSignature:(id)arg2 ;
-(id)canonicalizeHeaders:(id)arg1 usingSimpleAlgorithmWithSignatureHeader:(id)arg2 ;
-(id)canonicalizeHeaders:(id)arg1 usingRelaxedAlgorithmWithSignatureHeader:(id)arg2 ;
-(id)_relaxedCanonicalizationForHeaderName:(id)arg1 headerBody:(id)arg2 ;
-(BOOL)verifyMessageData:(id)arg1 ;
-(BOOL)verifyMessageData:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3 ;
-(BOOL)verifyMessageWithContext:(id)arg1 options:(long long)arg2 error:(out id*)arg3 ;
@end

