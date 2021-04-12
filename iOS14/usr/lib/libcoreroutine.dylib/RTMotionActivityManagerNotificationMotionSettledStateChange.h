/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification {

	unsigned long long _settledState;

}

@property (nonatomic,readonly) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)settledState;
-(id)initWithSettledState:(unsigned long long)arg1 ;
@end

