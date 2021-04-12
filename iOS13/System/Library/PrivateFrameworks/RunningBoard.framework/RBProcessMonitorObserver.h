/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBProcessMonitorObserving.h>

@protocol RBProcessMonitoring, RBProcessMonitorObserverConnection, OS_dispatch_queue;
@class RBProcess, NSObject, RBProcessMap, NSMutableDictionary, RBSProcessStateDescriptor, NSHashTable, NSString;

@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving> {

	id<RBProcessMonitoring> _monitor;
	RBProcess* _process;
	id<RBProcessMonitorObserverConnection> _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	unsigned _qos;
	RBProcessMap* _pendingProcessState;
	NSMutableDictionary* _configurations;
	RBSProcessStateDescriptor* _stateDescriptor;
	NSHashTable* _matchedHandles;
	BOOL _extantUpdate;
	BOOL _didClearStateForSuspended;
	double _lastSend;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)captureState;
-(void)removeConfigurationWithIdentifier:(unsigned long long)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)initWithMonitor:(id)arg1 forProcess:(id)arg2 connection:(id)arg3 ;
-(void)addConfiguration:(id)arg1 ;
-(void)processMonitor:(id)arg1 didChangeProcessStates:(id)arg2 ;
-(void)_lock_addConfigurationStatesToPending:(id)arg1 ;
-(void)_lock_rebuildConfiguration;
-(void)_lock_sendPendingStateUpdates;
-(void)_lock_addAllConfiguredStatesToPending;
@end

