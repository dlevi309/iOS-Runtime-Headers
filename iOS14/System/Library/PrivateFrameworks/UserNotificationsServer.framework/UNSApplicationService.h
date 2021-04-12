/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, UNSApplicationLauncher, UNSNotificationCategoryRepository, UNSLocalizationService, NSObject;

@interface UNSApplicationService : NSObject {

	NSMutableSet* _foregroundBundleIdentifiers;
	UNSApplicationLauncher* _applicationLauncher;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSLocalizationService* _localizationService;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isApplicationForeground:(id)arg1 ;
-(void)_queue_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(id)initWithApplicationLauncher:(id)arg1 categoryRepository:(id)arg2 localizationService:(id)arg3 ;
@end

