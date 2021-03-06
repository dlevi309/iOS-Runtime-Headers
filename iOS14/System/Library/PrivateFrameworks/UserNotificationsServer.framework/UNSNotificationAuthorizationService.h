/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_didForegroundApplicationWithBundleIdentifier:(id)arg1 ;
-(void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithDataProviderFactory:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 expirationDate:(id)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_queue_isCarPlayAvailableForApplication:(id)arg1 ;
-(BOOL)_queue_isSpokenAvailableForApplication:(id)arg1 ;
-(void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 withExpirationDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

