/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NCNotificationViewController, NSTimer;

@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider {

	NCNotificationViewController* _viewController;
	double _fireTime;
	NSTimer* _tickTimer;

}

@property (assign,nonatomic) double fireTime;                                            //@synthesize fireTime=_fireTime - In the implementation block
@property (nonatomic,retain) NSTimer * tickTimer;                                        //@synthesize tickTimer=_tickTimer - In the implementation block
@property (nonatomic,retain) NCNotificationViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(NCNotificationViewController *)arg1 ;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(NCNotificationViewController *)viewController;
-(id)secondaryText;
-(id)title;
-(void)invalidateTimer;
-(void)dealloc;
-(id)_formatDuration:(double)arg1 ;
-(void)_tickTimerFired:(id)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2 ;
-(NSTimer *)tickTimer;
-(void)setTickTimer:(NSTimer *)arg1 ;
@end

