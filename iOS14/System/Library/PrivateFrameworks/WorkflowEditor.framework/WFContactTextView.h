/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/WFTextField.h>

@protocol WFVariableProvider, WFVariableUIDelegate;
@class NSSet, WFVariableInputCoordinator, NSString, NSAttributedString, UIFont, UIColor;

@interface WFContactTextView : UITextView <WFTextField> {

	BOOL _variablesDisabled;
	BOOL _allowsTextEntry;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	/*^block*/id _variableBlock;
	unsigned long long _syntaxHighlightingType;
	NSSet* _supportedPersonProperties;
	WFVariableInputCoordinator* _variableCoordinator;

}

@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;                //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                  //@synthesize variableBlock=_variableBlock - In the implementation block
@property (assign,nonatomic) BOOL allowsTextEntry;                                            //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,copy) NSSet * supportedPersonProperties;                                 //@synthesize supportedPersonProperties=_supportedPersonProperties - In the implementation block
@property (assign,nonatomic) BOOL variablesDisabled;                                          //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                      //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;              //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) unsigned long long syntaxHighlightingType;                       //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copy:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(void)cut:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)paste:(id)arg1 ;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)tintColorDidChange;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)dealloc;
-(BOOL)allowsTextEntry;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariableBlock:(id)arg1 ;
-(void)setAllowsTextEntry:(BOOL)arg1 ;
-(id)variableBlock;
-(void)updateTextAttachments;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(void)updateTextContainerInsets;
-(void)updateAllowedVariableTypes;
-(void)updateDoneButtonPresence;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
-(NSSet *)supportedPersonProperties;
-(void)setSupportedPersonProperties:(NSSet *)arg1 ;
-(id)attributesByAddingTintColorToAttributes:(id)arg1 ;
-(id)attributesForPasting;
-(void)pasteAttributedString:(id)arg1 ;
@end

