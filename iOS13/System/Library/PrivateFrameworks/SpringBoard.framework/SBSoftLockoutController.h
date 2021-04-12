/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (nonatomic,readonly) BOOL showPasscode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)dealloc;
-(id<SBSoftLockoutControllerDelegate>)delegate;
-(void)setDelegate:(id<SBSoftLockoutControllerDelegate>)arg1 ;
-(BOOL)isLocked;
-(void)reload;
-(long long)participantState;
-(NSString *)coverSheetIdentifier;
-(BOOL)showPasscode;
-(void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg1 ;
-(BOOL)unlockFromSource:(int)arg1 ;
-(id)initWithBiometricLockoutState:(unsigned long long)arg1 lockScreenManager:(id)arg2 ;
-(void)_clearPasscodeRequiredAssertion;
-(void)_createPasscodeRequiredAssertion;
-(id)initWithBiometricLockoutState:(unsigned long long)arg1 ;
@end

