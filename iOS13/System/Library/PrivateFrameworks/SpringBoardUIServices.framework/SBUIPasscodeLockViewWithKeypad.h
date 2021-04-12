/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <libobjc.A.dylib/SBUIPasscodeLockNumberPadDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeEntryFieldDelegate.h>

@class UILabel, SBUIPasscodeLockNumberPad, NSString;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate> {

	UILabel* _statusTitleView;
	UILabel* _statusSubtitleView;
	SBUIPasscodeLockNumberPad* _numberPad;
	NSString* _lastCharacterBeforeBackspace;
	BOOL _undoInputOnTouchCancellation;
	BOOL _useLightStyle;
	BOOL _hasPerformedLayoutOnce;

}

@property (nonatomic,retain) NSString * lastCharacterBeforeBackspace;                                                                                      //@synthesize lastCharacterBeforeBackspace=_lastCharacterBeforeBackspace - In the implementation block
@property (nonatomic,retain) UILabel * statusTitleView;                                                                                                    //@synthesize statusTitleView=_statusTitleView - In the implementation block
@property (nonatomic,retain) UILabel * statusSubtitleView;                                                                                                 //@synthesize statusSubtitleView=_statusSubtitleView - In the implementation block
@property (assign,setter=_setUndoInputOnTouchCancellation:,getter=_undoInputOnTouchCancellation,nonatomic) BOOL undoInputOnTouchCancellation;              //@synthesize undoInputOnTouchCancellation=_undoInputOnTouchCancellation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)_usesLightStyle;
-(void)_updateFonts;
-(id)passcode;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)willTransitionToPasscodeView;
-(void)updateForTransitionToPasscodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)resetForFailedPasscode;
-(void)setKeypadVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithLightStyle:(BOOL)arg1 ;
-(id)_newStatusSubtitleView;
-(void)setStatusSubtitleView:(UILabel *)arg1 ;
-(void)_toggleForStatusField;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(UILabel *)statusSubtitleView;
-(void)_layoutStatusView;
-(double)_statusTitleWidth;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(id)_statusTitleView;
-(id)_statusSubtitleView;
-(id)_numberPad;
-(void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2 ;
-(void)passcodeLockNumberPadCancelButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1 ;
-(id)_newStatusTitleView;
-(void)setStatusTitleView:(UILabel *)arg1 ;
-(UILabel *)statusTitleView;
-(id)_newEntryField;
-(void)_setHasInput:(BOOL)arg1 ;
-(void)_layoutEntryField;
-(void)setLastCharacterBeforeBackspace:(NSString *)arg1 ;
-(id)_statusTitleViewTitleFont;
-(id)_statusSubtitleViewTitleFont;
-(double)_entryFieldBottomYDistanceFromNumberPadTopButton;
-(CGRect)_defaultEntryFieldPosition;
-(double)_offsetForCenteringTitleAndEntryFieldFrame:(CGRect)arg1 withTopYvalue:(double)arg2 bottomYvalue:(double)arg3 ;
-(id)_numericEntryFieldIfExists;
-(void)_noteBackspaceHit;
-(void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(BOOL)arg2 ;
-(void)_noteKeyUp:(id)arg1 ;
-(BOOL)_includesStatusView;
-(BOOL)_undoInputOnTouchCancellation;
-(void)_setUndoInputOnTouchCancellation:(BOOL)arg1 ;
-(NSString *)lastCharacterBeforeBackspace;
@end

