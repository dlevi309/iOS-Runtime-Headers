/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIKeyInput.h>

@class NSMutableString, NSArray, NSString, UITextInputPasswordRules;

@interface PRXPasscodeEntryView : UIControl <UIKeyInput> {

	NSMutableString* _text;
	NSArray* _wells;
	long long _numberOfDigits;
	long long _keyboardType;

}

@property (nonatomic,readonly) long long numberOfDigits;                                 //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredSizeForNumberOfDigits:(long long)arg1 ;
+(id)fontForNumberOfDigits:(long long)arg1 ;
+(double)interWellSpacingForNumberOfDigits:(long long)arg1 ;
+(double)wellCornerRadiusForNumberOfDigits:(long long)arg1 ;
+(CGSize)wellSizeForNumberOfDigits:(long long)arg1 ;
-(BOOL)hasText;
-(long long)autocapitalizationType;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(long long)spellCheckingType;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(long long)numberOfDigits;
-(NSString *)text;
-(void)_updateWells;
-(id)initWithNumberOfDigits:(long long)arg1 ;
@end

