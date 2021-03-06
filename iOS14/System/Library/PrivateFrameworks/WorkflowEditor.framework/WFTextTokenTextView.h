/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>
#import <libobjc.A.dylib/WFTextAttachmentInteractionDelegate.h>
#import <libobjc.A.dylib/WFVariableConfigurationResponderDelegate.h>
#import <libobjc.A.dylib/WFVariableTypingContext.h>
#import <libobjc.A.dylib/WFTextTokenFieldImpl.h>
#import <libobjc.A.dylib/WFVariableInsertionFieldDelegate.h>

@protocol WFVariableProvider, WFVariableUIDelegate;
@class NSArray, WFVariableString, NSSet, WFVariableInputCoordinator, WFVariableConfigurationResponder, WFTextAttachmentInteraction, NSString, NSAttributedString, UIFont, UIColor, UITextRange, NSDictionary, UITextPosition, UIView, UITextInputPasswordRules;

@interface WFTextTokenTextView : UITextView <WFVariableDelegate, WFTextAttachmentInteractionDelegate, WFVariableConfigurationResponderDelegate, WFVariableTypingContext, WFTextTokenFieldImpl, WFVariableInsertionFieldDelegate> {

	BOOL _variablesDisabled;
	BOOL _rejectBecomingFirstResponder;
	WFVariableString* _variableString;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	unsigned long long syntaxHighlightingType;
	unsigned long long _variableResultType;
	/*^block*/id _textUpdatedBlock;
	/*^block*/id _variableInsertionBlock;
	/*^block*/id _revealBlock;
	WFVariableInputCoordinator* _variableCoordinator;
	WFVariableConfigurationResponder* _variableResponder;
	WFTextAttachmentInteraction* _attachmentInteraction;

}

@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;                  //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (nonatomic,retain) WFVariableConfigurationResponder * variableResponder;              //@synthesize variableResponder=_variableResponder - In the implementation block
@property (nonatomic,retain) WFTextAttachmentInteraction * attachmentInteraction;               //@synthesize attachmentInteraction=_attachmentInteraction - In the implementation block
@property (assign,nonatomic) BOOL rejectBecomingFirstResponder;                                 //@synthesize rejectBecomingFirstResponder=_rejectBecomingFirstResponder - In the implementation block
@property (assign,nonatomic) unsigned long long variableResultType;                             //@synthesize variableResultType=_variableResultType - In the implementation block
@property (nonatomic,copy) id textUpdatedBlock;                                                 //@synthesize textUpdatedBlock=_textUpdatedBlock - In the implementation block
@property (nonatomic,copy) id variableInsertionBlock;                                           //@synthesize variableInsertionBlock=_variableInsertionBlock - In the implementation block
@property (nonatomic,copy) id revealBlock;                                                      //@synthesize revealBlock=_revealBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * currentVariables; 
@property (nonatomic,copy) WFVariableString * variableString;                                   //@synthesize variableString=_variableString - In the implementation block
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,nonatomic) BOOL variablesDisabled;                                            //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                        //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                    //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) unsigned long long syntaxHighlightingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
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
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
+(BOOL)doneButtonNeededForInputTraits:(id)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(void)copy:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(void)cut:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)paste:(id)arg1 ;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)tintColorDidChange;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(NSString *)placeholder;
-(void)dealloc;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(WFVariableString *)variableString;
-(void)variableDidChange:(id)arg1 ;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(NSArray *)currentVariables;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(NSRange)arg3 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariableResultType:(unsigned long long)arg1 ;
-(void)setVariableString:(WFVariableString *)arg1 ;
-(WFTextAttachmentInteraction *)attachmentInteraction;
-(void)setAttachmentInteraction:(WFTextAttachmentInteraction *)arg1 ;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(void)updateAllowedVariableTypes;
-(void)updateDoneButtonPresence;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
-(void)setTextUpdatedBlock:(id)arg1 ;
-(void)setVariableInsertionBlock:(id)arg1 ;
-(void)setRevealBlock:(id)arg1 ;
-(void)variableResponderDidBeginEditing:(id)arg1 ;
-(void)variableResponderWillEndEditing:(id)arg1 ;
-(void)variableResponderDidEndEditing:(id)arg1 ;
-(void)variableResponderDidReturnToKeyboard:(id)arg1 ;
-(BOOL)variableResponderHasText:(id)arg1 ;
-(void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2 ;
-(void)variableResponderDidRevealAction:(id)arg1 ;
-(void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2 ;
-(void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(/*^block*/id)arg4 commitHandler:(/*^block*/id)arg5 ;
-(WFVariableConfigurationResponder *)variableResponder;
-(void)setVariableResponder:(WFVariableConfigurationResponder *)arg1 ;
-(void)updateVariableBlock;
-(void)textUpdated;
-(void)insertVariable:(id)arg1 ;
-(unsigned long long)variableResultType;
-(id)revealBlock;
-(void)defaultPaste:(id)arg1 ;
-(void)defaultCopy:(id)arg1 ;
-(void)defaultCut:(id)arg1 ;
-(void)handleTextDidChangeNotification;
-(void)handleTextDidEndEditingNotification;
-(void)_updateVariableString:(id)arg1 ;
-(void)configureAppearanceOfVariableAttachment:(id)arg1 ;
-(void)updateAppearanceOfAllVariableAttachments;
-(void)beginConfiguringVariable:(id)arg1 ;
-(void)enumerateVariablesUsingBlock:(/*^block*/id)arg1 ;
-(id)textUpdatedBlock;
-(id)variableInsertionBlock;
-(BOOL)rejectBecomingFirstResponder;
-(void)setRejectBecomingFirstResponder:(BOOL)arg1 ;
@end

