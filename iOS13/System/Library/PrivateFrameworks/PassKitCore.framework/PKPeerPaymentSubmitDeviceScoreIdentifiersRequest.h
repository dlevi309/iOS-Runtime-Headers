/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSUUID;

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest : PKPeerPaymentWebServiceRequest {

	NSString* _paymentIdentifier;
	NSUUID* _requestDeviceScoreIdentifier;
	NSUUID* _sendDeviceScoreIdentifier;

}

@property (nonatomic,copy) NSString * paymentIdentifier;                       //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * requestDeviceScoreIdentifier;              //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * sendDeviceScoreIdentifier;                 //@synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(void)setRequestDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(NSString *)paymentIdentifier;
-(NSUUID *)requestDeviceScoreIdentifier;
-(NSUUID *)sendDeviceScoreIdentifier;
-(void)setSendDeviceScoreIdentifier:(NSUUID *)arg1 ;
@end

