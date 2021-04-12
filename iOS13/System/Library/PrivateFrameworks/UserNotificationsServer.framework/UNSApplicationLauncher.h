/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class UNSLocationMonitor, NSMutableDictionary, NSObject;

@interface UNSApplicationLauncher : NSObject {

	UNSLocationMonitor* _locationMonitor;
	NSMutableDictionary* _bundleIdentifierToAssertions;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)initWithLocationMonitor:(id)arg1 ;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 endpoint:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_removeAllProcessAssertionsAndInvalidate:(BOOL)arg1 ;
-(void)_queue_foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 endpoint:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_queue_actionForNotificationResponse:(id)arg1 bundleIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_queue_backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queue_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(BOOL)arg3 ;
-(id)_queue_newProcessAssertionForBundleID:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 watchdogInterval:(double)arg5 acquisitionHandler:(/*^block*/id)arg6 invalidationHandler:(/*^block*/id)arg7 ;
-(void)_queue_removeProcessAssertionsHavingReason:(unsigned)arg1 forBundleID:(id)arg2 invalidate:(BOOL)arg3 ;
-(void)_queue_addProcessAssertion:(id)arg1 forBundleID:(id)arg2 ;
-(void)_queue_removeAllProcessAssertionsAndInvalidate:(BOOL)arg1 ;
@end

