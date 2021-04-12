/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKWrappedPayment, NSData;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam {

	PKWrappedPayment* _wrappedPayment;
	NSData* _nonceData;
	NSData* _credential;

}

@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;              //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                             //@synthesize nonceData=_nonceData - In the implementation block
@property (nonatomic,retain) NSData * credential;                            //@synthesize credential=_credential - In the implementation block
+(id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2 credential:(id)arg3 ;
-(id)description;
-(NSData *)credential;
-(void)setCredential:(NSData *)arg1 ;
-(PKWrappedPayment *)wrappedPayment;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
@end

