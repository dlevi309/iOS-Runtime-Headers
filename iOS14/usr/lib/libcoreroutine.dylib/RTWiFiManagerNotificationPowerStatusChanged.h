/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

