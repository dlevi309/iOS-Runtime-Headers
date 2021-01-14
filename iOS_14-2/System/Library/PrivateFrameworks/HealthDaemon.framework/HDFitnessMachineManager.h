/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDFitnessMachinePairingManagerDelegate.h>
#import <libobjc.A.dylib/HDFitnessMachineStateTimersDelegate.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSMutableArray, HDFitnessMachineDataCollector, HDFitnessMachinePairingManager, HDFitnessMachineSession, HKSynchronousObserverSet, HDFitnessMachineDataProducer, HDHealthServiceManager, HDFitnessMachineStateTimers, HDFitnessMachineAnalyticsCollector, NSDate, NSString;

@interface HDFitnessMachineManager : NSObject <HDFitnessMachinePairingManagerDelegate, HDFitnessMachineStateTimersDelegate> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connections;
	HDFitnessMachineDataCollector* _collector;
	HDFitnessMachinePairingManager* _pairingManager;
	HDFitnessMachineSession* _fitnessMachineSession;
	BOOL _shouldReconnect;
	BOOL _resetInProgress;
	NSMutableArray* _characteristicDataBuffer;
	HKSynchronousObserverSet* _fitnessMachineSessionObservers;
	HDFitnessMachineDataProducer* _fitnessMachineDataProducer;
	HDHealthServiceManager* _serviceManager;
	HDFitnessMachineStateTimers* _fitnessMachineStateTimers;
	HDFitnessMachineAnalyticsCollector* _analyticsCollector;

}

