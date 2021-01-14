/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString;

@interface RTMotionActivityManagerNotificationVehicleConnected : RTNotification {

	unsigned long long _vehicleConnectedState;
	NSString* _deviceId;

}

@property (nonatomic,readonly) unsigned long long vehicleConnectedState;              //@synthesize vehicleConnectedState=_vehicleConnectedState - In the implementation block
@property (nonatomic,readonly) NSString * deviceId;                                   //@synthesize deviceId=_deviceId - In the implementation block
-(unsigned long long)vehicleConnectedState;
-(NSString *)deviceId;
-(id)initWithVehicleConnectedState:(unsigned long long)arg1 deviceId:(id)arg2 ;
@end

