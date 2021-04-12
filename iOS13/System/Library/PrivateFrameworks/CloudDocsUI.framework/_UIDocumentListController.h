/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIDocumentPickerServiceViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol _UIDocumentListControllerDelegate;
@class _UIDocumentPickerContainerViewController, _UIDocumentSearchListController, NSURL, NSArray, NSString;

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration> {

	_UIDocumentListController* _rootListController;
	_UIDocumentPickerContainerViewController* _containerViewController;
	int _sortOrderIfNotDeferred;
	long long _displayModeIfNotDeferred;
	long long _availableActionsIfNotDeferred;
	id<_UIDocumentListControllerDelegate> _delegateIfNotDeferred;
	_UIDocumentSearchListController* _searchController;
	CGPoint _stateRestoredContentOffset;
	BOOL _hideSearchField;
	BOOL _editing;

}

@property (assign,nonatomic,__weak) _UIDocumentListController * rootListController;              //@synthesize rootListController=_rootListController - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDocumentListControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL hideSearchField;                                               //@synthesize hideSearchField=_hideSearchField - In the implementation block
@property (nonatomic,readonly) NSURL * presentedURL; 
@property (nonatomic,readonly) NSArray * containedItems; 
@property (nonatomic,retain) NSArray * selectedItems; 
@property (assign,nonatomic) BOOL editing;                                                       //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) long long availableActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)_listControllerHierarchyForURL:(id)arg1 withConstructorBlock:(/*^block*/id)arg2 ;
+(id)listControllerHierarchyForURL:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id<_UIDocumentListControllerDelegate>)delegate;
-(void)setDelegate:(id<_UIDocumentListControllerDelegate>)arg1 ;
-(id)model;
-(id)initWithModel:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)editing;
-(long long)displayMode;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(_UIDocumentListController *)rootListController;
-(NSArray *)selectedItems;
-(void)setSelectedItems:(NSArray *)arg1 ;
-(long long)availableActions;
-(void)setAvailableActions:(long long)arg1 ;
-(void)updateTitle;
-(BOOL)shouldShowAction:(long long)arg1 ;
-(void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setContainerViewController:(id)arg1 ;
-(BOOL)hideSearchField;
-(void)createSearchControllerWithModel:(id)arg1 ;
-(void)_commonInitWithModel:(id)arg1 ;
-(void)setRootListController:(_UIDocumentListController *)arg1 ;
-(Class)_classForChildren;
-(void)_updateScrollPositionForStateRestoration;
-(NSArray *)containedItems;
-(void)didSelectItem:(id)arg1 ;
-(BOOL)shouldHighlightItem:(id)arg1 ;
-(void)didHighlightItem:(id)arg1 ;
-(void)didUnhighlightItem:(id)arg1 ;
-(BOOL)shouldSelectItem:(id)arg1 ;
-(void)itemsOrSelectionDidChange:(BOOL)arg1 ;
-(id)previewViewControllerForItem:(id)arg1 ;
-(void)setHideSearchField:(BOOL)arg1 ;
-(void)startSearchWithQueryString:(id)arg1 becomeFirstResponder:(BOOL)arg2 ;
-(NSURL *)presentedURL;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 listMode:(long long)arg4 ;
@end

