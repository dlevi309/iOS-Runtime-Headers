/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_deviceHasComplexPasscode;
-(void)noteAuthenticationSucceededWithPasscode:(id)arg1 ;
-(BOOL)desiresPasscode;
-(id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2 ;
-(BOOL)requiresLockout;
-(void)dealloc;
@end

