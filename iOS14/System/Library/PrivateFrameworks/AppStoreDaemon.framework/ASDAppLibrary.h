/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, ASDNotificationCenter, NSString;

@interface ASDAppLibrary : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;
	ASDNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(long long)launchApp:(id)arg1 ;
+(void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)uninstallApp:(id)arg1 requestUserConfirmation:(BOOL)arg2 withResultHandler:(/*^block*/id)arg3 ;
+(id)interface;
+(void)launchMessagesExtensionForApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)launchApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)uninstallApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(long long)launchApp:(id)arg1 onPairedDevice:(id)arg2 ;
+(long long)launchMessagesExtensionForApp:(id)arg1 ;
+(void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(/*^block*/id)arg3 ;
+(void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 notificationCenter:(id)arg2 ;
@end

