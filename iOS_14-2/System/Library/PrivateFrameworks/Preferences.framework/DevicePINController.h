/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSDetailController.h>

@class NSString, UIBarButtonItem, NSDictionary, NSNumber;

@interface DevicePINController : PSDetailController {

	int _mode;
	int _substate;
	NSString* _oldPassword;
	NSString* _lastEntry;
	BOOL _success;
	id _pinDelegate;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _nextButton;
	UIBarButtonItem* _doneButton;
	NSString* _error1;
	NSString* _error2;
	BOOL _hasBeenDismissed;
	long long _sepOnceToken;
	NSDictionary* _sepLockInfo;
	BOOL _useSEPLockInfo;
	NSNumber* _requiresKeyboard;
	NSNumber* _pinLength;
	NSNumber* _simplePIN;
	NSNumber* _numericPIN;
	BOOL _hidesNavigationButtons;
	BOOL _hidesCancelButton;
	BOOL _shouldDismissWhenDone;
	BOOL _allowOptionsButton;
	NSString* _doneButtonTitle;
	NSString* _passcodeOptionsTitle;
	/*^block*/id _passcodeOptionsHandler;

}

@property (nonatomic,copy) NSString * passcodeOptionsTitle;                                   //@synthesize passcodeOptionsTitle=_passcodeOptionsTitle - In the implementation block
@property (nonatomic,copy) id passcodeOptionsHandler;                                         //@synthesize passcodeOptionsHandler=_passcodeOptionsHandler - In the implementation block
@property (assign,nonatomic,__weak) id<DevicePINControllerDelegate> pinDelegate;              //@synthesize pinDelegate=_pinDelegate - In the implementation block
@property (assign,nonatomic) BOOL hidesNavigationButtons;                                     //@synthesize hidesNavigationButtons=_hidesNavigationButtons - In the implementation block
@property (assign,nonatomic) BOOL hidesCancelButton;                                          //@synthesize hidesCancelButton=_hidesCancelButton - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissWhenDone;                                      //@synthesize shouldDismissWhenDone=_shouldDismissWhenDone - In the implementation block
@property (nonatomic,copy) NSString * doneButtonTitle;                                        //@synthesize doneButtonTitle=_doneButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL requiresKeyboard; 
@property (assign,nonatomic) int pinLength; 
@property (assign,nonatomic) BOOL simplePIN; 
@property (assign,getter=isNumericPIN,nonatomic) BOOL numericPIN; 
@property (assign,nonatomic) BOOL allowOptionsButton;                                         //@synthesize allowOptionsButton=_allowOptionsButton - In the implementation block
+(BOOL)settingEnabled;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)success;
-(BOOL)isBlocked;
-(void)setSuccess:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setSpecifier:(id)arg1 ;
-(int)mode;
-(void)suspend;
-(void)setAllowOptionsButton:(BOOL)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)pinPane;
-(BOOL)requiresKeyboard;
-(BOOL)simplePIN;
-(int)pinLength;
-(void)setMode:(int)arg1 ;
-(BOOL)isNumericPIN;
-(id)_sepLockInfo;
-(id)stringsBundle;
-(CFStringRef)defaultsID;
-(id)stringsTable;
-(void)_dismiss;
-(void)setLastEntry:(id)arg1 ;
-(id<DevicePINControllerDelegate>)pinDelegate;
-(double)unblockTime;
-(int)_getScreenType;
-(void)setPinLength:(int)arg1 ;
-(void)setPane:(id)arg1 ;
-(BOOL)useProgressiveDelays;
-(void)_rereadBlockedState;
-(CGSize)overallContentSizeForViewInPopover;
-(id)_createAndShowAnimatedNavBarSpinner;
-(BOOL)isCreatingPasscode;
-(int)_simplePasscodeType;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(BOOL)_useSEPLockInfo;
-(void)_invalidateSEPLockInfo;
-(double)blockedTimeRemaining;
-(long long)numberOfFailedAttempts;
-(void)setSimplePIN:(BOOL)arg1 ;
-(void)_setNumberOfFailedAttempts:(long long)arg1 ;
-(double)_secondsToBlockForFailedAttempts:(long long)arg1 ;
-(void)_setUnblockTime:(double)arg1 ;
-(void)_adjustUnblockTime;
-(void)_showFailedAttempts;
-(void)_updateErrorTextAndFailureCount:(BOOL)arg1 ;
-(void)cancelButtonTapped;
-(BOOL)showSimplePINCancelButtonOnLeft;
-(void)adjustButtonsForPasswordLength:(unsigned long long)arg1 ;
-(BOOL)_shouldShowOptionsButton;
-(void)_updatePINButtons;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)_slidePasscodeFieldLeft:(BOOL)arg1 ;
-(void)pinEntered:(id)arg1 ;
-(void)_showUnacceptablePINError:(id)arg1 password:(id)arg2 ;
-(BOOL)completedInputIsValid:(id)arg1 ;
-(void)performActionAfterPINSet;
-(BOOL)_asyncSetPinCompatible;
-(void)setPIN:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showPINConfirmationError;
-(BOOL)attemptValidationWithPIN:(id)arg1 ;
-(void)setOldPassword:(id)arg1 ;
-(void)_removePinWithOldPassword:(id)arg1 ;
-(void)performActionAfterPINEntry;
-(void)_preflightPasswordForWeakness:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performActionAfterPINRemove;
-(BOOL)_shouldCheckForWeakness;
-(id)passcodeOptionsAlertController;
-(void)setNumericPIN:(BOOL)arg1 ;
-(NSString *)passcodeOptionsTitle;
-(id)passcodeOptionsHandler;
-(void)setPasscodeOptionsHandler:(id)arg1 ;
-(void)_setPINPaneToSimple:(BOOL)arg1 simpleLength:(int)arg2 numeric:(BOOL)arg3 requiresKeyboard:(int)arg4 ;
-(void)showPasscodeOptions:(id)arg1 ;
-(void)setPasscodeOptionsTitle:(NSString *)arg1 ;
-(void)setRequiresKeyboard:(BOOL)arg1 ;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
-(void)setPinDelegate:(id<DevicePINControllerDelegate>)arg1 ;
-(BOOL)hidesNavigationButtons;
-(void)setHidesNavigationButtons:(BOOL)arg1 ;
-(BOOL)hidesCancelButton;
-(void)setHidesCancelButton:(BOOL)arg1 ;
-(BOOL)shouldDismissWhenDone;
-(NSString *)doneButtonTitle;
-(void)setShouldDismissWhenDone:(BOOL)arg1 ;
-(void)setDoneButtonTitle:(NSString *)arg1 ;
-(BOOL)allowOptionsButton;
-(BOOL)validatePIN:(id)arg1 ;
-(void)_updateUI;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setPIN:(id)arg1 ;
-(void)loadView;
-(void)willUnlock;
-(void)_clearBlockedState;
-(id)title;
-(void)dealloc;
@end

