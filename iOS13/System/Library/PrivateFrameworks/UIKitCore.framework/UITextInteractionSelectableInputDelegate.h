/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UITextInput.h>

@protocol UITextInput;
@class UITextRange, NSDictionary, UITextPosition, UIView, UIResponder, NSString, UITextInputPasswordRules;

@interface UITextInteractionSelectableInputDelegate : UIResponder <UITextInput> {

	UIResponder*<UITextInput> _textInput;

}

@property (nonatomic,readonly) UIResponder*<UITextInput> textInput; 
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
+(id)selectableInputDelegateWithTextInput:(id)arg1 ;
-(NSDictionary *)markedTextStyle;
-(id)nextResponder;
-(void)deleteBackward;
-(UITextRange *)selectedTextRange;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(UITextRange *)markedTextRange;
-(void)unmarkText;
-(id)textInRange:(id)arg1 ;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)insertText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(id<UITextInputDelegate>)inputDelegate;
-(id)selectionRectsForRange:(id)arg1 ;
-(BOOL)hasText;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(void)updateSelectionRects;
-(UIResponder*<UITextInput>)textInput;
-(void)_unmarkText;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)_deleteForwardAndNotify:(BOOL)arg1 ;
@end

