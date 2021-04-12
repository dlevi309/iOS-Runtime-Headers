/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKOverlayableWebServiceRequest.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;
@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest {

	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;

}

@property (nonatomic,retain) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTargetDevice:(id<PKPaymentWebServiceTargetDeviceProtocol>)arg1 ;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(id)_murlRequestWithServiceURL:(id)arg1 version:(id)arg2 endpointComponents:(id)arg3 queryParameters:(id)arg4 appleAccountInformation:(id)arg5 ;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(void)_signRequest:(id)arg1 webService:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

