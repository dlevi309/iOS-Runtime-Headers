/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKAuthenticatorEvaluationResponse, NSData;

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam {

	PKAuthenticatorEvaluationResponse* _evaluationResponse;
	NSData* _nonceData;
	NSData* _credential;

}

@property (nonatomic,retain) NSData * credential;                                                 //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) PKAuthenticatorEvaluationResponse * evaluationResponse;              //@synthesize evaluationResponse=_evaluationResponse - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                                                  //@synthesize nonceData=_nonceData - In the implementation block
+(id)paramWithCredential:(id)arg1 ;
+(id)paramWithAuthenticatorEvaluationResponse:(id)arg1 ;
+(id)paramWithNonceParam:(id)arg1 nonce:(id)arg2 ;
-(id)description;
-(NSData *)credential;
-(void)setCredential:(NSData *)arg1 ;
-(NSData *)nonceData;
-(PKAuthenticatorEvaluationResponse *)evaluationResponse;
-(void)setEvaluationResponse:(PKAuthenticatorEvaluationResponse *)arg1 ;
-(void)setNonceData:(NSData *)arg1 ;
@end

