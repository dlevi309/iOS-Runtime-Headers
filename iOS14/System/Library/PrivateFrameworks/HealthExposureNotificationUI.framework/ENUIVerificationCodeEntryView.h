/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/

#import <HealthExposureNotificationUI/HealthExposureNotificationUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextInput.h>

@protocol UITextInputDelegate;
@class UITextRange, NSDictionary, UITextPosition, UIView, NSMutableString, UITapGestureRecognizer, NSArray, UILabel, NSString, UITextInputPasswordRules;

@interface ENUIVerificationCodeEntryView : UIView <UITextInput> {

	NSMutableString* _stringValue;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _passcodeFieldDisabled;
	NSDictionary* _markedTextStyle;
	id<UITextInputDelegate> _inputDelegate;
	/*^block*/id _didEnterDigit;
	/*^block*/id _didEnterCode;
	NSArray* _generatorFields;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) NSArray * generatorFields;                                  //@synthesize generatorFields=_generatorFields - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * firstGeneratorField; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) id didEnterDigit;                                             //@synthesize didEnterDigit=_didEnterDigit - In the implementation block
@property (nonatomic,copy) id didEnterCode;                                              //@synthesize didEnterCode=_didEnterCode - In the implementation block
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle;                               //@synthesize markedTextStyle=_markedTextStyle - In the implementation block
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate;               //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
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
+(id)maximumContentSizeCategory;
+(id)textStyle;
+(id)generatorFieldFont;
-(BOOL)hasText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(void)unmarkText;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(UITextPosition *)endOfDocument;
-(NSDictionary *)markedTextStyle;
-(UITextRange *)markedTextRange;
-(UITextRange *)selectedTextRange;
-(id<UITextInputDelegate>)inputDelegate;
-(id)selectionRectsForRange:(id)arg1 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(NSString *)textContentType;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(UITextPosition *)beginningOfDocument;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)passcodeFieldTapped:(id)arg1 ;
-(NSString *)stringValue;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id<UITextInputTokenizer>)tokenizer;
-(BOOL)canBecomeFirstResponder;
-(void)setStringValue:(NSString *)arg1 ;
-(void)updateConstraints;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(void)dealloc;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)_updateFonts:(id)arg1 ;
-(UILabel *)firstGeneratorField;
-(void)_syncStringValueToLabels;
-(void)emitCodeEnteredNotification;
-(void)setPasscodeFieldDisabled:(BOOL)arg1 ;
-(NSArray *)generatorFields;
-(void)setGeneratorFields:(NSArray *)arg1 ;
-(id)didEnterDigit;
-(void)setDidEnterDigit:(id)arg1 ;
-(id)didEnterCode;
-(void)setDidEnterCode:(id)arg1 ;
@end

