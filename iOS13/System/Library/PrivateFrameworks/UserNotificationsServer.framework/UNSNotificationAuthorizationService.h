/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class UNSDefaultDataProviderFactory, UNSCriticalAlertAuthorizationAlertController, UNSNotificationAuthorizationAlertController, NSObject, CRCarPlayAppPolicyEvaluator;

@interface UNSNotificationAuthorizationService : NSObject {

	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSCriticalAlertAuthorizationAlertController* _criticalAlertAuthorizationAlertController;
	UNSNotificationAuthorizationAlertController* _notificationAuthorizationAlertController;
	NSObject*<OS_dispatch_queue> _queue;
	CRCarPlayAppPolicyEvaluator* _policyEvaluator;

}
-(void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 ;
-(BOOL)_queue_isCarPlayAvailableForApplication:(id)arg1 ;
-(BOOL)_queue_isSpokenAvailableForApplication:(id)arg1 ;
-(id)initWithDataProviderFactory:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

