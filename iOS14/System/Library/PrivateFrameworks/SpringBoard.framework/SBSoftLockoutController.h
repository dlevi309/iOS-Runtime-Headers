/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalLockProviding.h>
#import <libobjc.A.dylib/CSCoverSheetViewControllerObserver.h>

@protocol BSInvalidatable, SBSoftLockoutControllerDelegate;
@class SBLockScreenManager, NSString;

@interface SBSoftLockoutController : NSObject <CSExternalLockProviding, CSCoverSheetViewControllerObserver> {

	SBLockScreenManager* _lockScreenManager;
	unsigned long long _desiredBiometricLockoutState;
	id<BSInvalidatable> _passcodeRequiredAssertion;
	id<SBSoftLockoutControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBSoftLockoutControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (nonatomic,readonly) BOOL showPasscode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(BOOL)isLocked;
-(id<SBSoftLockoutControllerDelegate>)delegate;
-(BOOL)unlockFromSource:(int)arg1 ;
-(void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)_clearPasscodeRequiredAssertion;
-(void)setDelegate:(id<SBSoftLockoutControllerDelegate>)arg1 ;
-(id)initWithBiometricLockoutState:(unsigned long long)arg1 lockScreenManager:(id)arg2 ;
-(void)reload;
-(long long)participantState;
-(void)_createPasscodeRequiredAssertion;
-(BOOL)showPasscode;
-(id)initWithBiometricLockoutState:(unsigned long long)arg1 ;
-(void)dealloc;
@end

