/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(id)title;
-(void)setViewController:(NCNotificationViewController *)arg1 ;
-(NCNotificationViewController *)viewController;
-(void)invalidateTimer;
-(id)secondaryText;
-(void)_tickTimerFired:(id)arg1 ;
-(id)_formatDuration:(double)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2 ;
-(NSTimer *)tickTimer;
-(void)setTickTimer:(NSTimer *)arg1 ;
@end

