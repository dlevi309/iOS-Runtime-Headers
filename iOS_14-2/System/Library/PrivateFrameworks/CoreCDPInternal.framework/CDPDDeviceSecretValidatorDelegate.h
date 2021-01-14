/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol CDPDDeviceSecretValidatorDelegate <NSObject>
@optional
-(void)secretValidatorWillAttemptRecovery;
-(BOOL)secretValidator:(id)arg1 shouldAcceptRecoveryError:(id*)arg2;
-(void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(/*^block*/id)arg3;
-(void)secretValidator:(id)arg1 didFailRecovery:(id)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;

@end

