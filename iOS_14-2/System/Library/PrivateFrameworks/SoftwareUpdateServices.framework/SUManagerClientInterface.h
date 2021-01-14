/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol SUManagerClientInterface
@required
-(void)downloadDidStart:(id)arg1;
-(void)downloadDidFinish:(id)arg1;
-(void)autoInstallOperationDidConsent:(id)arg1;
-(void)autoInstallOperationWasCancelled:(id)arg1;
-(void)autoInstallOperationDidExpire:(id)arg1 withError:(id)arg2;
-(void)scanRequestDidStartForOptions:(id)arg1;
-(void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
-(void)downloadProgressDidChange:(id)arg1;
-(void)downloadDidFail:(id)arg1 withError:(id)arg2;
-(void)downloadDidFinish:(id)arg1 withInstallPolicy:(id)arg2;
-(void)installDidStart:(id)arg1;
-(void)installDidFail:(id)arg1 withError:(id)arg2;
-(void)installDidFinish:(id)arg1;
-(void)installPolicyDidChange:(id)arg1;
-(void)managedInstallationRequested:(id)arg1;
-(void)autoInstallOperationIsReadyToInstall:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)autoInstallOperationPasscodePolicyChanged:(id)arg1 passcodePolicyType:(unsigned long long)arg2;

@end

