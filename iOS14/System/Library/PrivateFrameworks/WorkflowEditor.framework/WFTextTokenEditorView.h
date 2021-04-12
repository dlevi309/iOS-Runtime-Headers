/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/WFVariableInsertionFieldDelegate.h>
#import <libobjc.A.dylib/WFTextTokenField.h>

@protocol WFTextTokenEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;
@class WFVariableString, UIColor, NSAttributedString, UIFont, NSString, NSSet, WFTextTokenTextField, WFTextScrollView;

@interface WFTextTokenEditorView : UIView <UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate, WFTextTokenField> {

	BOOL _switching;
	BOOL _secureTextEntry;
	BOOL _editable;
	BOOL _variablesDisabled;
	UIColor* _backgroundColor;
	NSAttributedString* _attributedText;
	id<WFTextTokenEditorViewDelegate> _delegate;
	UIFont* _font;
	NSString* _placeholder;
	long long _keyboardType;
	long long _keyboardAppearance;
	long long _textAlignment;
	NSString* _textContentType;
	long long _autocorrectionType;
	long long _autocapitalizationType;
	long long _smartQuotesType;
	long long _smartDashesType;
	UIColor* _textColor;
	unsigned long long _syntaxHighlightingType;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	unsigned long long _variableResultType;
	/*^block*/id _updateBlock;
	/*^block*/id _revealBlock;
	WFTextTokenTextField* _textField;
	WFTextScrollView* _scrollView;
	NSRange _selectedRange;

}

@property (nonatomic,retain) WFTextTokenTextField * textField;                                //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) WFTextScrollView * scrollView;                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<WFTextTokenEditorViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) WFVariableString * variableString; 
@property (nonatomic,retain) UIFont * font;                                                   //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                            //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) long long keyboardType;                                          //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                                    //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                         //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,copy) NSString * textContentType;                                        //@synthesize textContentType=_textContentType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                                    //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;                                //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long smartQuotesType;                                       //@synthesize smartQuotesType=_smartQuotesType - In the implementation block
@property (assign,nonatomic) long long smartDashesType;                                       //@synthesize smartDashesType=_smartDashesType - In the implementation block
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry;                   //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                 //@synthesize editable=_editable - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                             //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) unsigned long long syntaxHighlightingType;                       //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;              //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                      //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic) unsigned long long variableResultType;                           //@synthesize variableResultType=_variableResultType - In the implementation block
@property (assign,nonatomic) BOOL variablesDisabled;                                          //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,readonly) UIView*<WFTextTokenFieldImpl> currentField; 
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id revealBlock;                                                    //@synthesize revealBlock=_revealBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) NSRange selectedRange;                                           //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                               //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(BOOL)isEditable;
-(long long)autocapitalizationType;
-(void)setTextContentType:(NSString *)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)paste:(id)arg1 ;
-(long long)keyboardType;
-(void)setSmartDashesType:(long long)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)smartDashesType;
-(UIColor *)textColor;
-(void)setSmartQuotesType:(long long)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(long long)autocorrectionType;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(long long)keyboardAppearance;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(id)init;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)smartQuotesType;
-(NSString *)textContentType;
-(void)setSelectedRange:(NSRange)arg1 ;
-(id<WFTextTokenEditorViewDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setTextField:(WFTextTokenTextField *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(NSRange)selectedRange;
-(long long)textAlignment;
-(UIColor *)backgroundColor;
-(void)textDidChange;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setDelegate:(id<WFTextTokenEditorViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSString *)text;
-(void)setScrollView:(WFTextScrollView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(NSString *)placeholder;
-(void)textViewDidEndEditing:(id)arg1 ;
-(WFTextTokenTextField *)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)updateBlock;
-(WFTextScrollView *)scrollView;
-(void)dealloc;
-(UIFont *)font;
-(id)currentView;
-(UIView*<WFTextTokenFieldImpl>)currentField;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(WFVariableString *)variableString;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariableResultType:(unsigned long long)arg1 ;
-(void)setVariableString:(WFVariableString *)arg1 ;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(void)setRevealBlock:(id)arg1 ;
-(void)selectRange:(NSRange)arg1 ;
-(void)insertVariable:(id)arg1 ;
-(BOOL)usesTextView;
-(void)setUsesTextView:(BOOL)arg1 ;
-(void)removeTextChangeObserver;
-(unsigned long long)variableResultType;
-(id)revealBlock;
@end

