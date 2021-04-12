/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTBatteryManagerNotificationChargerConnected : RTNotification {

	BOOL _connected;

}

@property (nonatomic,readonly) BOOL connected;              //@synthesize connected=_connected - In the implementation block
-(BOOL)connected;
-(id)initWithChargerConnected:(BOOL)arg1 ;
@end

