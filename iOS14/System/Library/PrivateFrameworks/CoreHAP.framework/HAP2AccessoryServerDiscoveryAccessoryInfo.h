/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>

@class HAPDeviceID, NSDictionary;

@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject {

	HAPDeviceID* _deviceID;
	NSDictionary* _rawDiscoveryInfo;

}

@property (nonatomic,readonly) HAPDeviceID * deviceID;                       //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawDiscoveryInfo;              //@synthesize rawDiscoveryInfo=_rawDiscoveryInfo - In the implementation block
+(id)new;
-(HAPDeviceID *)deviceID;
-(id)init;
-(NSDictionary *)rawDiscoveryInfo;
-(id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2 ;
@end

