/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class MTAlarmStorage, MTTimerStorage, MTMetrics, NSString;

@interface MTUserNotificationActionDispatcher : NSObject <UNUserNotificationCenterDelegate> {

	MTAlarmStorage* _alarmStorage;
	MTTimerStorage* _timerStorage;
	MTMetrics* _metrics;

}

@property (nonatomic,retain) MTAlarmStorage * alarmStorage;              //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTTimerStorage * timerStorage;              //@synthesize timerStorage=_timerStorage - In the implementation block
@property (nonatomic,retain) MTMetrics * metrics;                        //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_timerNotificationActionForUserNotificationAction:(id)arg1 ;
+(unsigned long long)_alarmNotificationActionForUserNotificationAction:(id)arg1 category:(id)arg2 ;
-(void)setMetrics:(MTMetrics *)arg1 ;
-(MTMetrics *)metrics;
-(MTAlarmStorage *)alarmStorage;
-(void)_handleAlarmNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setTimerStorage:(MTTimerStorage *)arg1 ;
-(void)handleAlarmNotificationIdentifier:(id)arg1 action:(unsigned long long)arg2 category:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithAlarmStorage:(id)arg1 timerStorage:(id)arg2 ;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(void)_handleTimerNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(MTTimerStorage *)timerStorage;
@end

