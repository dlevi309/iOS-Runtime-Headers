/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface UNSAuthorizationAlertController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _bundleIdentifersForActiveAlerts;
	NSMutableDictionary* _bundleIdentifiersToResultBlocks;

}
-(id)initWithQueue:(id)arg1 ;
-(void)requestAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_queue_addResultBlock:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_queue_isAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_queue_addAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
@end

