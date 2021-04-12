/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKWrappedPayment, NSData;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam {

	PKWrappedPayment* _wrappedPayment;
	NSData* _nonceData;
	NSData* _credential;
	long long _cryptogramType;

}

@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;              //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                             //@synthesize nonceData=_nonceData - In the implementation block
@property (nonatomic,retain) NSData * credential;                            //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                       //@synthesize cryptogramType=_cryptogramType - In the implementation block
+(id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2 credential:(id)arg3 cryptogramType:(long long)arg4 ;
-(NSData *)credential;
-(long long)cryptogramType;
-(PKWrappedPayment *)wrappedPayment;
-(NSData *)nonceData;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(void)setCryptogramType:(long long)arg1 ;
-(void)setCredential:(NSData *)arg1 ;
-(id)description;
-(void)setNonceData:(NSData *)arg1 ;
@end

