/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary;

@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse {

	NSDictionary* _devices;

}

@property (nonatomic,copy) NSDictionary * devices;              //@synthesize devices=_devices - In the implementation block
-(NSDictionary *)devices;
-(void)setDevices:(NSDictionary *)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

