/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NotificationCenter, NSObject;

@interface HAENotificationCenterManager : NSObject {

	NotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _eventQueue;
	double _liveThresholdInDBA;
	NSObject*<OS_dispatch_semaphore> _sem;

}
+(id)sharedInstance;
-(id)init;
-(id)addHAENotificationEvent:(id)arg1 ;
-(id)sendBannerNotificationWithEvent:(id)arg1 volumeLoweringAction:(unsigned)arg2 ;
-(void)donateSignalToTipsKit:(id)arg1 ;
-(id)sendLiveExposureEvent:(id)arg1 volumeLoweringAction:(unsigned)arg2 ;
-(id)sendWeeklyExposureEvent:(id)arg1 volumeLoweringAction:(unsigned)arg2 ;
@end

