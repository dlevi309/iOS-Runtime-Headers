/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTWiFiManagerNotificationPowerStatusChanged : RTNotification {

	unsigned long long _powerStatus;

}

@property (nonatomic,readonly) unsigned long long powerStatus;              //@synthesize powerStatus=_powerStatus - In the implementation block
-(unsigned long long)powerStatus;
-(id)initWithPowerStatus:(unsigned long long)arg1 ;
@end

