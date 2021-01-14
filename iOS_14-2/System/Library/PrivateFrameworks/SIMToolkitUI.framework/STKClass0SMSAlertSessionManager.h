/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKAlertSessionManager.h>
#import <libobjc.A.dylib/CoreTelephonyClientSMSDelegate.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/STKIncomingCallUIStateObserver.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, NSMutableArray, STKIncomingCallUIStateMonitor, STKCarrierSubscriptionMonitor, STKClass0SMSAlertSession, NSString;

@interface STKClass0SMSAlertSessionManager : STKAlertSessionManager <CoreTelephonyClientSMSDelegate, SBSRemoteAlertHandleObserver, STKIncomingCallUIStateObserver> {

	CoreTelephonyClient* _telephonyClient;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_pendingAlertSessionsDueToInCallUI;
	STKIncomingCallUIStateMonitor* _queue_incomingCallStateMonitor;
	STKCarrierSubscriptionMonitor* _subscriptionMonitor;
	STKClass0SMSAlertSession* _currentSession;

}

@property (setter=_queue_setCurrentSession:,nonatomic,retain) STKClass0SMSAlertSession * currentSession;              //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,readonly) STKCarrierSubscriptionMonitor * subscriptionMonitor;                                   //@synthesize subscriptionMonitor=_subscriptionMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)handleClass0SMSBody:(id)arg1 address:(id)arg2 responder:(id)arg3 forSlot:(long long)arg4 ;
-(STKCarrierSubscriptionMonitor *)subscriptionMonitor;
-(void)_queue_enqueueSession:(id)arg1 ;
-(id)initWithSubscriptionMonitor:(id)arg1 ;
-(void)_queue_setCurrentSession:(id)arg1 ;
-(void)_queue_handleClass0SMSBody:(id)arg1 address:(id)arg2 responder:(id)arg3 forSlot:(long long)arg4 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)smsMessageClass0Received:(id)arg1 body:(id)arg2 address:(id)arg3 ;
-(STKClass0SMSAlertSession *)currentSession;
-(id)remoteAlertDescriptorForSession:(id)arg1 ;
-(void)incomingCallUIStateDidChange:(BOOL)arg1 ;
@end

