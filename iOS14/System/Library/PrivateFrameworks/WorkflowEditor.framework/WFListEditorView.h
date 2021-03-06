/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFListEditorViewCellDelegate.h>

@protocol WFListEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class NSString, UITableView, NSArray, NSSet;

@interface WFListEditorView : UIView <UITableViewDataSource, UITableViewDelegate, WFListEditorViewCellDelegate> {

	BOOL _variablesDisabled;
	BOOL _standaloneVariablesAsContentItems;
	NSString* _localizedNewItemTypeName;
	UITableView* _tableView;
	id<WFListEditorViewDelegate> _delegate;
	NSArray* _items;
	NSSet* _allowedValueTypes;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	id<WFComponentNavigationContext> _navigationContext;
	/*^block*/id _updateBlock;

}

@property (nonatomic,readonly) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic,__weak) id<WFListEditorViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (nonatomic,copy) NSString * localizedNewItemTypeName;                                      //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSSet * allowedValueTypes;                                                //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                             //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic) BOOL variablesDisabled;                                                 //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (assign,nonatomic) BOOL standaloneVariablesAsContentItems;                                 //@synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems - In the implementation block
@property (assign,nonatomic,__weak) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                           //@synthesize updateBlock=_updateBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(BOOL)isScrollEnabled;
-(BOOL)isEditable;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)deleteItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<WFListEditorViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)accessibilityElements;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)items;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<WFListEditorViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)_setItems:(id)arg1 ;
-(id)updateBlock;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
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
-(void)listEditorCell:(id)arg1 didUpdateToValue:(id)arg2 ;
-(void)setLocalizedNewItemTypeName:(NSString *)arg1 ;
-(void)updatedItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)movedItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)updateCells;
-(void)configureCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)configureCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addNewItemIndexPath;
-(void)setAllowedValueTypes:(NSSet *)arg1 ;
-(void)appendNewItem;
-(void)insertNewItemOfType:(long long)arg1 ;
@end

