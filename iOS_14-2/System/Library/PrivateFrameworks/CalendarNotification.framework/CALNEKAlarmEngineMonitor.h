/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNAlarmEngineMonitor.h>
#import <libobjc.A.dylib/CADModule.h>

@class NSNotificationCenter, _EKAlarmEngine, NSString;

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule> {

	BOOL _active;
	NSNotificationCenter* _notificationCenter;
	_EKAlarmEngine* _alarmEngine;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) _EKAlarmEngine * alarmEngine;                           //@synthesize alarmEngine=_alarmEngine - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_EKAlarmEngine *)alarmEngine;
-(void)didRegisterForAlarms;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)removeAlarmsFiredObserver:(id)arg1 ;
-(BOOL)isActive;
-(void)protectedDataDidBecomeAvailable;
-(void)deactivate;
-(void)activate;
-(void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithAlarmEngine:(id)arg1 notificationCenter:(id)arg2 ;
@end

