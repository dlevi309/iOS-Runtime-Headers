/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SBUIPasscodeEntryFieldDelegate;
@class SBUIPasscodeTextField, NSMutableCharacterSet, UIColor, UITextField, NSString, UIFont;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate> {

	id<SBUIPasscodeEntryFieldDelegate> _delegate;
	SBUIPasscodeTextField* _textField;
	NSMutableCharacterSet* _numericTrimmingSet;
	BOOL _ignoreCallbacks;
	BOOL _resigningFirstResponder;
	UIColor* _customBackgroundColor;

}

@property (getter=_textField,nonatomic,readonly) UITextField * textField;                     //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPasscodeEntryFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,retain) UIColor * customBackgroundColor;                                 //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_usesTextFieldForFirstResponder;
-(void)appendString:(id)arg1 ;
-(NSString *)stringValue;
-(id<SBUIPasscodeEntryFieldDelegate>)delegate;
-(void)setDelegate:(id<SBUIPasscodeEntryFieldDelegate>)arg1 ;
-(void)reset;
-(void)setStringValue:(NSString *)arg1 ;
-(BOOL)isFirstResponder;
-(CGSize)_viewSize;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFont *)font;
-(BOOL)becomeFirstResponder;
-(id)_textField;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)customBackgroundColor;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)_setLuminosityBoost:(double)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(void)_appendString:(id)arg1 ;
-(void)_deleteLastCharacter;
-(BOOL)_hasAnyCharacters;
-(void)notePasscodeFieldDidAcceptEntry;
-(BOOL)shouldInsertPasscodeText:(id)arg1 ;
-(void)notePasscodeFieldTextDidChange;
-(void)_handleKeyUIEvent:(id)arg1 source:(int)arg2 ;
@end

