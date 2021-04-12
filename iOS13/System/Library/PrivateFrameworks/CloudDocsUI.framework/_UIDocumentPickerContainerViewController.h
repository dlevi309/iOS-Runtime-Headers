/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol _UIDocumentPickerServiceViewController, _UIDocumentPickerContainedViewController;
@class _UIDocumentPickerContainerModel, _UIDocumentSearchListController, UIViewController, _UIDocumentPickerSortOrderView, _UIDocumentPickerSearchPaletteView, NSArray, NSString;

@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate> {

	long long _explicitDisplayMode;
	id<_UIDocumentPickerServiceViewController> _serviceViewController;
	_UIDocumentPickerContainerModel* _model;
	_UIDocumentSearchListController* _resultsController;
	UIViewController*<_UIDocumentPickerContainedViewController> _childViewController;
	_UIDocumentPickerSortOrderView* _sortView;
	_UIDocumentPickerSearchPaletteView* _searchView;

}

@property (nonatomic,retain) UIViewController*<_UIDocumentPickerContainedViewController> childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerModel * model;                                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSortOrderView * sortView;                                                    //@synthesize sortView=_sortView - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSearchPaletteView * searchView;                                              //@synthesize searchView=_searchView - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDocumentPickerServiceViewController> serviceViewController;                      //@synthesize serviceViewController=_serviceViewController - In the implementation block
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (assign,nonatomic) long long explicitDisplayMode;                                                                //@synthesize explicitDisplayMode=_explicitDisplayMode - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,retain) _UIDocumentSearchListController * resultsController;                                          //@synthesize resultsController=_resultsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userDefaults;
-(void)dealloc;
-(void)invalidate;
-(_UIDocumentPickerContainerModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGPoint)contentOffset;
-(void)viewDidLayoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)isEditing;
-(void)_updateTraitCollection;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)indexPathsForSelectedItems;
-(long long)displayMode;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setupSearchController;
-(UIViewController*<_UIDocumentPickerContainedViewController>)childViewController;
-(void)setChildViewController:(UIViewController*<_UIDocumentPickerContainedViewController>)arg1 ;
-(long long)defaultDisplayMode;
-(_UIDocumentSearchListController *)resultsController;
-(void)setResultsController:(_UIDocumentSearchListController *)arg1 ;
-(void)setChildViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id<_UIDocumentPickerServiceViewController>)serviceViewController;
-(void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1 ;
-(void)_startSearchWithQueryString:(id)arg1 becomeFirstResponder:(BOOL)arg2 ;
-(void)setIndexPathsForSelectedItems:(NSArray *)arg1 ;
-(void)setExplicitDisplayMode:(long long)arg1 ;
-(void)displayModeChanged;
-(_UIDocumentPickerSortOrderView *)sortView;
-(void)setSortView:(_UIDocumentPickerSortOrderView *)arg1 ;
-(void)_sortOrderViewChanged:(id)arg1 ;
-(void)ensureChildViewController;
-(void)setDefaultDisplayMode:(long long)arg1 ;
-(_UIDocumentPickerSearchPaletteView *)searchView;
-(long long)explicitDisplayMode;
-(void)setSearchView:(_UIDocumentPickerSearchPaletteView *)arg1 ;
@end

