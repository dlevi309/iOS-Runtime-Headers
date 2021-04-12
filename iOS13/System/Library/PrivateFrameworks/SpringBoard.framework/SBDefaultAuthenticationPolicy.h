/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAuthenticationPolicy.h>

@class SBiCloudPasscodeRequirementLockoutController, SBSoftwareUpdatePasscodePolicyManager, SecureBackup, NSString;

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy> {

	SBiCloudPasscodeRequirementLockoutController* _iCloudPasscodeRequirementLockoutController;
	SBSoftwareUpdatePasscodePolicyManager* _softwareUpdatePasscodePolicyManager;
	SecureBackup* _secureBackupHelper;

}

@property (setter=_setSecureBackupHelper:,getter=_secureBackupHelper,nonatomic,retain) SecureBackup * secureBackupHelper;              //@synthesize secureBackupHelper=_secureBackupHelper - In the implementation block
@property (nonatomic,retain) SBiCloudPasscodeRequirementLockoutController * iCloudPasscodeRequirementLockoutController;                //@synthesize iCloudPasscodeRequirementLockoutController=_iCloudPasscodeRequirementLockoutController - In the implementation block
@property (nonatomic,retain) SBSoftwareUpdatePasscodePolicyManager * softwareUpdatePasscodePolicyManager;                              //@synthesize softwareUpdatePasscodePolicyManager=_softwareUpdatePasscodePolicyManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)usesSecureMode;
-(void)wipeDeviceWithReason:(id)arg1 ;
-(BOOL)shouldClearBlockStateOnSync;
-(void)cachePasscode:(id)arg1 ;
-(void)clearPasscodeCache;
-(BOOL)allowAuthenticationRevocation;
-(void)passcodeAuthenticationFailedWithError:(id)arg1 ;
-(void)setSoftwareUpdatePasscodePolicyManager:(SBSoftwareUpdatePasscodePolicyManager *)arg1 ;
-(void)setICloudPasscodeRequirementLockoutController:(SBiCloudPasscodeRequirementLockoutController *)arg1 ;
-(SBSoftwareUpdatePasscodePolicyManager *)softwareUpdatePasscodePolicyManager;
-(SBiCloudPasscodeRequirementLockoutController *)iCloudPasscodeRequirementLockoutController;
-(id)_secureBackupHelper;
-(void)_setSecureBackupHelper:(id)arg1 ;
@end

