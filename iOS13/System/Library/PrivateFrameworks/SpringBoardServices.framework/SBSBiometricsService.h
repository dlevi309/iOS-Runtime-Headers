/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSBiometricsService : SBSAbstractSystemService
-(void)fetchUnlockCredentialSetWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