@property (assign,nonatomic,__weak) HDHealthServiceManager * serviceManager;                                           //@synthesize serviceManager=_serviceManager - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimers * fitnessMachineStateTimers;                                  //@synthesize fitnessMachineStateTimers=_fitnessMachineStateTimers - In the implementation block
@property (nonatomic,retain) HDFitnessMachineAnalyticsCollector * analyticsCollector;                                  //@synthesize analyticsCollector=_analyticsCollector - In the implementation block
@property (nonatomic,readonly) HDFitnessMachineDataProducer * fitnessMachineDataProducer;                              //@synthesize fitnessMachineDataProducer=_fitnessMachineDataProducer - In the implementation block
@property (nonatomic,readonly) NSDate * machinePreferredUntilDate; 
@property (nonatomic,readonly) id<HDFitnessMachineConnectionInitiatorProtocol> connectionInitiatorServer; 
@property (nonatomic,readonly) id<HDMetricsCollector> metricsCollector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fitnessMachineServerId;
-(HDHealthServiceManager *)serviceManager;
-(void)setAnalyticsCollector:(HDFitnessMachineAnalyticsCollector *)arg1 ;
-(id<HDFitnessMachineConnectionInitiatorProtocol>)connectionInitiatorServer;
-(void)_queue_handleDataTransferRequirementsUpdated;
-(unsigned long long)fitnessMachineTypeForSessionUUID:(id)arg1 ;
-(void)_queue_handleReceivedDataCharacteristic:(id)arg1 ;
-(void)_queue_deliverFailedWithError:(id)arg1 toConnectionUUID:(id)arg2 ;
-(void)setFitnessMachineStateTimers:(HDFitnessMachineStateTimers *)arg1 ;
-(void)_queue_handleOrBufferReceivedCharacteristic:(id)arg1 sessionIdentifier:(unsigned long long)arg2 device:(id)arg3 error:(id)arg4 ;
-(void)_queue_handleBluetoothDisconnection;
-(id)unitTest_currentFitnessMachineSession;
-(void)_queue_setDeviceInformation:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_resetConnectionForcing:(BOOL)arg1 ;
-(void)finishSessionWithConfiguration:(id)arg1 ;
-(void)markClientReadyWithConnectionUUID:(id)arg1 ;
-(id)_queue_connectionWithUUID:(id)arg1 ;
-(id<HDMetricsCollector>)metricsCollector;
-(void)pairingManagerReceivedActivityTypeAndPermission:(id)arg1 ;
-(void)_queue_reconnectFitnessMachineWithError:(id)arg1 ;
-(void)simulateDisconnect;
-(void)unitTest_receiveFakeCharacteristicUpdate:(id)arg1 ;
-(void)_queue_setMachinePreferredUntilDate:(id)arg1 ;
-(void)registerClient:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)clientInvalidatedWithConnectionUUID:(id)arg1 ;
-(void)_queue_removeConnectionWithUUID:(id)arg1 ;
-(id)currentSessionRecoveryConfiguration;
-(BOOL)_queue_connectionIsRegistered:(id)arg1 ;
-(void)_queue_performBlockOnConnections:(/*^block*/id)arg1 ;
-(void)pairingManager:(id)arg1 discoveredHealthService:(id)arg2 machineType:(unsigned long long)arg3 ;
-(void)_queue_addConnection:(id)arg1 ;
-(void)_queue_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 forcingReset:(BOOL)arg3 ;
-(void)_queue_handleReceivedCharacteristic:(id)arg1 device:(id)arg2 error:(id)arg3 ;
-(void)_queue_handleBluetoothStatusUpdate:(long long)arg1 error:(id)arg2 ;
-(NSDate *)machinePreferredUntilDate;
-(void)_queue_deliverNFCDetected:(id)arg1 ;
-(void)stateTimersPauseTimeout:(id)arg1 ;
-(void)stateTimersDisconnectTimeout:(id)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(void)pairingManagerUpdatedMachineInformation:(id)arg1 ;
-(void)addFitnessMachineSessionObserver:(id)arg1 ;
-(void)recoverSessionWithConfiguration:(id)arg1 ;
-(void)_queue_deliverErrorToAllClients:(id)arg1 ;
-(void)_queue_handleConnectionSuccessIfPossible;
-(void)pairingManager:(id)arg1 failedPairingWithError:(id)arg2 ;
-(void)_queue_connectFitnessMachineIsReconnect:(BOOL)arg1 ;
-(id)pairingManagerRequestsOOBData:(id)arg1 error:(id*)arg2 ;
-(void)_queue_handleBeginPairing:(id)arg1 ;
-(BOOL)_queue_handleInitialMachineStatusIfNecessary:(id)arg1 ;
-(void)_queue_deliverMachineInformationUpdatedNotifyingPairingManager:(BOOL)arg1 ;
-(void)_queue_deliverMachineStateChangedFromState:(unsigned long long)arg1 date:(id)arg2 ;
-(void)stateTimersMfaTimeout:(id)arg1 ;
-(void)_queue_handleInitialStateIfNecessary;
-(void)_queue_flushCharacteristicDataBuffer;
-(void)_queue_tearDownAfterStopEvent;
-(BOOL)_queue_waitingOnInitialStatusAndData;
-(void)_queue_handleReceivedMachineStatus:(id)arg1 ;
-(void)pairingManagerDidBeginPairing:(id)arg1 ;
-(void)endFitnessMachineSessionWithUUID:(id)arg1 ;
-(void)unitTest_fakeSession:(id)arg1 ;
-(unsigned long long)connectionOptionsForSession:(id)arg1 isReconnect:(BOOL)arg2 ;
-(void)_queue_recoverSessionWithConfiguration:(id)arg1 ;
-(void)pairingManagerWillBeginPairing:(id)arg1 fitnessMachineToken:(id)arg2 ;
-(void)_queue_handleConnectionStatus:(long long)arg1 finished:(BOOL)arg2 error:(id)arg3 ;
-(void)endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(HDFitnessMachineStateTimers *)fitnessMachineStateTimers;
-(void)pairingManager:(id)arg1 didChangeNFCEnabledState:(BOOL)arg2 ;
-(void)pairingManagerReadyToConnect:(id)arg1 ;
-(void)stateTimersWaitForMachineStartTimeout:(id)arg1 ;
-(void)setServiceManager:(HDHealthServiceManager *)arg1 ;
-(void)_queue_deliverConnectionStateChangedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 error:(id)arg3 notifyingPairingManager:(BOOL)arg4 ;
-(void)stateTimersRetryConnectionTimeout:(id)arg1 ;
-(void)_queue_handleReceivedEnhancedFTMSCharacteristic:(id)arg1 ;
-(HDFitnessMachineAnalyticsCollector *)analyticsCollector;
-(void)_queue_handleMFASuccess;
-(BOOL)_queue_handleInitialMachineDataIfNecessary:(id)arg1 ;
-(void)endFitnessMachineConnectionWithUUID:(id)arg1 ;
-(void)_queue_registerClient:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)_queue_setMachineState:(unsigned long long)arg1 date:(id)arg2 ;
-(void)_queue_disconnectFitnessMachineFromBluetooth;
-(void)hktest_setMachinePreferredUntilDate:(id)arg1 ;
-(void)unitTest_fakeMachineDiscoveryForType:(unsigned long long)arg1 ;
-(void)_queue_simulateDisconnect;
-(void)_queue_setConnectionState:(unsigned long long)arg1 error:(id)arg2 ;
-(void)removeFitnessMachineSessionObserver:(id)arg1 ;
-(void)pairingManager:(id)arg1 updatedConnectionStateFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(HDFitnessMachineDataProducer *)fitnessMachineDataProducer;
-(void)dealloc;
@end

