/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

