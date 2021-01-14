/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

@class RBProcess;


@protocol RBDaemonContextProviding <NSObject>
@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager; 
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager; 
@property (nonatomic,readonly) id<RBProcessManaging> processManager; 
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor; 
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager; 
@property (nonatomic,readonly) RBProcess * process; 
@required
-(RBProcess *)process;
-(id<RBAssertionManaging>)assertionManager;
-(id<RBProcessManaging>)processManager;
-(id<RBProcessMonitoring>)processMonitor;
-(id<RBEntitlementManaging>)entitlementManager;
-(id<RBStateCaptureManaging>)stateCaptureManager;

@end

