/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/WFSlotTemplateTextEntry.h>

@class UIFont, UIView, NSString, UITextInputPasswordRules, UITextRange, NSDictionary, UITextPosition;

@interface WFSlotTemplateTypingTextView : UITextView <WFSlotTemplateTextEntry> {

	BOOL _clearsZeroWhenTyping;
	UIView* _inputHintView;
	UIFont* _emojiOverrideFont;

}

@property (assign,nonatomic,__weak) id<WFSlotTemplateTypingTextViewDelegate> delegate; 
@property (nonatomic,retain) UIFont * emojiOverrideFont;                                            //@synthesize emojiOverrideFont=_emojiOverrideFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * inputView; 
@property (nonatomic,retain) UIView * inputAccessoryView; 
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
@property (assign,nonatomic) BOOL clearsZeroWhenTyping;                                             //@synthesize clearsZeroWhenTyping=_clearsZeroWhenTyping - In the implementation block
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,retain) UIView * inputHintView;                                                //@synthesize inputHintView=_inputHintView - In the implementation block
-(CGRect)accessibilityFrame;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(UIView *)inputHintView;
-(BOOL)clearsZeroWhenTyping;
-(void)setClearsZeroWhenTyping:(BOOL)arg1 ;
-(void)setInputHintView:(UIView *)arg1 ;
-(void)wf_applyEmojiOverrideFont;
-(UIFont *)emojiOverrideFont;
-(void)setEmojiOverrideFont:(UIFont *)arg1 ;
@end

