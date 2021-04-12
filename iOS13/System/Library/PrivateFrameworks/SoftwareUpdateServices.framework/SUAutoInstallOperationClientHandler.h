/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol SUAutoInstallOperationClientHandler <NSObject>
@required
-(id)uniqueIdentifier;
-(void)_noteAutoInstallOperationWasCancelled;
-(void)_noteAutoInstallOperationDidExpireWithError:(id)arg1;
-(void)_noteAutoInstallOperationDidConsent;
-(void)_noteAutoInstallOperationIsReadyToInstall:(/*^block*/id)arg1;
-(void)_noteAutoInstallOperationPasscodePolicyChanged:(unsigned long long)arg1;

@end

