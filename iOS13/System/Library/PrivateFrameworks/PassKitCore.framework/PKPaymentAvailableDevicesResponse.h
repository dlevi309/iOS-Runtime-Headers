/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary;

@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse {

	NSDictionary* _devices;

}

@property (nonatomic,copy) NSDictionary * devices;              //@synthesize devices=_devices - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)devices;
-(void)setDevices:(NSDictionary *)arg1 ;
@end

