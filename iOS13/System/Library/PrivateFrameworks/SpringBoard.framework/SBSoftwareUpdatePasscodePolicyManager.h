/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSoftLockoutControllerDelegate.h>

@class SBSoftLockoutController, SBFMobileKeyBag, NSString;

@interface SBSoftwareUpdatePasscodePolicyManager : NSObject <SBSoftLockoutControllerDelegate> {

	long long _softwareUpdatePasscodePolicy;
	SBSoftLockoutController* _softLockoutController;
	SBFMobileKeyBag* _mobileKeyBag;
	BOOL _passcodeAuthenticationSuccessPending;

}

@property (assign,nonatomic) long long softwareUpdatePasscodePolicy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2 ;
-(long long)softwareUpdatePasscodePolicy;
-(void)noteAuthenticationSucceededWithPasscode:(id)arg1 ;
-(void)setSoftwareUpdatePasscodePolicy:(long long)arg1 ;
-(BOOL)requiresLockout;
-(BOOL)consumePendingUnlock;
-(void)_authRequestCompleted:(id)arg1 ;
-(long long)_effectiveSoftwareUpdatePasscodePolicy;
@end

