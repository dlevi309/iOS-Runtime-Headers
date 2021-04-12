/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSString* _peerPaymentServicesPushTopic;
	NSURL* _peerPaymentServiceURL;

}

@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * peerPaymentServicesPushTopic;              //@synthesize peerPaymentServicesPushTopic=_peerPaymentServicesPushTopic - In the implementation block
@property (nonatomic,copy,readonly) NSURL * peerPaymentServiceURL;                        //@synthesize peerPaymentServiceURL=_peerPaymentServiceURL - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(NSURL *)peerPaymentServiceURL;
-(NSString *)peerPaymentServicesPushTopic;
@end

