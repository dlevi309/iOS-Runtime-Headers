/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <SIMToolkitUI/STKAlertSessionManager.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSMutableArray, STKUSSDAlertSession, STKCarrierSubscriptionMonitor, NSString;

@interface STKUSSDAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, CoreTelephonyClientSuppServicesDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CTServerConnectionRef _serverConnection;
	CoreTelephonyClient* _coreTelephonyClient;
	NSMutableArray* _activeUSSDSessions;
	NSMutableArray* _finishedUSSDSessions;
	STKUSSDAlertSession* _coalescingUSSDSession;
	NSMutableArray* _activeSupplementaryServicesSessions;
	NSMutableArray* _finishedSupplementaryServicesSessions;
	STKCarrierSubscriptionMonitor* _subscriptionMonitor;

}

@property (nonatomic,readonly) STKCarrierSubscriptionMonitor * subscriptionMonitor;              //@synthesize subscriptionMonitor=_subscriptionMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4 ;
-(void)suppServicesStarted:(id)arg1 ;
-(void)suppServicesCompleted:(id)arg1 ;
-(void)suppServicesError:(id)arg1 error:(id)arg2 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)initWithSubscriptionMonitor:(id)arg1 ;
-(id)remoteAlertDescriptorForSession:(id)arg1 ;
-(void)_willPresentAlertHandle:(id)arg1 ;
-(void)_queue_startListening;
-(void)_queue_handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3 ;
-(id)_supplementaryServicesResponder;
-(void)handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3 ;
-(void)_executeOnQueue:(/*^block*/id)arg1 ;
-(STKCarrierSubscriptionMonitor *)subscriptionMonitor;
@end

