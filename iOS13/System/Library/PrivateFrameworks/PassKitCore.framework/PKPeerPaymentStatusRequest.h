/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentStatusRequest : PKPeerPaymentWebServiceRequest {

	NSString* _paymentIdentifier;

}

@property (nonatomic,copy) NSString * paymentIdentifier;              //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(NSString *)paymentIdentifier;
@end

