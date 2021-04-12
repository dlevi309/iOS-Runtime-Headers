/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSLocalizationService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _bundleIdentifierToBundle;
	NSMutableDictionary* _bundleIdentifierToBundleURL;

}
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(id)init;
-(void)_queue_notificationSourcesDidInstall:(id)arg1 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(id)bundleWithIdentifier:(id)arg1 ;
-(id)_queue_bundleWithIdentifier:(id)arg1 ;
@end

