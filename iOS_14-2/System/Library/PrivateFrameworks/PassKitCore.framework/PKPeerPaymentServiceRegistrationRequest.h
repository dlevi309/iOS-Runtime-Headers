/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, PKPeerPaymentDeviceRegistrationData;

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest {

	NSString* _pushToken;
	PKPeerPaymentDeviceRegistrationData* _deviceData;

}

@property (nonatomic,copy) NSString * pushToken;                                            //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) PKPeerPaymentDeviceRegistrationData * deviceData;              //@synthesize deviceData=_deviceData - In the implementation block
-(void)setPushToken:(NSString *)arg1 ;
-(NSString *)pushToken;
-(void)setDeviceData:(PKPeerPaymentDeviceRegistrationData *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(PKPeerPaymentDeviceRegistrationData *)deviceData;
@end

