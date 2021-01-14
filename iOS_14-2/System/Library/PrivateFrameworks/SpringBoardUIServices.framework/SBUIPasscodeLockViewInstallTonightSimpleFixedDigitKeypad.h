/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewSimpleFixedDigitKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightSimpleFixedDigitKeypad : SBUIPasscodeLockViewSimpleFixedDigitKeypad {

	SBUIButton* _actionButton;

}
-(id)initWithLightStyle:(BOOL)arg1 numberOfDigits:(unsigned long long)arg2 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)_layoutStatusView;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(void)_actionButtonHit;
-(void)_layoutActionButton;
-(void)_setShowsEmergencyCallButton:(BOOL)arg1 fromCancelButton:(BOOL)arg2 ;
-(void)_configureActionButton;
-(void)_setShowsCancelButton:(BOOL)arg1 fromEmergencyCallButton:(BOOL)arg2 ;
-(void)_sizeLabel:(id)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
@end

