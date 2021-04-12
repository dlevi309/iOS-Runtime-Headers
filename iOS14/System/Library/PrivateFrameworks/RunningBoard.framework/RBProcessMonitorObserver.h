/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBProcessMonitorObserving.h>

@protocol RBProcessMonitoring, RBProcessMonitorObserverConnection, OS_dispatch_queue;
@class RBProcess, NSObject, RBProcessMap, NSMutableArray, NSSet, NSMutableDictionary, RBSProcessStateDescriptor, NSHashTable, NSString;

@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving> {

	id<RBProcessMonitoring> _monitor;
	RBProcess* _process;
	id<RBProcessMonitorObserverConnection> _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	unsigned _qos;
	RBProcessMap* _pendingProcessState;
	NSMutableArray* _pendingExitEvents;
	NSSet* _pendingPreventLaunchPredicates;
	NSMutableDictionary* _configurations;
	RBSProcessStateDescriptor* _stateDescriptor;
	NSHashTable* _matchedHandles;
	BOOL _extantStateUpdate;
	BOOL _extantEventUpdate;
	BOOL _didClearState;
	double _lastSend;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)captureState;
-(void)_lock_sendPendingStateUpdates;
-(void)removeConfigurationWithIdentifier:(unsigned long long)arg1 ;
-(void)addConfiguration:(id)arg1 ;
-(void)_lock_addConfigurationStatesToPending:(id)arg1 ;
-(id)initWithMonitor:(id)arg1 forProcess:(id)arg2 connection:(id)arg3 ;
-(void)didObserveProcessExit:(id)arg1 ;
-(void)_lock_addAllConfiguredStatesToPending;
-(void)processMonitor:(id)arg1 didChangeProcessStates:(id)arg2 ;
-(NSString *)description;
-(NSString *)stateCaptureTitle;
-(void)_lock_checkForBadActorWithPendingStates:(id)arg1 ;
-(void)_lock_rebuildConfiguration;
-(void)didResolvePreventLaunchPredicates:(id)arg1 ;
-(void)_lock_clearPendingNonterminalStates;
-(void)invalidate;
-(void)dealloc;
@end

