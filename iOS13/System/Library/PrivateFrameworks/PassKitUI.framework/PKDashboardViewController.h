/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <libobjc.A.dylib/PKDashboardDataSourceDelegate.h>
#import <libobjc.A.dylib/PKDashboardViewControllerDelegateFlowLayout.h>

@protocol PKDashboardLayout, PKDashboardDataSource, PKDashboardDelegate;
@class NSArray, NSMutableDictionary, PKDashboardTitleHeaderView, PKDashboardFooterTextView, NSSet, UICollectionViewLayout, PKUISpringAnimationFactory, NSString;

@interface PKDashboardViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PKDashboardDataSourceDelegate, PKDashboardViewControllerDelegateFlowLayout> {

	NSArray* _presenters;
	NSMutableDictionary* _presentersPerItemClassName;
	PKDashboardTitleHeaderView* _sampleHeaderView;
	NSMutableDictionary* _titlesForSection;
	PKDashboardFooterTextView* _sampleFooterView;
	NSMutableDictionary* _footersForSection;
	double _lastScrollOffset;
	BOOL _inScrollViewDidScroll;
	NSSet* _visibleCellsExcludingSafeArea;
	UICollectionViewLayout*<PKDashboardLayout> _customLayout;
	BOOL _contentIsLoaded;
	BOOL _shouldPresentAllContent;
	BOOL _presentationAnimated;
	BOOL _isPresentingContent;
	BOOL _isHidingContent;
	PKUISpringAnimationFactory* _collectionViewFactory;
	NSMutableDictionary* _blocksOnVisibilityChange;
	BOOL _shouldUseClearNavigationBar;
	id<PKDashboardDataSource> _dataSource;
	id<PKDashboardDelegate> _delegate;

}

@property (nonatomic,readonly) id<PKDashboardDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PKDashboardDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingContent;                           //@synthesize isPresentingContent=_isPresentingContent - In the implementation block
@property (assign,nonatomic) BOOL shouldUseClearNavigationBar;                     //@synthesize shouldUseClearNavigationBar=_shouldUseClearNavigationBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundColor;
-(id<PKDashboardDelegate>)delegate;
-(void)setDelegate:(id<PKDashboardDelegate>)arg1 ;
-(id<PKDashboardDataSource>)dataSource;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)contentIsLoaded;
-(void)shouldPresentAllContent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg1 presenters:(id)arg2 layout:(id)arg3 ;
-(void)setShouldUseClearNavigationBar:(BOOL)arg1 ;
-(void)setActionForVisibilityChange:(/*^block*/id)arg1 indexPath:(id)arg2 ;
-(void)_updateNavigationBarAppearance;
-(void)_updateNavigationBarVisibility;
-(BOOL)_isCellVisibleAtIndexPath:(id)arg1 withTopSafeArea:(double)arg2 contentOffset:(double)arg3 ;
-(id)_actualItemIndexPathForIndexPath:(id)arg1 ;
-(void)_presentAllContent;
-(void)_hideAllContentAnimated:(BOOL)arg1 ;
-(BOOL)_isIndexPathAHeader:(id)arg1 ;
-(BOOL)_isIndexPathAFooter:(id)arg1 ;
-(id)_internalIndexPathForItemIndexPath:(id)arg1 ;
-(void)itemChanged:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)itemIsStackableInCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)itemIsIndependentInCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)isPresentingContent;
-(BOOL)shouldUseClearNavigationBar;
@end

