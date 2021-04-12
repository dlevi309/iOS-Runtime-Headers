/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKOverlayableWebServiceRequest.h>

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol;
@interface PKPeerPaymentWebServiceRequest : PKOverlayableWebServiceRequest {

	id<PKPeerPaymentWebServiceTargetDeviceProtocol> _targetDevice;

}

@property (nonatomic,retain) id<PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
-(id<PKPeerPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)setTargetDevice:(id<PKPeerPaymentWebServiceTargetDeviceProtocol>)arg1 ;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
@end

