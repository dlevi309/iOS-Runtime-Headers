/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCredential:(NSData *)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
@end

