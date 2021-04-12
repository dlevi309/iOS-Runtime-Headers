/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <libobjc.A.dylib/UNUserNotificationClientProtocol.h>
#import <libobjc.A.dylib/UNUserNotificationServerProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSString;

@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol> {

	NSMutableDictionary* _observersByBundleIdentifier;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,retain) NSMutableDictionary * observersByBundleIdentifier;              //@synthesize observersByBundleIdentifier=_observersByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callOutQueue;                      //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_invalidate;
-(void)performBlockOnConnectionQueue:(/*^block*/id)arg1 ;
-(void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)notificationCategoriesForBundleIdentifier:(id)arg1 ;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_interruptedConnection;
-(void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)notificationSettingsForBundleIdentifier:(id)arg1 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)deliveredNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1 ;
-(void)setCallOutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservingUserNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)notificationTopicsForBundleIdentifier:(id)arg1 ;
-(void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)pendingNotificationRequestsForBundleIdentifier:(id)arg1 ;
-(NSMutableDictionary *)observersByBundleIdentifier;
-(id)badgeNumberForBundleIdentifier:(id)arg1 ;
-(void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)clearedInfoForBundleIdentifier:(id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObserversByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_queue_invalidatedConnection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_queue_ensureConnection;
@end

