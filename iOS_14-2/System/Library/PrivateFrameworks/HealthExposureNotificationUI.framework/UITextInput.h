/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/

@class UITextRange, NSDictionary, UITextPosition, UIView;


@protocol UITextInput <UIKeyInput>
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
@optional
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(UIView *)textInputView;
-(void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1;
-(id)insertDictationResultPlaceholder;
-(void)removeTextPlaceholder:(id)arg1;
-(BOOL)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
-(id)positionWithinRange:(id)arg1 atCharacterOffset:(long long)arg2;
-(long long)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;
-(void)insertDictationResult:(id)arg1;
-(void)dictationRecordingDidEnd;
-(void)dictationRecognitionFailed;
-(void)setSelectionAffinity:(long long)arg1;
-(void)endFloatingCursor;
-(CGRect*)frameForDictationResultPlaceholder:(id)arg1;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
-(long long)selectionAffinity;

@required
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2;
-(void)setSelectedTextRange:(id)arg1;
-(void)unmarkText;
-(id)characterRangeAtPoint:(CGPoint)arg1;
-(CGRect*)caretRectForPosition:(id)arg1;
-(id)closestPositionToPoint:(CGPoint)arg1;
-(UITextPosition *)endOfDocument;
-(NSDictionary *)markedTextStyle;
-(UITextRange *)markedTextRange;
-(UITextRange *)selectedTextRange;
-(id<UITextInputDelegate>)inputDelegate;
-(id)selectionRectsForRange:(id)arg1;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2;
-(CGRect*)firstRectForRange:(id)arg1;
-(void)replaceRange:(id)arg1 withText:(id)arg2;
-(id)textInRange:(id)arg1;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
-(UITextPosition *)beginningOfDocument;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
-(void)setInputDelegate:(id)arg1;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
-(id<UITextInputTokenizer>)tokenizer;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
-(void)setMarkedTextStyle:(id)arg1;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;

@end

