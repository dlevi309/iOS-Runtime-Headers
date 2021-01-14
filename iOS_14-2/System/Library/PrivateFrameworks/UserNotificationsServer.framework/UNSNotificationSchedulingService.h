/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class UNSNotificationRepository, UNSPendingNotificationRepository, UNSNotificationScheduleRepository, UNSLocationMonitor, NSMutableDictionary, NSObject;

@interface UNSNotificationSchedulingService : NSObject {

	UNSNotificationRepository* _notificationRepository;
	UNSPendingNotificationRepository* _pendingNotificationRepository;
	UNSNotificationScheduleRepository* _notificationScheduleRepository;
	UNSLocationMonitor* _locationMonitor;
	NSMutableDictionary* _clients;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)timeDidChangeSignificantly;
-(id)_queue_clientForBundleIdentifier:(id)arg1 ;
-(id)_queue_undeliveredNotificationRequestsForBundleIdentifier:(id)arg1 ;
-(void)_queue_applicationStateDidRestore;
-(id)_queue_addClientForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeClientForBundleIdentifier:(id)arg1 ;
-(void)_queue_localeDidChange;
-(void)removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_queue_removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)applicationStateDidRestore;
-(void)_queue_removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)undeliveredNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_timeDidChangeSignificantly;
-(id)pendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)localeDidChange;
-(void)removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4 ;
-(void)removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

