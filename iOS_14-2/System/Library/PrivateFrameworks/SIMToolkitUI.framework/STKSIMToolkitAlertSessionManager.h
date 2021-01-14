/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <SIMToolkitUI/STKAlertSessionManager.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/STKUserEventMonitorDelegate.h>
#import <libobjc.A.dylib/STKIncomingCallUIStateObserver.h>

@protocol OS_dispatch_queue, BSInvalidatable, STKTelephonyListItemsProvider, STKAlertSessionResponseProvider;
@class NSObject, CoreTelephonyClient, STKIncomingCallUIStateMonitor, STKUserEventMonitor, STKSIMToolkitAlertSession, STKCarrierSubscriptionMonitor, NSString;

@interface STKSIMToolkitAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, STKUserEventMonitorDelegate, STKIncomingCallUIStateObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _telephonyClient;
	CTServerConnectionRef _serverConnection;
	STKIncomingCallUIStateMonitor* _incomingCallUIStateMonitor;
	id<BSInvalidatable> _haltEventQueueProcessingAssertion;
	int _atHomeScreenNotifyToken;
	id<STKTelephonyListItemsProvider> _listItemsProvider;
	STKUserEventMonitor* _userEventMonitor;
	id<STKAlertSessionResponseProvider> _userEventResponder;
	STKSIMToolkitAlertSession* _currentSession;
	STKCarrierSubscriptionMonitor* _subscriptionMonitor;

}

@property (setter=_queue_setCurrentSession:,nonatomic,retain) STKSIMToolkitAlertSession * currentSession;                     //@synthesize currentSession=_currentSession - In the implementation block
@property (setter=_setListItemsProvider:,nonatomic,retain) id<STKTelephonyListItemsProvider> _listItemsProvider;              //@synthesize listItemsProvider=_listItemsProvider - In the implementation block
@property (nonatomic,readonly) STKCarrierSubscriptionMonitor * subscriptionMonitor;                                           //@synthesize subscriptionMonitor=_subscriptionMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(STKCarrierSubscriptionMonitor *)subscriptionMonitor;
-(id)initWithSubscriptionMonitor:(id)arg1 ;
-(void)_queue_handleSIMToolkitEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3 ;
-(void)_queue_setCurrentSession:(id)arg1 ;
-(void)_queue_startListening;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)_newSessionBehaviorFromOptions:(id)arg1 ;
-(id)_listItemsFromCTItems:(id)arg1 ;
-(STKSIMToolkitAlertSession *)currentSession;
-(void)userEventDidOccur:(id)arg1 ;
-(id)remoteAlertDescriptorForSession:(id)arg1 ;
-(id<STKTelephonyListItemsProvider>)_listItemsProvider;
-(void)incomingCallUIStateDidChange:(BOOL)arg1 ;
-(void)_setListItemsProvider:(id)arg1 ;
-(void)handleSIMToolkitEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3 ;
@end

