/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSoftLockoutControllerDelegate.h>

@class SBSoftLockoutController, SBFMobileKeyBag, NSString;

@interface SBiCloudPasscodeRequirementLockoutController : NSObject <SBSoftLockoutControllerDelegate> {

	SBSoftLockoutController* _lockOutController;
	SBFMobileKeyBag* _mobileKeybag;
	BOOL _providedPasscode;

}

@property (nonatomic,readonly) BOOL desiresPasscode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2 ;
-(void)noteAuthenticationSucceededWithPasscode:(id)arg1 ;
-(BOOL)desiresPasscode;
-(BOOL)_deviceHasComplexPasscode;
-(BOOL)requiresLockout;
@end

