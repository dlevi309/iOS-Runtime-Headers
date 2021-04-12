/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)deviceId;
-(unsigned long long)vehicleConnectedState;
-(id)initWithVehicleConnectedState:(unsigned long long)arg1 deviceId:(id)arg2 ;
@end

