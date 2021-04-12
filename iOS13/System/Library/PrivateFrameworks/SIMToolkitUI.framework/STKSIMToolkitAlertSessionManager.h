/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <SIMToolkitUI/STKAlertSessionManager.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/STKUserEventMonitorDelegate.h>
#import <libobjc.A.dylib/STKIncomingCallUIStateObserver.h>

@protocol OS_dispatch_queue, BSInvalidatable, STKTelephonyListItemsProvider, STKAlertSessionResponseProvider;
@class NSObject, STKIncomingCallUIStateMonitor, STKUserEventMonitor, STKSIMToolkitAlertSession, NSString;

@interface STKSIMToolkitAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, STKUserEventMonitorDelegate, STKIncomingCallUIStateObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	CTServerConnectionRef _serverConnection;
	STKIncomingCallUIStateMonitor* _incomingCallUIStateMonitor;
	id<BSInvalidatable> _haltEventQueueProcessingAssertion;
	int _atHomeScreenNotifyToken;
	id<STKTelephonyListItemsProvider> _listItemsProvider;
	STKUserEventMonitor* _userEventMonitor;
	id<STKAlertSessionResponseProvider> _userEventResponder;
	STKSIMToolkitAlertSession* _currentSession;

}

@property (setter=_queue_setCurrentSession:,nonatomic,retain) STKSIMToolkitAlertSession * currentSession;                     //@synthesize currentSession=_currentSession - In the implementation block
@property (setter=_setListItemsProvider:,nonatomic,retain) id<STKTelephonyListItemsProvider> _listItemsProvider;              //@synthesize listItemsProvider=_listItemsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(STKSIMToolkitAlertSession *)currentSession;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)remoteAlertDescriptorForSession:(id)arg1 ;
-(id)initWithEventQueue:(id)arg1 logger:(id)arg2 ;
-(void)_queue_startListening;
-(void)_queue_setCurrentSession:(id)arg1 ;
-(void)incomingCallUIStateDidChange:(BOOL)arg1 ;
-(void)_queue_handleSIMToolkitEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3 ;
-(id)_newSessionBehaviorFromOptions:(id)arg1 ;
-(id)_listItemsFromCTItems:(id)arg1 ;
-(void)userEventDidOccur:(id)arg1 ;
-(void)handleSIMToolkitEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3 ;
-(id<STKTelephonyListItemsProvider>)_listItemsProvider;
-(void)_setListItemsProvider:(id)arg1 ;
@end

