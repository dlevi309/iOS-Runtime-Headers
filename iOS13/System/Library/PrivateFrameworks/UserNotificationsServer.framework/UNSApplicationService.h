/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSMutableDictionary, UNSApplicationLauncher, UNSNotificationCategoryRepository, UNSLocalizationService, NSObject;

@interface UNSApplicationService : NSObject {

	NSMutableSet* _foregroundBundleIdentifiers;
	NSMutableDictionary* _processBundleIdentifiersToApplicationBundleIdentifiers;
	UNSApplicationLauncher* _applicationLauncher;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSLocalizationService* _localizationService;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(id)initWithApplicationLauncher:(id)arg1 categoryRepository:(id)arg2 localizationService:(id)arg3 ;
-(BOOL)isApplicationForeground:(id)arg1 ;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_notificationSourcesDidInstall:(id)arg1 ;
-(void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

