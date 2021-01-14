/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKAuthenticatorEvaluationResponse, NSData;

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam {

	PKAuthenticatorEvaluationResponse* _evaluationResponse;
	NSData* _nonceData;
	NSData* _networkMerchantIdentifier;
	long long _cryptogramType;
	NSData* _credential;

}

@property (nonatomic,retain) NSData * credential;                                                 //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) PKAuthenticatorEvaluationResponse * evaluationResponse;              //@synthesize evaluationResponse=_evaluationResponse - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                                                  //@synthesize nonceData=_nonceData - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                                            //@synthesize cryptogramType=_cryptogramType - In the implementation block
@property (nonatomic,retain) NSData * networkMerchantIdentifier;                                  //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
+(id)paramWithCredential:(id)arg1 ;
+(id)paramWithAuthenticatorEvaluationResponse:(id)arg1 ;
+(id)paramWithNonceParam:(id)arg1 nonce:(id)arg2 cryptogramType:(long long)arg3 networkMerchantIdentifier:(id)arg4 ;
-(NSData *)credential;
-(long long)cryptogramType;
-(NSData *)nonceData;
-(void)setCryptogramType:(long long)arg1 ;
-(NSData *)networkMerchantIdentifier;
-(PKAuthenticatorEvaluationResponse *)evaluationResponse;
-(void)setCredential:(NSData *)arg1 ;
-(id)description;
-(void)setEvaluationResponse:(PKAuthenticatorEvaluationResponse *)arg1 ;
-(void)setNonceData:(NSData *)arg1 ;
-(void)setNetworkMerchantIdentifier:(NSData *)arg1 ;
@end

