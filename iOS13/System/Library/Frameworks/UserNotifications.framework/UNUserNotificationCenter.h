/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)currentNotificationCenter;
+(BOOL)supportsContentExtensions;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<UNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<UNUserNotificationCenterDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)notificationSettings;
-(id<UNUserNotificationCenterDelegatePrivate>)privateDelegate;
-(void)setPrivateDelegate:(id<UNUserNotificationCenterDelegatePrivate>)arg1 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)badgeNumber;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setNotificationCategories:(id)arg1 ;
-(void)getNotificationCategoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getNotificationSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)notificationCategories;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeSimilarNotificationRequests:(id)arg1 ;
-(void)removeAllPendingNotificationRequests;
-(void)setNotificationRequests:(id)arg1 ;
-(id)pendingNotificationRequests;
-(void)setWantsNotificationResponsesDelivered;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)didChangeSettings:(id)arg1 ;
-(void)didOpenApplicationForResponse:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 queue:(id)arg2 ;
-(BOOL)supportsContentExtensions;
-(void)getPendingNotificationRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addNotificationRequest:(id)arg1 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)deliveredNotifications;
-(void)getDeliveredNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllDeliveredNotifications;
-(void)getBadgeNumberWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNotificationTopics:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getNotificationTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)notificationTopics;
-(void)getNotificationSettingsForTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)notificationSettingsForTopics;
@end

