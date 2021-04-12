/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDFitnessMachinePairingManagerDelegate
@required
-(void)pairingManagerWillBeginPairing:(id)arg1 fitnessMachineToken:(id)arg2;
-(void)pairingManager:(id)arg1 failedPairingWithError:(id)arg2;
-(void)pairingManager:(id)arg1 didChangeNFCEnabledState:(BOOL)arg2;
-(id)pairingManagerRequestsOOBData:(id)arg1 error:(id*)arg2;
-(void)pairingManagerUpdatedMachineInformation:(id)arg1;
-(void)pairingManager:(id)arg1 updatedConnectionStateFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)pairingManagerReceivedActivityTypeAndPermission:(id)arg1;
-(void)pairingManager:(id)arg1 discoveredHealthService:(id)arg2 machineType:(unsigned long long)arg3;
-(void)pairingManagerReadyToConnect:(id)arg1;
-(void)pairingManagerDidBeginPairing:(id)arg1;

@end

