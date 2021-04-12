/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

