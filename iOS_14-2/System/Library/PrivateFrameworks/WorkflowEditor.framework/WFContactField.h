/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol WFContactFieldDelegate;
@class NSArray, WFContactTextView, WFTextScrollView, UIButton, WFContactPickerCoordinator, NSString, NSSet;

@interface WFContactField : UIView <UITextViewDelegate> {

	BOOL _allowsTextEntry;
	BOOL _editable;
	BOOL _shouldEndEditing;
	id<WFContactFieldDelegate> _delegate;
	NSArray* _entries;
	long long _autocorrectionType;
	long long _autocapitalizationType;
	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	WFContactTextView* _textView;
	WFTextScrollView* _scrollView;
	UIButton* _plusButton;
	WFContactPickerCoordinator* _contactPicker;
	NSRange _selectedRange;

}

@property (assign,nonatomic,__weak) WFContactTextView * textView;                             //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) WFTextScrollView * scrollView;                            //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * plusButton;                                    //@synthesize plusButton=_plusButton - In the implementation block
@property (assign,nonatomic) NSRange selectedRange;                                           //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) BOOL shouldEndEditing;                                           //@synthesize shouldEndEditing=_shouldEndEditing - In the implementation block
@property (nonatomic,retain) WFContactPickerCoordinator * contactPicker;                      //@synthesize contactPicker=_contactPicker - In the implementation block
@property (assign,nonatomic,__weak) id<WFContactFieldDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * entries;                                                 //@synthesize entries=_entries - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * textContentType; 
@property (assign,nonatomic) long long autocorrectionType;                                    //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;                                //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) BOOL allowsTextEntry;                                            //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                 //@synthesize editable=_editable - In the implementation block
@property (nonatomic,copy) NSSet * supportedPersonProperties; 
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider; 
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate; 
@property (nonatomic,copy) NSSet * allowedVariableTypes; 
@property (assign,nonatomic) BOOL variablesDisabled; 
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                  //@synthesize variableBlock=_variableBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFContactTextView *)textView;
-(BOOL)isEditable;
-(long long)autocapitalizationType;
-(void)setTextContentType:(NSString *)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)keyboardType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)tintColorDidChange;
-(long long)autocorrectionType;
-(void)setEntries:(NSArray *)arg1 ;
-(long long)keyboardAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(NSString *)textContentType;
-(void)setSelectedRange:(NSRange)arg1 ;
-(id<WFContactFieldDelegate>)delegate;
-(id)typingAttributes;
-(void)setTextView:(WFContactTextView *)arg1 ;
-(NSRange)selectedRange;
-(NSArray *)entries;
-(long long)textAlignment;
-(void)setDelegate:(id<WFContactFieldDelegate>)arg1 ;
-(void)selectContact;
-(void)setPlusButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(WFContactPickerCoordinator *)contactPicker;
-(void)setContactPicker:(WFContactPickerCoordinator *)arg1 ;
-(void)setScrollView:(WFTextScrollView *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(UIButton *)plusButton;
-(NSString *)placeholder;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)updateBlock;
-(WFTextScrollView *)scrollView;
-(BOOL)allowsTextEntry;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(BOOL)shouldEndEditing;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariableBlock:(id)arg1 ;
-(void)setAllowsTextEntry:(BOOL)arg1 ;
-(void)updateEditableState;
-(id)containingViewController;
-(id)variableBlock;
-(NSSet *)supportedPersonProperties;
-(void)setSupportedPersonProperties:(NSSet *)arg1 ;
-(void)updateContactsFromTextField:(BOOL)arg1 ;
-(void)showContactPicker;
-(void)insertContact:(id)arg1 ;
-(long long)tokenizeFreeTextFromRange:(NSRange)arg1 freeTextModificationBlock:(/*^block*/id*)arg2 ;
-(void)deleteFreeText:(id)arg1 replacementRange:(NSRange)arg2 newValue:(id)arg3 ;
-(void)tokenizeFreeText:(id)arg1 replacementRange:(NSRange)arg2 newValue:(id)arg3 ;
-(void)presentContactSelectionActionSheetForText:(id)arg1 attributedText:(id)arg2 replacementRange:(NSRange)arg3 ;
-(void)chooseMultivalueIndexIfNecessaryForContact:(id)arg1 sender:(id)arg2 ;
-(BOOL)text:(id)arg1 containsMatchesForProperty:(int)arg2 ;
-(BOOL)text:(id)arg1 containsMatchesForProperties:(id)arg2 ;
-(unsigned long long)numberOfValuesForProperties:(id)arg1 inContact:(id)arg2 ;
-(void)setShouldEndEditing:(BOOL)arg1 ;
@end

