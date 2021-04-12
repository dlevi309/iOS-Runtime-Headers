/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBAssertionManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging;
@class RBProcess;

@interface RBConnectionContext : NSObject {

	id<RBAssertionManaging> _assertionManager;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBProcessManaging> _processManager;
	id<RBProcessMonitoring> _processMonitor;
	id<RBStateCaptureManaging> _stateCaptureManager;
	RBProcess* _process;

}

@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager;                    //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager;                //@synthesize entitlementManager=_entitlementManager - In the implementation block
@property (nonatomic,readonly) id<RBProcessManaging> processManager;                        //@synthesize processManager=_processManager - In the implementation block
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor;                      //@synthesize processMonitor=_processMonitor - In the implementation block
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager;              //@synthesize stateCaptureManager=_stateCaptureManager - In the implementation block
@property (nonatomic,readonly) RBProcess * process;                                         //@synthesize process=_process - In the implementation block
-(id<RBProcessManaging>)processManager;
-(RBProcess *)process;
-(id<RBEntitlementManaging>)entitlementManager;
-(id<RBAssertionManaging>)assertionManager;
-(id<RBProcessMonitoring>)processMonitor;
-(id<RBStateCaptureManaging>)stateCaptureManager;
-(id)initWithAssertionManager:(id)arg1 entitlementManager:(id)arg2 processManager:(id)arg3 processMonitor:(id)arg4 stateCaptureManager:(id)arg5 process:(id)arg6 ;
@end

