/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

