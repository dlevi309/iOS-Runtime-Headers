/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <VideosUI/VideosExtrasCarouselCollectionViewDelegate.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant.h>

@protocol VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate, VideosExtrasCarouselCollectionViewLayout;
@class VideosExtrasCarouselCollectionView, UICollectionViewLayout, NSString;

@interface VideosExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasCarouselCollectionViewDelegate, VideosExtrasZoomingImageTransitionParticipant> {

	BOOL _revealingNavigationBarDuringTransition;
	id<VideosExtrasCarouselViewControllerDataSource> _dataSource;
	id<VideosExtrasCarouselViewControllerDelegate> _delegate;
	VideosExtrasCarouselCollectionView* _carouselCollectionView;
	UICollectionViewLayout*<VideosExtrasCarouselCollectionViewLayout> _carouselCollectionViewLayout;

}

@property (nonatomic,retain) VideosExtrasCarouselCollectionView * carouselCollectionView;                                                 //@synthesize carouselCollectionView=_carouselCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout*<VideosExtrasCarouselCollectionViewLayout> carouselCollectionViewLayout;              //@synthesize carouselCollectionViewLayout=_carouselCollectionViewLayout - In the implementation block
@property (assign,getter=isRevealingNavigationBarDuringTransition,nonatomic) BOOL revealingNavigationBarDuringTransition;                 //@synthesize revealingNavigationBarDuringTransition=_revealingNavigationBarDuringTransition - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasCarouselViewControllerDataSource> dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasCarouselViewControllerDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfVisibleItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<VideosExtrasCarouselViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<VideosExtrasCarouselViewControllerDataSource>)dataSource;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<VideosExtrasCarouselViewControllerDelegate>)arg1 ;
-(void)setDataSource:(id<VideosExtrasCarouselViewControllerDataSource>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)_isPhone;
-(void)viewDidLoad;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)_numberOfItems;
-(void)dealloc;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)indexOfVisibleItem;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 ;
-(VideosExtrasCarouselCollectionView *)carouselCollectionView;
-(void)_ensureScrollViewSnaps;
-(void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2 ;
-(void)_updateOpacityOfTextInVisibleCells;
-(void)_updateWindowSizeForVisibleCells;
-(UICollectionViewLayout*<VideosExtrasCarouselCollectionViewLayout>)carouselCollectionViewLayout;
-(id)_findSnappingItemFromContentOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_snapTargetContentOffset:(inout CGPoint*)arg1 toItemIndexPath:(id)arg2 atItemOffset:(CGPoint)arg3 ;
-(void)setRevealingNavigationBarDuringTransition:(BOOL)arg1 ;
-(id)carouselCollectionViewCellForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isRevealingNavigationBarDuringTransition;
-(void)setCarouselCollectionViewLayout:(UICollectionViewLayout*<VideosExtrasCarouselCollectionViewLayout>)arg1 ;
-(void)setCarouselCollectionView:(VideosExtrasCarouselCollectionView *)arg1 ;
-(void)subviewsDidChangeForCarouselCollectionView:(id)arg1 ;
@end

