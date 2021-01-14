/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/WFSlotTemplateTextEntry.h>

@class UIFont, UIView, NSString, UITextRange, NSDictionary, UITextPosition, UITextInputPasswordRules;

@interface WFSlotTemplateTypingTextView : UITextView <WFSlotTemplateTextEntry> {

	BOOL _clearsZeroWhenTyping;
	UIView* _inputHintView;
	UIFont* _emojiOverrideFont;

}

@property (assign,nonatomic,__weak) id<WFSlotTemplateTypingTextViewDelegate> delegate; 
@property (nonatomic,retain) UIFont * emojiOverrideFont;                                            //@synthesize emojiOverrideFont=_emojiOverrideFont - In the implementation block
@property (assign,nonatomic) BOOL clearsZeroWhenTyping;                                             //@synthesize clearsZeroWhenTyping=_clearsZeroWhenTyping - In the implementation block
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,retain) UIView * inputHintView;                                                //@synthesize inputHintView=_inputHintView - In the implementation block
@property (nonatomic,retain) UIView * inputView; 
@property (nonatomic,retain) UIView * inputAccessoryView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(void)setInputHintView:(UIView *)arg1 ;
-(void)setEmojiOverrideFont:(UIFont *)arg1 ;
-(BOOL)clearsZeroWhenTyping;
-(void)setClearsZeroWhenTyping:(BOOL)arg1 ;
-(UIView *)inputHintView;
-(void)wf_applyEmojiOverrideFont;
-(UIFont *)emojiOverrideFont;
@end

