/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject {

	NSData* _credential;
	NSData* _nonceData;
	PKPaymentRequest* _paymentRequest;

}

@property (nonatomic,retain) NSData * credential;                              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                               //@synthesize nonceData=_nonceData - In the implementation block
@property (nonatomic,readonly) PKPaymentRequest * paymentRequest;              //@synthesize paymentRequest=_paymentRequest - In the implementation block
-(NSData *)credential;
-(NSData *)nonceData;
-(void)setCredential:(NSData *)arg1 ;
-(void)setNonceData:(NSData *)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(PKPaymentRequest *)paymentRequest;
@end

