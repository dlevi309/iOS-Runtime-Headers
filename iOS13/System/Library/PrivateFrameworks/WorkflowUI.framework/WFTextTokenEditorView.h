/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/WFVariableInsertionFieldDelegate.h>

@protocol WFTextTokenEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;
@class UIFont, NSString, UIColor, NSSet, WFTextTokenTextField, WFTextScrollView, WFVariableString;

@interface WFTextTokenEditorView : UIView <UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate> {

	BOOL _switching;
	BOOL _secureTextEntry;
	BOOL _editable;
	BOOL _variablesDisabled;
	id<WFTextTokenEditorViewDelegate> _delegate;
	UIFont* _font;
	NSString* _placeholder;
	long long _keyboardType;
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

}

@property (nonatomic,retain) WFTextTokenTextField * textField;                                //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) WFTextScrollView * scrollView;                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<WFTextTokenEditorViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) WFVariableString * variableString; 
@property (nonatomic,retain) UIFont * font;                                                   //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                            //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) long long keyboardType;                                          //@synthesize keyboardType=_keyboardType - In the implementation block
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
@property (nonatomic,readonly) UIView*<WFTextField> currentField; 
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id revealBlock;                                                    //@synthesize revealBlock=_revealBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<WFTextTokenEditorViewDelegate>)delegate;
-(void)setDelegate:(id<WFTextTokenEditorViewDelegate>)arg1 ;
-(long long)keyboardType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(WFTextTokenTextField *)textField;
-(BOOL)becomeFirstResponder;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)setSmartQuotesType:(long long)arg1 ;
-(void)setSmartDashesType:(long long)arg1 ;
-(BOOL)resignFirstResponder;
-(UIColor *)textColor;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setTextContentType:(NSString *)arg1 ;
-(NSString *)placeholder;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(BOOL)isSecureTextEntry;
-(NSString *)textContentType;
-(long long)smartQuotesType;
-(long long)smartDashesType;
-(void)paste:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(long long)textAlignment;
-(WFTextScrollView *)scrollView;
-(void)setScrollView:(WFTextScrollView *)arg1 ;
-(BOOL)isEditable;
-(void)textDidChange;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)setTextField:(WFTextTokenTextField *)arg1 ;
-(UIView*<WFTextField>)currentField;
-(WFVariableString *)variableString;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(id)currentView;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(id)revealBlock;
-(void)setRevealBlock:(id)arg1 ;
-(void)insertVariable:(id)arg1 ;
-(BOOL)usesTextView;
-(void)setUsesTextView:(BOOL)arg1 ;
-(void)removeTextChangeObserver;
-(void)setVariableString:(WFVariableString *)arg1 ;
-(void)selectRange:(NSRange)arg1 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(void)setVariableResultType:(unsigned long long)arg1 ;
-(unsigned long long)variableResultType;
@end

