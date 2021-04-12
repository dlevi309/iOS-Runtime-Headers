/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTMotionActivity;

@interface RTMotionActivityManagerNotificationActivity : RTNotification {

	RTMotionActivity* _activity;

}

@property (nonatomic,readonly) RTMotionActivity * activity;              //@synthesize activity=_activity - In the implementation block
-(RTMotionActivity *)activity;
-(id)initWithActivity:(id)arg1 ;
@end

