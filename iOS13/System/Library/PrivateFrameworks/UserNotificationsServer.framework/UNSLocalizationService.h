/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSLocalizationService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _bundleIdentifierToBundle;
	NSMutableDictionary* _bundleIdentifierToBundleURL;

}
-(id)init;
-(id)bundleWithIdentifier:(id)arg1 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(id)_queue_bundleWithIdentifier:(id)arg1 ;
-(void)_queue_notificationSourcesDidInstall:(id)arg1 ;
@end

