/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@class NSMutableString, UITapGestureRecognizer, NSArray, UILabel, NSString, UITextInputPasswordRules;

@interface AKCodeEntryView : UIView <UIKeyInput> {

	NSMutableString* _stringValue;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _passcodeFieldDisabled;
	NSArray* _generatorFields;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) NSArray * generatorFields;                                  //@synthesize generatorFields=_generatorFields - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * firstGeneratorField; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,readonly) BOOL hasText; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generatorFieldFont;
-(BOOL)hasText;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(id)viewForLastBaselineLayout;
-(long long)keyboardAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)passcodeFieldTapped:(id)arg1 ;
-(BOOL)isSecureTextEntry;
-(NSString *)stringValue;
-(BOOL)canBecomeFirstResponder;
-(void)setStringValue:(NSString *)arg1 ;
-(void)updateConstraints;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)dealloc;
-(void)_updateFonts:(id)arg1 ;
-(UILabel *)firstGeneratorField;
-(void)_syncStringValueToLabels;
-(void)emitCodeEnteredNotification;
-(void)setPasscodeFieldDisabled:(BOOL)arg1 ;
-(NSArray *)generatorFields;
-(void)setGeneratorFields:(NSArray *)arg1 ;
@end

