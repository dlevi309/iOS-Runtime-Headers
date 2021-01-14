/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UITextField.h>

@interface SBUIPasscodeTextField : UITextField {

	BOOL _previousResponderRequiresKeyboard;
	BOOL _showsSystemKeyboard;

}

@property (assign,nonatomic) BOOL showsSystemKeyboard;              //@synthesize showsSystemKeyboard=_showsSystemKeyboard - In the implementation block
-(BOOL)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setShowsSystemKeyboard:(BOOL)arg1 ;
-(void)_enableAutomaticAppearance;
-(void)_disableAutomaticAppearance;
-(BOOL)showsSystemKeyboard;
-(void)dealloc;
@end

