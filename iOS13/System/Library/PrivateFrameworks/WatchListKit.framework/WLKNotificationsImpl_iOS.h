/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegatePrivate.h>
#import <libobjc.A.dylib/WLKNotificationsImpl.h>

@protocol WLKNotificationCenterDelegate;
@class NSString;

@interface WLKNotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl> {

	BOOL _topicsAreInitialized;
	id<WLKNotificationCenterDelegate> delegate;

}

@property (assign,nonatomic) BOOL topicsAreInitialized;                                      //@synthesize topicsAreInitialized=_topicsAreInitialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate; 
+(id)_JSONDictForResponse:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<WLKNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
-(id)_notificationCenter;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didOpenApplicationForResponse:(id)arg2 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(BOOL)isCategoryEnabledByUser:(long long)arg1 ;
-(id)_topicIdentifierForCategory:(long long)arg1 ;
-(void)_networkReachabilityDidChangeNotification:(id)arg1 ;
-(void)_initializeTopics;
-(unsigned long long)_authOptions;
-(void)_fetchTopics:(/*^block*/id)arg1 ;
-(void)setTopicsAreInitialized:(BOOL)arg1 ;
-(id)_displayNameForSubsectionID:(id)arg1 ;
-(BOOL)topicsAreInitialized;
@end

