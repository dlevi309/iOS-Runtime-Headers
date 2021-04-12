/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString;

@interface RTBluetoothManagerNotificationConnected : RTNotification {

	NSString* _deviceName;
	NSString* _deviceAddress;

}

@property (nonatomic,readonly) NSString * deviceName;                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
-(NSString *)deviceName;
-(NSString *)deviceAddress;
-(id)initWithDeviceName:(id)arg1 andDeviceAddress:(id)arg2 ;
@end

