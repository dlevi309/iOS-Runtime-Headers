/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>

@class OKNavigatorCollectionView, NSArray, OKPageViewController, NSString;

@interface OKNavigatorCollectionViewControllerProxy : OKNavigatorViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate> {

	OKNavigatorCollectionView* _collectionView;
	CGPoint _collectionViewContentPreviousOffset;
	BOOL _scrollViewDidEndDragging;
	NSArray* _orderedPagesNames;
	OKPageViewController* _lastPageViewController;

}

@property (nonatomic,retain) OKPageViewController * lastPageViewController;              //@synthesize lastPageViewController=_lastPageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)prepareForDisplay;
-(void)viewWillLayoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)commonInit;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isHorizontal;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)_scrollViewDidCompleteScrolling;
-(void)resolutionDidChange;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSettingTransition:(unsigned long long)arg1 ;
-(void)setSettingOrientation:(unsigned long long)arg1 ;
-(void)prepareAdjacentPages;
-(void)updateCollectionView;
-(void)prepareAdjacentPages:(unsigned long long)arg1 withDirection:(unsigned long long)arg2 ;
-(void)prepareAdjacentPages:(unsigned long long)arg1 ;
-(void)prepareAdjacentPagesForScrolling;
-(void)updateCurrentPageViewController;
-(void)updateCollectionViewLayoutItemSize;
-(id)currentPageViewControllerIndexPath;
-(OKPageViewController *)lastPageViewController;
-(void)setLastPageViewController:(OKPageViewController *)arg1 ;
@end

