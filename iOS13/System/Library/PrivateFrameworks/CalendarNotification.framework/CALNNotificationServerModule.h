/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CADModule.h>

@class CALNInboxNotificationMonitor, CALNNotificationServer, CALNNotificationSourceRefresher, CALNCalendarAppBadgeUpdater, CALNNotificationStorageWrapper, CALNNotificationIconUpdater, NSArray, NSString;

@interface CALNNotificationServerModule : NSObject <CADModule> {

	CALNInboxNotificationMonitor* _inboxNotificationMonitor;
	CALNNotificationServer* _calendarNotificationServer;
	CALNNotificationSourceRefresher* _notificationSourceRefresher;
	CALNCalendarAppBadgeUpdater* _calendarAppBadgeUpdater;
	CALNNotificationStorageWrapper* _calendarStorageWrapper;
	CALNNotificationStorageWrapper* _remindersStorageWrapper;
	CALNNotificationIconUpdater* _iconUpdater;
	NSArray* _modules;

}

@property (nonatomic,readonly) CALNInboxNotificationMonitor * inboxNotificationMonitor;                    //@synthesize inboxNotificationMonitor=_inboxNotificationMonitor - In the implementation block
@property (nonatomic,readonly) CALNNotificationServer * calendarNotificationServer;                        //@synthesize calendarNotificationServer=_calendarNotificationServer - In the implementation block
@property (nonatomic,readonly) CALNNotificationSourceRefresher * notificationSourceRefresher;              //@synthesize notificationSourceRefresher=_notificationSourceRefresher - In the implementation block
@property (nonatomic,readonly) CALNCalendarAppBadgeUpdater * calendarAppBadgeUpdater;                      //@synthesize calendarAppBadgeUpdater=_calendarAppBadgeUpdater - In the implementation block
@property (nonatomic,readonly) CALNNotificationStorageWrapper * calendarStorageWrapper;                    //@synthesize calendarStorageWrapper=_calendarStorageWrapper - In the implementation block
@property (nonatomic,readonly) CALNNotificationStorageWrapper * remindersStorageWrapper;                   //@synthesize remindersStorageWrapper=_remindersStorageWrapper - In the implementation block
@property (nonatomic,readonly) CALNNotificationIconUpdater * iconUpdater;                                  //@synthesize iconUpdater=_iconUpdater - In the implementation block
@property (nonatomic,readonly) NSArray * modules;                                                          //@synthesize modules=_modules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_timeToLeaveRefreshStorage;
+(id)_protectedCalendarNotificationStorage;
+(id)_unprotectedCalendarNotificationStorage;
+(id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8 iconCache:(id)arg9 ;
+(id)_createNotificationServerWithUserNotificationCenter:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8 ;
+(id)_createNotificationSourcesWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 inboxNotificationProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7 ;
+(id)_triggeredEventNotificationDataStorage;
+(id)_notificationStoragePathWithName:(id)arg1 ;
+(id)_createNotificationStorageAtPath:(id)arg1 ;
+(void)_setProtectedClassForStorageAtPath:(id)arg1 ;
+(id)_triggeredEventNotificationDataStoragePathWithName:(id)arg1 ;
+(id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg1 ;
+(id)_timeToLeaveRefreshStoragePathWithName:(id)arg1 ;
+(id)_createTimeToLeaveRefreshStorageAtPath:(id)arg1 ;
-(id)init;
-(void)activate;
-(void)deactivate;
-(NSArray *)modules;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)didRegisterForBackgroundTaskAgentJobs;
-(CALNInboxNotificationMonitor *)inboxNotificationMonitor;
-(void)_registerSettingsCaptureHandlers;
-(void)_updateSourceClientIdentifiersIfNeeded;
-(CALNNotificationSourceRefresher *)notificationSourceRefresher;
-(CALNNotificationServer *)calendarNotificationServer;
-(CALNNotificationStorageWrapper *)calendarStorageWrapper;
-(void)_reloadNotificationsFromUnprotectedStorage:(id)arg1 intoProtectedStorage:(id)arg2 withStorageWrapper:(id)arg3 forNotificationServer:(id)arg4 ;
-(void)_reloadNotificationRecords:(id)arg1 forNotificationServer:(id)arg2 ;
-(void)_removeNotificationsFromUnprotectedStorage:(id)arg1 ;
-(void)_reloadNotificationsAfterFirstUnlock;
-(CALNNotificationIconUpdater *)iconUpdater;
-(CALNCalendarAppBadgeUpdater *)calendarAppBadgeUpdater;
-(CALNNotificationStorageWrapper *)remindersStorageWrapper;
@end

