/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDataStoreRepository, UNSKeyedObservable, NSObject;

@interface UNSNotificationTopicRepository : NSObject {

	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(long long)_maxObjectsPerKey;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(id)allBundleIdentifiers;
-(void)setTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 ;
-(id)topicsForBundleIdentifier:(id)arg1 ;
-(void)_queue_setTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_queue_topicsForBundleIdentifier:(id)arg1 ;
@end

