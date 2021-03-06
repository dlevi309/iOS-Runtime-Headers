/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateTableLayout.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <libobjc.A.dylib/_UIDocumentPickerContainedViewController.h>

@protocol UIViewControllerPreviewing, _UIDocumentPickerServiceViewController;
@class NSArray, UIScrollView, _UIDocumentPickerContainerModel, _UIDocumentPickerFlowLayout, _UIDocumentPickerTableLayout, _UIDocumentPickerSortOrderView, UIView, UIActivityIndicatorView, NSString;

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateTableLayout, UIViewControllerPreviewingDelegate, _UIDocumentPickerContainedViewController> {

	BOOL _editing;
	id<UIViewControllerPreviewing> _viewControllerPreviewContext;
	BOOL _monitoring;
	BOOL _shouldHideSortBar;
	BOOL _updatesMayAnimate;
	long long _displayMode;
	id<_UIDocumentPickerServiceViewController> _serviceViewController;
	_UIDocumentPickerContainerModel* _model;
	NSArray* _actions;
	_UIDocumentPickerFlowLayout* _gridLayout;
	_UIDocumentPickerTableLayout* _tableLayout;
	_UIDocumentPickerSortOrderView* _sortView;
	UIView* _pinnedHeaderView;
	NSArray* _modelObjects;
	UIActivityIndicatorView* _initialActivityView;

}

@property (nonatomic,retain) _UIDocumentPickerContainerModel * model;                                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                                                    //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerFlowLayout * gridLayout;                                             //@synthesize gridLayout=_gridLayout - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerTableLayout * tableLayout;                                           //@synthesize tableLayout=_tableLayout - In the implementation block
@property (assign,nonatomic) BOOL monitoring;                                                                      //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSortBar;                                                               //@synthesize shouldHideSortBar=_shouldHideSortBar - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSortOrderView * sortView;                                            //@synthesize sortView=_sortView - In the implementation block
@property (nonatomic,retain) UIView * pinnedHeaderView;                                                            //@synthesize pinnedHeaderView=_pinnedHeaderView - In the implementation block
@property (nonatomic,copy) NSArray * modelObjects;                                                                 //@synthesize modelObjects=_modelObjects - In the implementation block
@property (assign,nonatomic) BOOL updatesMayAnimate;                                                               //@synthesize updatesMayAnimate=_updatesMayAnimate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * initialActivityView;                                        //@synthesize initialActivityView=_initialActivityView - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDocumentPickerServiceViewController> serviceViewController;              //@synthesize serviceViewController=_serviceViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) long long displayMode;                                                                //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) BOOL supportsActions; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(_UIDocumentPickerContainerModel *)model;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)didDismissSearchController:(id)arg1 ;
-(NSArray *)actions;
-(void)setContentSizeAdjustment:(double)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(_UIDocumentPickerFlowLayout *)gridLayout;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)displayMode;
-(void)willPresentSearchController:(id)arg1 ;
-(NSArray *)indexPathsForSelectedItems;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)updateContentInset;
-(void)setModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)setGridLayout:(_UIDocumentPickerFlowLayout *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisplayMode:(long long)arg1 ;
-(BOOL)monitoring;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)modelObjects;
-(void)willDismissSearchController:(id)arg1 ;
-(void)setModelObjects:(NSArray *)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(id)initWithModel:(id)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)dealloc;
-(_UIDocumentPickerTableLayout *)tableLayout;
-(void)setTableLayout:(_UIDocumentPickerTableLayout *)arg1 ;
-(void)_dynamicTypeSizeChanged:(id)arg1 ;
-(BOOL)supportsActions;
-(id<_UIDocumentPickerServiceViewController>)serviceViewController;
-(void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1 ;
-(void)setIndexPathsForSelectedItems:(NSArray *)arg1 ;
-(void)_updateRowHeight;
-(void)setInitialActivityView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)initialActivityView;
-(void)_unlockAnimations;
-(void)setUpdatesMayAnimate:(BOOL)arg1 ;
-(void)_updateIconSpacing;
-(void)modelChanged:(id)arg1 ;
-(void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2 ;
-(void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3 ;
-(void)_showMoreOptionsForRow:(id)arg1 view:(id)arg2 ;
-(void)setShouldHideSortBar:(BOOL)arg1 ;
-(void)ensureSortViewInvisible;
-(void)updatePinnedHeader;
-(_UIDocumentPickerSortOrderView *)sortView;
-(BOOL)shouldHideSortBar;
-(id)itemForLocation:(CGPoint)arg1 ;
-(id)previewActionItemsForItem:(id)arg1 ;
-(void)setSortView:(_UIDocumentPickerSortOrderView *)arg1 ;
-(void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollSortViewToVisible;
-(id)actionViewForLocation:(CGPoint)arg1 ;
-(BOOL)_smallCells;
-(UIView *)pinnedHeaderView;
-(void)setPinnedHeaderView:(UIView *)arg1 ;
-(BOOL)updatesMayAnimate;
@end

