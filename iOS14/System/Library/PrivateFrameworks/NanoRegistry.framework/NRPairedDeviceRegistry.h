/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRRegistryClient.h>
#import <libobjc.A.dylib/NRPairedDeviceRegistryXPCFrameworkDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray;

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate> {

	BOOL _disconnected;
	unsigned short _lastCompatibilityState;
	NSMutableDictionary* _legacyDevices;
	NSObject*<OS_dispatch_queue> _pairedDeviceRegistryDeviceListQueue;
	NSObject*<OS_dispatch_queue> _pairedRegistryGetDevicesQueue;
	unsigned long long _lastStatus;
	NSMutableArray* _waitingForRegistryUpdateBlocks;
	unsigned long long _callCount;

}

@property (nonatomic,readonly) unsigned long long status; 
+(id)sharedInstance;
+(/*^block*/id)pairedDevicesSelectorBlock;
+(/*^block*/id)activeDeviceSelectorBlock;
+(/*^block*/id)activePairedDeviceSelectorBlock;
+(BOOL)shouldBoostProcess;
+(Class)proxyClass;
-(BOOL)isPaired;
-(id)pairingID;
-(id)deviceForPairingID:(id)arg1 ;
-(id)waitForActivePairedDevice;
-(void)altAccountPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)suspendPairingClientCrashMonitoring;
-(void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(BOOL)supportsWatch;
-(id)_getClientInfo;
-(void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned)arg3 ;
-(void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned)switchIndex;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
-(void)setActivePairedDevice:(id)arg1 operationHasCompleted:(/*^block*/id)arg2 ;
-(id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2 ;
-(void)userIsCheckingForUpdate;
-(id)_getLocalDeviceCollection;
-(id)waitForActivePairedOrAltAccountDevice;
-(void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1 ;
-(id)init;
-(void)_getActiveDeviceAssertionsWithInlineBlock:(/*^block*/id)arg1 ;
-(id)waitForActiveOrAltAccountDevice;
-(void)abortPairingWithReason:(id)arg1 ;
-(void)beginDiscovery;
-(void)pairingClientDidEnterPhase:(id)arg1 ;
-(BOOL)pairedDeviceSupportQuickSwitch;
-(void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)getPairedDevices;
-(void)beginMigrationWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)notifyPasscode:(id)arg1 forDevice:(id)arg2 ;
-(void)xpcHasNewOOBKey:(id)arg1 ;
-(void)stopWatchSetupPush;
-(void)waitForPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(id)getAllDevicesWithArchivedAltAccountDevicesMatching:(/*^block*/id)arg1 ;
-(id)serverRequestReporterWithType:(id)arg1 ;
-(id)_;
-(BOOL)isAssertionActive:(id)arg1 ;
-(long long)maxPairedDeviceCount;
-(void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(/*^block*/id)arg2 ;
-(void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isKeychainEnabled;
-(unsigned long long)_getStatusWithCollection:(id)arg1 ;
-(void)keepPhoneUnlockedInternalTestSPI:(/*^block*/id)arg1 ;
-(void)checkIfFlaggedForRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)getDevicesWithBlock:(/*^block*/id)arg1 ;
-(void)getSwitchEventsFromIndex:(unsigned)arg1 inlineCallback:(/*^block*/id)arg2 ;
-(void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(id)initWithBoost:(BOOL)arg1 disconnected:(BOOL)arg2 ;
-(id)deviceIDForIDSDevice:(id)arg1 ;
-(void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(/*^block*/id)arg1 ;
-(id)deviceIDForNRDevice:(id)arg1 ;
-(void)logCallFrequency;
-(void)retriggerUnpairInfoDialog;
-(void)clearWatchNeedsGraduation:(/*^block*/id)arg1 ;
-(id)lastMigrationRequestPhoneName;
-(id)migrationConsentRequestData;
-(void)startWatchSetupPush;
-(id)deviceForBluetoothID:(id)arg1 ;
-(id)_getChangeHistory;
-(void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)applyDiff:(id)arg1 ;
-(void)endDiscovery;
-(id)getAllDevices;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)abortPairing;
-(void)notifyPairingShouldContinue;
-(void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)pairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithBoost:(BOOL)arg1 ;
-(id)getActivePairedDevice;
-(long long)maxPairingCompatibilityVersion;
-(id)getDevicesMatching:(/*^block*/id)arg1 ;
-(BOOL)hasCompletedInitialSyncForPairingID:(id)arg1 ;
-(void)_submitAlbertPairingReport;
-(BOOL)isWatchSetupPushActive;
-(void)pairingStorePathPairingID:(/*^block*/id)arg1 ;
-(unsigned long long)migrationCountForPairingID:(id)arg1 ;
-(id)nonActiveDeviceForBluetoothID:(id)arg1 ;
-(long long)pairingCompatibilityVersion;
-(void)pairingClientSetAltAccountName:(id)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActivePairedDevice:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(/*^block*/id)arg3 ;
-(BOOL)pairedDeviceCountIsLessThanMaxTinkerPairedDevices;
-(long long)minPairingCompatibilityVersion;
-(BOOL)watchNeedsGraduation;
-(id)_getSecureProperties:(id)arg1 ;
-(void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)lastSyncSwitchIndex;
-(id)waitForActiveDevice;
-(id)getAllDevicesWithArchivedDevices;
-(id)nonActiveDeviceForIDSDevice:(id)arg1 ;
-(void)fakePairedSyncIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(/*^block*/id)arg4 ;
-(unsigned short)compatibilityState;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(id)_deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)setWatchNeedsGraduation:(/*^block*/id)arg1 ;
-(void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2 ;
-(void)clearRecoveryFlagWithCompletion:(/*^block*/id)arg1 ;
-(void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(id)blockAndQueryVersions;
-(void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)getDevices;
-(void)resumePairingClientCrashMonitoring;
-(id)nonActiveDeviceForBTDeviceID:(id)arg1 ;
-(id)deviceForBTDeviceID:(id)arg1 ;
-(void)waitForAltAccountPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)pairingClientSetPairingParentName:(id)arg1 pairingParentAltDSID:(id)arg2 forDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)minQuickSwitchCompatibilityVersion;
-(void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)getAllDevicesWithArchivedDevicesMatching:(/*^block*/id)arg1 ;
-(void)sendDevicesUpdatedNotification;
-(BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
-(id)deviceForIDSDevice:(id)arg1 ;
-(void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(/*^block*/id)arg2 ;
-(BOOL)supportsPairedDevice;
-(id)pairingStorePath;
-(long long)maxTinkerPairedDeviceCount;
-(unsigned long long)status;
-(void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2 ;
@end

