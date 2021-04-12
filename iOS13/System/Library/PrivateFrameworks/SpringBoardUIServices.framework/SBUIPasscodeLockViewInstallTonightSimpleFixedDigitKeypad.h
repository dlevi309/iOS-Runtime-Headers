/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewSimpleFixedDigitKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightSimpleFixedDigitKeypad : SBUIPasscodeLockViewSimpleFixedDigitKeypad {

	SBUIButton* _actionButton;

}
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(id)initWithLightStyle:(BOOL)arg1 numberOfDigits:(unsigned long long)arg2 ;
-(void)_layoutStatusView;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(void)_actionButtonHit;
-(void)_layoutActionButton;
-(void)_setShowsEmergencyCallButton:(BOOL)arg1 fromCancelButton:(BOOL)arg2 ;
-(void)_setShowsCancelButton:(BOOL)arg1 fromEmergencyCallButton:(BOOL)arg2 ;
-(void)_configureActionButton;
-(void)_sizeLabel:(id)arg1 ;
@end

