/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol PKPinCodeFieldDelegate;
@class NSCharacterSet, NSMutableString, NSArray, NSString, UITextInputPasswordRules;

@interface PKPinCodeField : UIView <UIKeyInput> {

	unsigned long long _pinCodeLength;
	NSCharacterSet* _numbersOnlyCharacterSet;
	NSMutableString* _pinCode;
	double _fontHeight;
	NSArray* _numberLabels;
	NSArray* _dashViews;
	BOOL _keyboardOverrideEnabled;
	id<PKPinCodeFieldDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPinCodeFieldDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pinCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
-(id<PKPinCodeFieldDelegate>)delegate;
-(void)setDelegate:(id<PKPinCodeFieldDelegate>)arg1 ;
-(long long)keyboardType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(BOOL)hasText;
-(id)initWithPinCodeLength:(unsigned long long)arg1 delegate:(id)arg2 ;
-(NSString *)pinCode;
-(void)setPinCode:(NSString *)arg1 ;
-(void)updateCharacterVisibility;
@end

