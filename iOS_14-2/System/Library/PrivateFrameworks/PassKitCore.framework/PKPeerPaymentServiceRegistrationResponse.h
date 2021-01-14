/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)deviceIdentifier;
-(NSURL *)peerPaymentServiceURL;
-(id)initWithData:(id)arg1 ;
-(NSString *)peerPaymentServicesPushTopic;
@end

