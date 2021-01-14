/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDFitnessMachinePairingManagerDelegate
@required
-(void)pairingManagerReceivedActivityTypeAndPermission:(id)arg1;
-(void)pairingManager:(id)arg1 discoveredHealthService:(id)arg2 machineType:(unsigned long long)arg3;
-(void)pairingManagerUpdatedMachineInformation:(id)arg1;
-(void)pairingManager:(id)arg1 failedPairingWithError:(id)arg2;
-(id)pairingManagerRequestsOOBData:(id)arg1 error:(id*)arg2;
-(void)pairingManagerDidBeginPairing:(id)arg1;
-(void)pairingManagerWillBeginPairing:(id)arg1 fitnessMachineToken:(id)arg2;
-(void)pairingManager:(id)arg1 didChangeNFCEnabledState:(BOOL)arg2;
-(void)pairingManagerReadyToConnect:(id)arg1;
-(void)pairingManager:(id)arg1 updatedConnectionStateFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;

@end

