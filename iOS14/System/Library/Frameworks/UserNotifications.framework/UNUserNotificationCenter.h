/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <libobjc.A.dylib/UNUserNotificationServiceConnectionObserver.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegateConnectionListenerDelegate.h>

@protocol UNUserNotificationCenterDelegate, OS_dispatch_queue, UNUserNotificationCenterDelegatePrivate;
@class NSString, NSObject;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate> {

	id<UNUserNotificationCenterDelegate> _delegate;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	id<UNUserNotificationCenterDelegatePrivate> _privateDelegate;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegatePrivate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsContentExtensions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsContentExtensions;
+(id)currentNotificationCenter;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(BOOL)supportsContentExtensions;
-(id)badgeNumber;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)removeSimilarNotificationRequests:(id)arg1 ;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)setNotificationRequests:(id)arg1 ;
-(id<UNUserNotificationCenterDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)didOpenApplicationForResponse:(id)arg1 ;
-(void)setNotificationCategories:(id)arg1 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)notificationSettingsForTopics;
-(void)setDelegate:(id<UNUserNotificationCenterDelegate>)arg1 ;
-(void)requestRemoveAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)removeAllPendingNotificationRequests;
-(id<UNUserNotificationCenterDelegatePrivate>)privateDelegate;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)getNotificationTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)notificationCategories;
-(void)getNotificationSettingsForTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllDeliveredNotifications;
-(void)setWantsNotificationResponsesDelivered;
-(id)notificationTopics;
-(void)setPrivateDelegate:(id<UNUserNotificationCenterDelegatePrivate>)arg1 ;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)didChangeSettings:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)clearedInfoForDataProviderMigration;
-(void)getPendingNotificationRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addNotificationRequest:(id)arg1 ;
-(void)getNotificationCategoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)pendingNotificationRequests;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getDeliveredNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNotificationTopics:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)notificationSettings;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)deliveredNotifications;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getNotificationSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getBadgeNumberWithCompletionHandler:(/*^block*/id)arg1 ;
@end

