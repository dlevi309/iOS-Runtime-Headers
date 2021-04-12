/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol FIUIPageViewControllerDataSource, FIUIPageViewControllerDelegate;
@class UICollectionViewFlowLayout, UICollectionView, UIPageControl, NSCache, UIViewController, NSString;

@interface FIUIPageViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout> {

	BOOL _showsPagingIndicator;
	BOOL _userDidTapPageControl;
	BOOL _shouldNotifyDelegateWhenScrollViewSettles;
	id<FIUIPageViewControllerDataSource> _dataSource;
	id<FIUIPageViewControllerDelegate> _delegate;
	long long _scrollDirection;
	long long _currentlyDisplayedIndex;
	UICollectionViewFlowLayout* _collectionViewLayout;
	UICollectionView* _collectionView;
	UIPageControl* _pageControl;
	NSCache* _viewControllerForIndexPath;

}

@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewLayout;                   //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                         //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic) BOOL userDidTapPageControl;                                          //@synthesize userDidTapPageControl=_userDidTapPageControl - In the implementation block
@property (nonatomic,retain) NSCache * viewControllerForIndexPath;                                //@synthesize viewControllerForIndexPath=_viewControllerForIndexPath - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyDelegateWhenScrollViewSettles;                      //@synthesize shouldNotifyDelegateWhenScrollViewSettles=_shouldNotifyDelegateWhenScrollViewSettles - In the implementation block
@property (assign,nonatomic,__weak) id<FIUIPageViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FIUIPageViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                                           //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) long long currentlyDisplayedIndex;                                   //@synthesize currentlyDisplayedIndex=_currentlyDisplayedIndex - In the implementation block
@property (assign,nonatomic) BOOL showsPagingIndicator;                                           //@synthesize showsPagingIndicator=_showsPagingIndicator - In the implementation block
@property (nonatomic,readonly) UIViewController * currentlyDisplayedViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FIUIPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FIUIPageViewControllerDelegate>)arg1 ;
-(id<FIUIPageViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<FIUIPageViewControllerDataSource>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)scrollDirection;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(UIPageControl *)pageControl;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)_scrollViewDidStop;
-(void)_pageSelectedWithControl:(id)arg1 ;
-(long long)currentlyDisplayedIndex;
-(void)setCurrentlyDisplayedIndex:(long long)arg1 ;
-(void)setShouldNotifyDelegateWhenScrollViewSettles:(BOOL)arg1 ;
-(void)setCurrentlyDisplayedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)showsPagingIndicator;
-(NSCache *)viewControllerForIndexPath;
-(void)setShowsPagingIndicator:(BOOL)arg1 ;
-(void)setUserDidTapPageControl:(BOOL)arg1 ;
-(BOOL)shouldNotifyDelegateWhenScrollViewSettles;
-(BOOL)userDidTapPageControl;
-(void)_addViewController:(id)arg1 toCell:(id)arg2 ;
-(UIViewController *)currentlyDisplayedViewController;
-(void)setViewControllerForIndexPath:(NSCache *)arg1 ;
@end

