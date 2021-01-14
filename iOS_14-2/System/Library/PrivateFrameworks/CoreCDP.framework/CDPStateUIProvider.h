/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@protocol CDPStateUIProvider <CDPRecoveryKeyUIProvider>
@optional
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
-(void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(/*^block*/id)arg2;
-(void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(/*^block*/id)arg2;

@required
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2;

@end

