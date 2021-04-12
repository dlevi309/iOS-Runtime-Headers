/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UITextField.h>

@interface SBUIPasscodeTextField : UITextField {

	BOOL _previousResponderRequiresKeyboard;
	BOOL _showsSystemKeyboard;

}

@property (assign,nonatomic) BOOL showsSystemKeyboard;              //@synthesize showsSystemKeyboard=_showsSystemKeyboard - In the implementation block
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(void)setShowsSystemKeyboard:(BOOL)arg1 ;
-(void)_enableAutomaticAppearance;
-(void)_disableAutomaticAppearance;
-(BOOL)showsSystemKeyboard;
@end

