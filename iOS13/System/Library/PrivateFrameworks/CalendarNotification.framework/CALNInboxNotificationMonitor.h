/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CADModule.h>
#import <libobjc.A.dylib/CALNInboxNotificationProvider.h>

@class NSArray, _EKNotificationMonitor, NSString;

@interface CALNInboxNotificationMonitor : NSObject <CADModule, CALNInboxNotificationProvider> {

	BOOL _active;
	_EKNotificationMonitor* _notificationMonitor;

}

@property (nonatomic,readonly) _EKNotificationMonitor * notificationMonitor;              //@synthesize notificationMonitor=_notificationMonitor - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * eventNotificationReferences; 
@property (nonatomic,readonly) unsigned long long eventNotificationCount; 
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)activate;
-(void)deactivate;
-(unsigned long long)eventNotificationCount;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)didRegisterForBackgroundTaskAgentJobs;
-(void)addNotificationsChangedObserver:(id)arg1 selector:(SEL)arg2 ;
-(NSArray *)eventNotificationReferences;
-(_EKNotificationMonitor *)notificationMonitor;
-(id)initWithEventStoreProvider:(id)arg1 ;
-(void)removeNotificationsChangedObserver:(id)arg1 ;
-(void)addNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2 ;
@end

