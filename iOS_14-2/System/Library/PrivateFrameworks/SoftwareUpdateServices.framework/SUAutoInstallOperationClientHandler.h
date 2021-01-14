/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

