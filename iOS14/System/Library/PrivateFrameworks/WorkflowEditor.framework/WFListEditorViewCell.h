/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFTextTokenEditorViewDelegate.h>
#import <libobjc.A.dylib/WFListEditorViewDelegate.h>
#import <libobjc.A.dylib/WFVariableUIDelegate.h>

@protocol WFListEditorViewCellDelegate, WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate, NSObject;
@class NSSet, WFTextTokenEditorView, WFVariableConfigurationButton, UIButton, UIViewController, WFTextTokenChooser, WFPropertyListParameterValue, NSString;

@interface WFListEditorViewCell : UITableViewCell <WFTextTokenEditorViewDelegate, WFListEditorViewDelegate, WFVariableUIDelegate> {

	BOOL _standaloneVariablesAsContentItems;
	BOOL _variablesDisabled;
	id<WFListEditorViewCellDelegate> _delegate;
	id<WFComponentNavigationContext> _navigationContext;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	id<NSObject> _value;
	/*^block*/id _updateBlock;
	WFTextTokenEditorView* _valueEditor;
	WFVariableConfigurationButton* _variableValueButton;
	UIButton* _valueButton;
	UIViewController* _presentedViewController;
	/*^block*/id _updateStateBlock;
	WFTextTokenChooser* _textTokenChooser;

}

@property (nonatomic,readonly) WFTextTokenEditorView * valueEditor;                                  //@synthesize valueEditor=_valueEditor - In the implementation block
@property (nonatomic,readonly) WFVariableConfigurationButton * variableValueButton;                  //@synthesize variableValueButton=_variableValueButton - In the implementation block
@property (nonatomic,readonly) UIButton * valueButton;                                               //@synthesize valueButton=_valueButton - In the implementation block
@property (nonatomic,readonly) WFPropertyListParameterValue * valueEditorValue; 
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;                      //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,copy) id updateStateBlock;                                                      //@synthesize updateStateBlock=_updateStateBlock - In the implementation block
@property (nonatomic,retain) WFTextTokenChooser * textTokenChooser;                                  //@synthesize textTokenChooser=_textTokenChooser - In the implementation block
@property (assign,nonatomic,__weak) id<WFListEditorViewCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                             //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic) BOOL standaloneVariablesAsContentItems;                                 //@synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems - In the implementation block
@property (assign,nonatomic) BOOL variablesDisabled;                                                 //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,copy) id<NSObject> value;                                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                           //@synthesize updateBlock=_updateBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(id<WFListEditorViewCellDelegate>)delegate;
-(void)setValue:(id<NSObject>)arg1 ;
-(void)setDelegate:(id<WFListEditorViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)updateStateBlock;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(id<NSObject>)value;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIViewController *)presentedViewController;
-(id)valueTitle;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(/*^block*/id)arg3 goBackHandler:(/*^block*/id)arg4 scrolledAwayHandler:(/*^block*/id)arg5 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2 ;
-(void)textTokenEditorTextDidChange:(id)arg1 ;
-(void)textTokenEditorTextDidEndEditing:(id)arg1 ;
-(void)setValueButtonTitle:(id)arg1 ;
-(void)collectionValueUpdatedWithCount:(unsigned long long)arg1 ;
-(void)updateValueEditorWithValue:(id)arg1 ;
-(WFPropertyListParameterValue *)valueEditorValue;
-(void)updateWithValueState:(id)arg1 ;
-(void)valueButtonTapped:(id)arg1 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(void)updateEditorBlocks;
-(void)configureEditorViewController:(id)arg1 ;
-(void)notifyDelegateTextUpdated;
-(void)notifyDelegateTextUpdatedThrottled;
-(void)setStandaloneVariablesAsContentItems:(BOOL)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(void)updateValueEditorResultType;
-(void)variableValueChanged:(id)arg1 ;
-(void)variableValueCleared:(id)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(BOOL)standaloneVariablesAsContentItems;
-(WFTextTokenEditorView *)valueEditor;
-(WFVariableConfigurationButton *)variableValueButton;
-(UIButton *)valueButton;
-(void)setUpdateStateBlock:(id)arg1 ;
-(WFTextTokenChooser *)textTokenChooser;
-(void)setTextTokenChooser:(WFTextTokenChooser *)arg1 ;
@end

