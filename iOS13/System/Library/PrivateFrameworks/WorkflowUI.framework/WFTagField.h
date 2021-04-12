/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/WFTagPickerViewControllerDelegate.h>

@protocol WFTagFieldDelegate, WFTagFieldSuggestionsProvider;
@class NSString, WFTagTextView, WFTextScrollView, UIButton, NSSet;

@interface WFTagField : UIView <UITextViewDelegate, WFTagPickerViewControllerDelegate> {

	BOOL _allowsTextEntry;
	BOOL _editable;
	NSString* _tags;
	NSString* _fieldTitle;
	id<WFTagFieldDelegate> _delegate;
	id<WFTagFieldSuggestionsProvider> _suggestionsProvider;
	long long _autocorrectionType;
	long long _autocapitalizationType;
	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	WFTagTextView* _textView;
	WFTextScrollView* _scrollView;
	UIButton* _plusButton;
	NSRange _selectedRange;

}

@property (assign,nonatomic,__weak) WFTagTextView * textView;                                           //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) WFTextScrollView * scrollView;                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * plusButton;                                              //@synthesize plusButton=_plusButton - In the implementation block
@property (assign,nonatomic) NSRange selectedRange;                                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,copy) NSString * tags;                                                             //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * fieldTitle;                                                       //@synthesize fieldTitle=_fieldTitle - In the implementation block
@property (assign,nonatomic,__weak) id<WFTagFieldDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFTagFieldSuggestionsProvider> suggestionsProvider;              //@synthesize suggestionsProvider=_suggestionsProvider - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long autocorrectionType;                                              //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;                                          //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) BOOL allowsTextEntry;                                                      //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                           //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider; 
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate; 
@property (nonatomic,copy) NSSet * allowedVariableTypes; 
@property (assign,nonatomic) BOOL variablesDisabled; 
@property (nonatomic,copy) id updateBlock;                                                              //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                            //@synthesize variableBlock=_variableBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFTagFieldDelegate>)delegate;
-(void)setDelegate:(id<WFTagFieldDelegate>)arg1 ;
-(NSString *)tags;
-(long long)keyboardType;
-(void)setTags:(NSString *)arg1 ;
-(WFTagTextView *)textView;
-(void)setTextView:(WFTagTextView *)arg1 ;
-(NSRange)selectedRange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(NSString *)placeholder;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(void)setEditable:(BOOL)arg1 ;
-(long long)textAlignment;
-(WFTextScrollView *)scrollView;
-(void)setScrollView:(WFTextScrollView *)arg1 ;
-(BOOL)isEditable;
-(void)setSelectedRange:(NSRange)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(UIButton *)plusButton;
-(void)setPlusButton:(UIButton *)arg1 ;
-(BOOL)allowsTextEntry;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(id<WFTagFieldSuggestionsProvider>)suggestionsProvider;
-(id)containingViewController;
-(id)variableBlock;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setVariableBlock:(id)arg1 ;
-(void)setAllowsTextEntry:(BOOL)arg1 ;
-(void)updateEditableState;
-(void)tagPicker:(id)arg1 didSelectTags:(id)arg2 ;
-(void)tagPickerDidCancel:(id)arg1 ;
-(BOOL)tokenizeFreeTextFromRange:(NSRange)arg1 ;
-(void)selectTag;
-(void)insertTag:(id)arg1 ;
-(void)updateTags;
-(NSString *)fieldTitle;
-(void)setFieldTitle:(NSString *)arg1 ;
-(void)setSuggestionsProvider:(id<WFTagFieldSuggestionsProvider>)arg1 ;
@end

