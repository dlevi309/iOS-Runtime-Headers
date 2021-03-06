/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBAssertionManagerDelegate.h>
#import <libobjc.A.dylib/RBProcessManagerDelegate.h>
#import <libobjc.A.dylib/RBBundlePropertiesManagerDelegate.h>
#import <libobjc.A.dylib/RBPowerAssertionManagerDelegate.h>
#import <libobjc.A.dylib/RBDaemonContextProviding.h>

@class RBProcess, RBAssertionDescriptorValidator, RBAssertionManager, RBAssertionOriginatorPidStore, RBDomainAttributeManager, RBBundlePropertiesManager, RBEntitlementManager, RBConnectionListener, RBJetsamBandProvider, RBPowerAssertionManager, RBProcessManager, RBProcessMonitor, RBProcessReconnectManager, RBStateCaptureManager, RBThrottleBestEffortNetworkingManager, NSString;

@interface RBDaemon : NSObject <RBAssertionManagerDelegate, RBProcessManagerDelegate, RBBundlePropertiesManagerDelegate, RBPowerAssertionManagerDelegate, RBDaemonContextProviding> {

	RBAssertionDescriptorValidator* _assertionDescriptorValidator;
	RBAssertionManager* _assertionManager;
	RBAssertionOriginatorPidStore* _assertionOriginatorPidStore;
	RBDomainAttributeManager* _domainAttributeManager;
	RBBundlePropertiesManager* _bundlePropertiesManager;
	RBEntitlementManager* _entitlementManager;
	RBConnectionListener* _listener;
	RBJetsamBandProvider* _jetsamBandProvider;
	RBPowerAssertionManager* _powerAssertionManager;
	RBProcessManager* _processManager;
	RBProcessMonitor* _processMonitor;
	RBProcessReconnectManager* _reconnectManager;
	RBStateCaptureManager* _stateCaptureManager;
	RBThrottleBestEffortNetworkingManager* _throttleBestEffortNetworkingManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager;                    //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager;                //@synthesize entitlementManager=_entitlementManager - In the implementation block
@property (nonatomic,readonly) id<RBProcessManaging> processManager;                        //@synthesize processManager=_processManager - In the implementation block
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor;                      //@synthesize processMonitor=_processMonitor - In the implementation block
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager;              //@synthesize stateCaptureManager=_stateCaptureManager - In the implementation block
@property (nonatomic,readonly) RBProcess * process; 
+(void)run;
-(RBProcess *)process;
-(void)assertionManager:(id)arg1 didRemoveProcess:(id)arg2 withState:(id)arg3 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(id)init;
-(void)powerAssertionManagerDidAllowIdleSleep:(id)arg1 ;
-(id<RBAssertionManaging>)assertionManager;
-(void)assertionManager:(id)arg1 willInvalidateAssertion:(id)arg2 ;
-(void)assertionManager:(id)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg2 ;
-(id<RBProcessManaging>)processManager;
-(void)assertionManager:(id)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg2 ;
-(NSString *)debugDescription;
-(void)powerAssertionManagerDidPreventIdleSleep:(id)arg1 ;
-(void)assertionManager:(id)arg1 didUpdateProcessStates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)description;
-(id<RBProcessMonitoring>)processMonitor;
-(void)assertionManager:(id)arg1 willExpireAssertionsSoonForProcess:(id)arg2 expirationTime:(double)arg3 ;
-(void)processManager:(id)arg1 didReconnectProcesses:(id)arg2 ;
-(id<RBEntitlementManaging>)entitlementManager;
-(void)assertionManager:(id)arg1 didAddProcess:(id)arg2 withState:(id)arg3 ;
-(void)assertionManager:(id)arg1 didEndTrackingStateForProcessIdentity:(id)arg2 ;
-(void)assertionManager:(id)arg1 didInvalidateAssertions:(id)arg2 ;
-(void)bundlePropertiesManager:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2 ;
-(void)assertionManager:(id)arg1 didBeginTrackingStateForProcessIdentity:(id)arg2 ;
-(void)assertionManager:(id)arg1 didResolveSystemState:(id)arg2 ;
-(void)assertionManager:(id)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg2 ;
-(id<RBStateCaptureManaging>)stateCaptureManager;
@end

