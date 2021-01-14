/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

