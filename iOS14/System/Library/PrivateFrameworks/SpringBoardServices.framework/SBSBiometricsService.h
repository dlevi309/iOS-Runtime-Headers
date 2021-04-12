/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSBiometricsService : SBSAbstractSystemService
-(void)fetchUnlockCredentialSetWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

