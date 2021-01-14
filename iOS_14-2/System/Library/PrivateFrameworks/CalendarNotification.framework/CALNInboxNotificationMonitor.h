/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didRegisterForAlarms;
-(void)addNotificationsChangedObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)addNotificationsLoadedObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(BOOL)isActive;
-(void)protectedDataDidBecomeAvailable;
-(void)deactivate;
-(void)activate;
-(unsigned long long)eventNotificationCount;
-(void)removeNotificationsLoadedObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)addNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithEventStoreProvider:(id)arg1 ;
-(void)removeNotificationsChangedObserver:(id)arg1 ;
-(NSArray *)eventNotificationReferences;
-(_EKNotificationMonitor *)notificationMonitor;
@end

