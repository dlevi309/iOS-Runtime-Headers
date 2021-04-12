/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNSLocationMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSString, UNSNotificationRepository, UNSNotificationScheduleRepository, UNSPendingNotificationRepository, NSMutableArray, UNSLocationMonitor, PCPersistentTimer, NSObject;

@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver> {

	NSString* _bundleIdentifier;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationScheduleRepository* _notificationScheduleRepository;
	UNSPendingNotificationRepository* _pendingNotificationRepository;
	NSMutableArray* _lazy_pendingNotificationsAwaitingDelivery;
	UNSLocationMonitor* _locationMonitor;
	PCPersistentTimer* _localNotificationTimer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _monitoringLocaleAndTimeChanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dateFormatter;
-(id)pendingNotificationRecords;
-(void)_setRequestDateForPendingNotificationRecords:(id)arg1 ;
-(void)removeAllPendingNotificationRecords;
-(void)removePendingNotificationRecords:(id)arg1 ;
-(void)_invalidateNotificationRecordTimersAndRegionMonitors;
-(void)_fireNotification:(id)arg1 ;
-(void)_setPendingNotificationRecords:(id)arg1 ;
-(id)undeliveredNotificationRecords;
-(void)setPendingNotificationRecords:(id)arg1 ;
-(void)handleSignificantTimeChange;
-(void)_queue_triggerDidFireForDate:(id)arg1 ;
-(void)_queue_triggerDidFireForRegion:(id)arg1 ;
-(void)_queue_triggerDidFireForTimer:(id)arg1 ;
-(void)_setMonitoredRegions:(id)arg1 ;
-(void)handleLocaleChange;
-(void)_updateTimersForPendingNotificationRecords:(id)arg1 ;
-(void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)arg1 ;
-(void)removePendingNotificationRecordsWithIdentifiers:(id)arg1 ;
-(void)_invalidatePendingNotificationRecordTimers;
-(void)locationMonitor:(id)arg1 triggerDidFireForRegion:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)_setLastLocalNotificationFireDate:(id)arg1 ;
-(id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4 bundleIdentifier:(id)arg5 queue:(id)arg6 ;
-(void)handleApplicationStateRestore;
-(void)invalidate;
-(void)_invalidatePendingNotificationRecordRegionMonitors;
-(id)_sanitizeNotificationRecords:(id)arg1 ;
-(void)addPendingNotificationRecords:(id)arg1 ;
-(id)_lastLocalNotificationFireDate;
-(id)_pendingNotificationRecords;
-(void)_updateRegionMonitorsForPendingNotificationRecords:(id)arg1 ;
-(void)dealloc;
@end

