/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSoftwareUpdatePasscodePolicy:(long long)arg1 ;
-(void)noteAuthenticationSucceededWithPasscode:(id)arg1 ;
-(long long)softwareUpdatePasscodePolicy;
-(BOOL)consumePendingUnlock;
-(id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2 ;
-(BOOL)requiresLockout;
-(long long)_effectiveSoftwareUpdatePasscodePolicy;
-(void)dealloc;
-(void)_authRequestCompleted:(id)arg1 ;
@end

