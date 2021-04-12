/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam {

	NSData* _credential;
	PKAuthenticatorEvaluationResponse* _evaluationResponse;

}

@property (nonatomic,retain) NSData * credential;                                                 //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) PKAuthenticatorEvaluationResponse * evaluationResponse;              //@synthesize evaluationResponse=_evaluationResponse - In the implementation block
+(id)paramWithCredential:(id)arg1 ;
+(id)paramWithAuthenticatorEvaluationResponse:(id)arg1 ;
-(id)description;
-(NSData *)credential;
-(void)setCredential:(NSData *)arg1 ;
-(PKAuthenticatorEvaluationResponse *)evaluationResponse;
-(void)setEvaluationResponse:(PKAuthenticatorEvaluationResponse *)arg1 ;
@end

