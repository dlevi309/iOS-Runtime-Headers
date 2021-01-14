/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(void)appendString:(id)arg1 ;
-(BOOL)isFirstResponder;
-(UIColor *)customBackgroundColor;
-(id<SBUIPasscodeEntryFieldDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(void)_appendString:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSString *)stringValue;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SBUIPasscodeEntryFieldDelegate>)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 source:(int)arg2 ;
-(void)reset;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)_setLuminosityBoost:(double)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)deleteLastCharacter;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(CGSize)_viewSize;
-(id)_textField;
-(void)_deleteLastCharacter;
-(BOOL)_hasAnyCharacters;
-(void)notePasscodeFieldDidAcceptEntry;
-(BOOL)shouldInsertPasscodeText:(id)arg1 ;
-(void)notePasscodeFieldTextDidChange;
-(UIFont *)font;
@end

