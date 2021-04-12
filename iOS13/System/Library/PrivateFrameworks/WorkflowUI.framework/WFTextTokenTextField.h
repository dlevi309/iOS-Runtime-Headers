/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITextField.h>
#import <libobjc.A.dylib/WFTextField.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFVariableInsertionFieldDelegate;
@class NSSet, NSString, WFVariableInputCoordinator, UITextInputPasswordRules, UITextRange, NSDictionary, UITextPosition, UIView, NSAttributedString, UIFont, UIColor;

@interface WFTextTokenTextField : UITextField <WFTextField> {

	BOOL _variablesDisabled;
	NSSet* _allowedVariableTypes;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	unsigned long long _syntaxHighlightingType;
	id<WFVariableInsertionFieldDelegate> _variableInsertionDelegate;
	NSString* _customButtonTitle;
	/*^block*/id _variableBlock;
	/*^block*/id _customButtonBlock;
	WFVariableInputCoordinator* _variableCoordinator;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;                                   //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableInsertionFieldDelegate> variableInsertionDelegate;              //@synthesize variableInsertionDelegate=_variableInsertionDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                            //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) NSString * customButtonTitle;                                                         //@synthesize customButtonTitle=_customButtonTitle - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                                     //@synthesize variableBlock=_variableBlock - In the implementation block
@property (nonatomic,copy) id customButtonBlock;                                                                 //@synthesize customButtonBlock=_customButtonBlock - In the implementation block
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
@property (assign,nonatomic) BOOL variablesDisabled;                                                             //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                                         //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                                     //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                                 //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) unsigned long long syntaxHighlightingType;                                          //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)tintColorDidChange;
-(BOOL)resignFirstResponder;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)isEditable;
-(void)setCustomButtonTitle:(NSString *)arg1 ;
-(NSString *)customButtonTitle;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(id)variableBlock;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(void)updateAllowedVariableTypes;
-(void)setVariableBlock:(id)arg1 ;
-(void)updateDoneButtonPresence;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
-(void)updateVariableBlock;
-(id)customButtonBlock;
-(void)setCustomButtonBlock:(id)arg1 ;
-(BOOL)usesNonbreakingSpaces;
-(BOOL)shouldChangeCharactersWithNonbreakingSpacesIfNecessaryInRange:(NSRange)arg1 replacementString:(id)arg2 ;
-(id)textWithRegularSpaces;
-(void)convertNonbreakingSpacesInClipboardIfNecessary;
-(id<WFVariableInsertionFieldDelegate>)variableInsertionDelegate;
-(void)setVariableInsertionDelegate:(id<WFVariableInsertionFieldDelegate>)arg1 ;
@end

