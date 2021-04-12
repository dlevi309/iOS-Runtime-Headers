/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInteractionDelegate.h>

@protocol PDFTextInputDelegate, UITextInputDelegate, UITextInputTokenizer;
@class UITextRange, NSDictionary, UITextPosition, UIView, UITextInteraction, NSString, UITextInputPasswordRules;

@interface PDFTextInputView : UIView <UITextInput, UIKeyInput, UITextInteractionDelegate> {

	id<PDFTextInputDelegate> _delegate;
	UITextRange* _textSelectionRange;
	UITextInteraction* _textInteraction;
	id<UITextInputDelegate> _textInputDelegate;
	id<UITextInputTokenizer> _textInputTokenizer;

}

@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
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
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setSelection:(id)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(BOOL)isSecureTextEntry;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id<UITextInputTokenizer>)tokenizer;
-(BOOL)canBecomeFirstResponder;
-(id)initWithDelegate:(id)arg1 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)selection;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(BOOL)interactionShouldBegin:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)setTokenizer:(id<UITextInputTokenizer>)arg1 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)updateGestureRecognizerDependencies;
-(void)updateTextSelectionGraphics;
-(id)_selectionForTextRange:(id)arg1 ;
-(id)_closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 isIndirectTouch:(BOOL)arg5 ;
-(id)linkRegionsConstrainedToLineAtPoint:(CGPoint)arg1 ;
@end

