/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRRegistryProxy.h>
#import <libobjc.A.dylib/NRPairedDeviceRegistryXPCDaemonDelegate.h>

@interface NRPairingProxy : NRRegistryProxy <NRPairedDeviceRegistryXPCDaemonDelegate>
+(id)serverRemoteObjectInterface;
+(id)machServiceName;
+(id)clientExportedInterface;
+(id)serverExportedInterface;
+(id)clientRemoteObjectInterface;
-(void)xpcSubmitAlbertPairingReport:(/*^block*/id)arg1 ;
-(void)xpcBeginMigrationWithDeviceID:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)xpcNotifyPasscode:(id)arg1 withDeviceID:(id)arg2 ;
-(void)xpcUnpairWithSimulator:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcBeginMigrationWithDeviceID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcGetLastSwitchIndex:(/*^block*/id)arg1 ;
-(void)xpcSubmitRTCPairingMetricForMetricID:(id)arg1 withSuccess:(/*^block*/id)arg2 ;
-(void)xpcBeginMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(/*^block*/id)arg4 ;
-(void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcPairingClientSetPairingParentName:(id)arg1 pairingParentAltDSID:(id)arg2 forPairingID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 withAssertionHandler:(/*^block*/id)arg2 ;
-(void)xpcKeepPhoneUnlockedInternalTestSPI:(/*^block*/id)arg1 ;
-(void)xpcStartWatchSetupPushWithBlock:(/*^block*/id)arg1 ;
-(void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcCompanionPasscodePairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)xpcIsAssertionActive:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcUnpairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)xpcSetWatchNeedsGraduation:(/*^block*/id)arg1 ;
-(void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)xpcBeginDiscoveryWithBlock:(/*^block*/id)arg1 ;
-(void)xpcGetInitialSyncCompletedForPairingID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcIsPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcPairWithSimulator:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcStopWatchSetupPushWithBlock:(/*^block*/id)arg1 ;
-(void)xpcSuspendPairingClientCrashMonitoring:(/*^block*/id)arg1 ;
-(void)xpcFakePairedSyncIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcAbortPairingReason:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)xpcInvalidateSwitchAssertionWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)xpcSwitchToSimulator:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcPairingShouldContinue;
-(void)xpcClearRecoveryFlagWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcCheckIfFlaggedForRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcPairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forPairingID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcNotifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)xpcTriggerVersion4Workaround;
-(void)xpcSubmitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(void)xpcPairingClientDidEnterPhase:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)xpcEndDiscoveryWithBlock:(/*^block*/id)arg1 ;
-(void)xpcGetMigrationCountForPairingID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcWatchNeedsGraduation:(/*^block*/id)arg1 ;
-(void)xpcPutMigrationChallengeCharacteristicWriteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcPingActiveGizmoWithPriority:(int)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(/*^block*/id)arg3 ;
-(void)xpcClearWatchNeedsGraduation:(/*^block*/id)arg1 ;
-(void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)xpcScanForMigratableWatchesWithBlock:(/*^block*/id)arg1 ;
-(void)xpcResumePairingClientCrashMonitoring:(/*^block*/id)arg1 ;
-(void)xpcActiveDeviceAssertions:(/*^block*/id)arg1 ;
-(void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2 ;
-(void)xpcRetriggerUnpairInfoDialogWithBlock:(/*^block*/id)arg1 ;
@end

