/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBAssertionManagerDelegate.h>
#import <libobjc.A.dylib/RBProcessManagerDelegate.h>
#import <libobjc.A.dylib/RBBundlePropertiesManagerDelegate.h>
#import <libobjc.A.dylib/RBPowerAssertionManagerDelegate.h>

@class RBAssertionDescriptorValidator, RBAssertionManager, RBAssertionOriginatorPidStore, RBDomainAttributeManager, RBBundlePropertiesManager, RBEntitlementManager, RBConnectionListener, RBJetsamBandProvider, RBPowerAssertionManager, RBProcessManager, RBProcessMonitor, RBProcessReconnectManager, RBStateCaptureManager, RBThrottleBestEffortNetworkingManager, NSString;

@interface RBDaemon : NSObject <RBAssertionManagerDelegate, RBProcessManagerDelegate, RBBundlePropertiesManagerDelegate, RBPowerAssertionManagerDelegate> {

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
+(void)run;
+(id)_sharedInstance;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)_init;
-(void)_start;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(void)powerAssertionManagerDidPreventIdleSleep:(id)arg1 ;
-(void)powerAssertionManagerDidAllowIdleSleep:(id)arg1 ;
-(void)assertionManager:(id)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg2 ;
-(void)assertionManager:(id)arg1 didUpdateProcessStates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assertionManager:(id)arg1 didInvalidateAssertions:(id)arg2 ;
-(void)assertionManager:(id)arg1 didAddProcess:(id)arg2 withState:(id)arg3 ;
-(void)assertionManager:(id)arg1 didRemoveProcess:(id)arg2 withState:(id)arg3 ;
-(void)assertionManager:(id)arg1 willExpireAssertionsSoonForProcess:(id)arg2 expirationTime:(double)arg3 ;
-(void)assertionManager:(id)arg1 willInvalidateAssertion:(id)arg2 ;
-(void)assertionManager:(id)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg2 ;
-(void)assertionManager:(id)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg2 ;
-(void)assertionManager:(id)arg1 didEndTrackingStateForProcessIdentity:(id)arg2 ;
-(void)assertionManager:(id)arg1 didBeginTrackingStateForProcessIdentity:(id)arg2 ;
-(void)assertionManager:(id)arg1 didResolveSystemState:(id)arg2 ;
-(void)processManager:(id)arg1 didReconnectProcesses:(id)arg2 ;
-(void)emitAssertionSignpostForLegacyReason:(id)arg1 ;
-(void)watchdogRegister;
-(id)_reconnectOriginatorProcess;
-(void)bundlePropertiesManager:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2 ;
@end

