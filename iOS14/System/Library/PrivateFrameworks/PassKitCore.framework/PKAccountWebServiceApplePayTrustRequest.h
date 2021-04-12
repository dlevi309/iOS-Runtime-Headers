/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@protocol PKAccountWebServiceApplePayTrustProtocol;
@class PKApplePayTrustSignature;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {

	id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
	PKApplePayTrustSignature* _signature;

}

@property (nonatomic,retain) PKApplePayTrustSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(PKApplePayTrustSignature *)signature;
-(Class)responseClass;
-(id)initWithApplePayTrustProtocol:(id)arg1 ;
-(id)endpointComponents;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setSignature:(PKApplePayTrustSignature *)arg1 ;
@end

