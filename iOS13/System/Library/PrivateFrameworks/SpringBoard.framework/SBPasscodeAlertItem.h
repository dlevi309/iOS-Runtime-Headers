/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {

	int _mode;
	int _unlockScreenType;
	int _simplePasscodeType;
	NSString* _errorString;
	BOOL _hasEmergencyCall;
	BOOL _alreadySubmittedPassword;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_clearAlertController;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(void)submitPassword;
-(void)configureTextField:(id)arg1 ;
-(void)makeEmergencyCall;
-(id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3 ;
-(void)_setErrorString:(id)arg1 ;
-(void)didEndCall;
@end

