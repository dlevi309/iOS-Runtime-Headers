/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFMultipleValueEditorViewCellDelegate.h>
#import <libobjc.A.dylib/WFModuleSummaryEditorDelegate.h>

@protocol WFMultipleValueEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class NSString, UITableView, WFParameter, WFMultipleValueParameterState, NSSet, UIColor, MTVisualStylingProvider, NSArray, WFModuleSummaryEditor, NSIndexPath;

@interface WFMultipleValueEditorView : UIView <UITableViewDataSource, UITableViewDelegate, WFMultipleValueEditorViewCellDelegate, WFModuleSummaryEditorDelegate> {

	BOOL _variablesDisabled;
	BOOL _standaloneVariablesAsContentItems;
	NSString* _localizedNewItemTypeName;
	NSString* _addNewItemCellTitle;
	UITableView* _tableView;
	WFParameter* _parameter;
	WFMultipleValueParameterState* _state;
	id<WFMultipleValueEditorViewDelegate> _delegate;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	NSString* _widgetSizeClass;
	id<WFComponentNavigationContext> _navigationContext;
	UIColor* _overridingCellBackgroundColor;
	MTVisualStylingProvider* _fillProvider;
	/*^block*/id _updateBlock;
	NSArray* _items;
	WFModuleSummaryEditor* _currentEditor;
	NSIndexPath* _textEditingCellIndexPath;

}

@property (nonatomic,copy) NSArray * items;                                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) WFModuleSummaryEditor * currentEditor;                                  //@synthesize currentEditor=_currentEditor - In the implementation block
@property (nonatomic,retain) NSIndexPath * textEditingCellIndexPath;                                 //@synthesize textEditingCellIndexPath=_textEditingCellIndexPath - In the implementation block
@property (nonatomic,readonly) NSString * addNewItemCellTitle;                                       //@synthesize addNewItemCellTitle=_addNewItemCellTitle - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) WFParameter * parameter;                                                //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,copy) WFMultipleValueParameterState * state;                                    //@synthesize state=_state - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic,__weak) id<WFMultipleValueEditorViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (nonatomic,copy) NSString * localizedNewItemTypeName;                                      //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                             //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic) BOOL variablesDisabled;                                                 //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (assign,nonatomic) BOOL standaloneVariablesAsContentItems;                                 //@synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems - In the implementation block
@property (nonatomic,copy) NSString * widgetSizeClass;                                               //@synthesize widgetSizeClass=_widgetSizeClass - In the implementation block
@property (assign,nonatomic,__weak) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,retain) UIColor * overridingCellBackgroundColor;                                //@synthesize overridingCellBackgroundColor=_overridingCellBackgroundColor - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * fillProvider;                                 //@synthesize fillProvider=_fillProvider - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                           //@synthesize updateBlock=_updateBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isScrollEnabled;
-(BOOL)isEditable;
-(void)_setState:(id)arg1 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)setCurrentEditor:(WFModuleSummaryEditor *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)deleteItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<WFMultipleValueEditorViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)accessibilityElements;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)items;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<WFMultipleValueEditorViewDelegate>)arg1 ;
-(WFParameter *)parameter;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setState:(WFMultipleValueParameterState *)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(WFMultipleValueParameterState *)state;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)updateBlock;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(WFModuleSummaryEditor *)currentEditor;
-(void)dealloc;
-(void)setParameter:(WFParameter *)arg1 ;
-(NSString *)localizedNewItemTypeName;
-(NSString *)widgetSizeClass;
-(void)setWidgetSizeClass:(NSString *)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(void)setStandaloneVariablesAsContentItems:(BOOL)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(BOOL)standaloneVariablesAsContentItems;
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3 ;
-(void)setFillProvider:(MTVisualStylingProvider *)arg1 ;
-(MTVisualStylingProvider *)fillProvider;
-(void)multipleValueEditorViewCell:(id)arg1 didUpdateParameterState:(id)arg2 ;
-(void)multipleValueEditorViewCellDidRequestEditing:(id)arg1 ;
-(void)multipleValueEditorViewCellDidInvalidateSize:(id)arg1 ;
-(void)setLocalizedNewItemTypeName:(NSString *)arg1 ;
-(NSString *)addNewItemCellTitle;
-(void)updatedItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)movedItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addNewItemAtIndexPath:(id)arg1 ;
-(void)editItemAtIndexPath:(id)arg1 ;
-(void)updateCells;
-(void)configureCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)configureCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addNewItemIndexPath;
-(id)reuseIdentifierForIndexPath:(id)arg1 ;
-(UIColor *)overridingCellBackgroundColor;
-(void)setOverridingCellBackgroundColor:(UIColor *)arg1 ;
-(NSIndexPath *)textEditingCellIndexPath;
-(void)setTextEditingCellIndexPath:(NSIndexPath *)arg1 ;
@end
