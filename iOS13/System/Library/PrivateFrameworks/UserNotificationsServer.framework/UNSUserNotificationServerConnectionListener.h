/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationServerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableDictionary, NSMapTable, UNSApplicationLauncher, UNSLocalizationService, UNSNotificationCategoryRepository, UNSNotificationSchedulingService, UNSNotificationAuthorizationService, UNSNotificationSettingsService, UNSNotificationRepository, UNSNotificationTopicRepository, UNSUserNotificationServerRemoteNotificationConnectionListener, UNSRemoteNotificationServer, UNSAttachmentsService, UNSLocationMonitor, NSString;

@interface UNSUserNotificationServerConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationServerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableDictionary* _connectionsByBundleIdentifier;
	NSMapTable* _bundleIdentifiersByConnection;
	UNSApplicationLauncher* _applicationLauncher;
	UNSLocalizationService* _localizationService;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSNotificationAuthorizationService* _notificationsAuthorizationService;
	UNSNotificationSettingsService* _notificationSettingsService;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationTopicRepository* _topicRepository;
	UNSUserNotificationServerRemoteNotificationConnectionListener* _remoteNotificationConnectionListener;
	UNSRemoteNotificationServer* _remoteNotificationService;
	UNSAttachmentsService* _attachmentsService;
	UNSLocationMonitor* _locationMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_currentConnection;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setObservingUserNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 ;
-(void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 ;
-(void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)initWithCategoryRepository:(id)arg1 notificationSchedulingService:(id)arg2 notificationAuthorizationService:(id)arg3 notificationSettingsService:(id)arg4 notificationRepository:(id)arg5 remoteNotificationConnectionListener:(id)arg6 remoteNotificationService:(id)arg7 applicationLauncher:(id)arg8 attachmentsService:(id)arg9 locationMonitor:(id)arg10 topicRepository:(id)arg11 localizationService:(id)arg12 ;
-(void)_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(id)_queue_observerConnectionsForBundleIdentifier:(id)arg1 ;
-(void)_saveNotificationRequest:(id)arg1 shouldRepost:(BOOL)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)_queue_notificationsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)_queue_notificationRequestsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)_queue_delegateConnectionForBundleIdentifier:(id)arg1 ;
@end

