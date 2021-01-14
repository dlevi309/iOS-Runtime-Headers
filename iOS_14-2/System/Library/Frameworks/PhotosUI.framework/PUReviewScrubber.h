/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIToolbar.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;
@class NSIndexPath, _UIBackdropView, UIImageView, PUHorizontalCollectionViewLayout, UICollectionView, NSString, UITapGestureRecognizer, UIImpactFeedbackGenerator;

@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	BOOL __ignoreScrollViewDidScrollUpdate;
	BOOL __performingInteractiveUpdate;
	id<PUReviewScrubberDataSource> _dataSource;
	id<PUReviewScrubberDelegate> _scrubberDelegate;
	NSIndexPath* _selectedIndexPath;
	Class _scrubberCellClass;
	_UIBackdropView* __backdropView;
	UIImageView* __shadowView;
	UIImageView* __arrowImageView;
	PUHorizontalCollectionViewLayout* __collectionViewLayout;
	UICollectionView* __collectionView;
	NSString* _cellReuseIdentifier;
	UITapGestureRecognizer* __tapGestureRecognizer;
	UIImpactFeedbackGenerator* __impactFeedbackBehavior;
	NSIndexPath* __indexPathForPreviousFeedbackQuery;

}

@property (nonatomic,readonly) _UIBackdropView * _backdropView;                                                                           //@synthesize _backdropView=__backdropView - In the implementation block
@property (nonatomic,readonly) UIImageView * _shadowView;                                                                                 //@synthesize _shadowView=__shadowView - In the implementation block
@property (nonatomic,readonly) UIImageView * _arrowImageView;                                                                             //@synthesize _arrowImageView=__arrowImageView - In the implementation block
@property (nonatomic,readonly) PUHorizontalCollectionViewLayout * _collectionViewLayout;                                                  //@synthesize _collectionViewLayout=__collectionViewLayout - In the implementation block
@property (nonatomic,readonly) UICollectionView * _collectionView;                                                                        //@synthesize _collectionView=__collectionView - In the implementation block
@property (nonatomic,retain) NSString * cellReuseIdentifier;                                                                              //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL _ignoreScrollViewDidScrollUpdate;                                                                     //@synthesize _ignoreScrollViewDidScrollUpdate=__ignoreScrollViewDidScrollUpdate - In the implementation block
@property (nonatomic,readonly) BOOL _performingInteractiveUpdate;                                                                         //@synthesize _performingInteractiveUpdate=__performingInteractiveUpdate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGestureRecognizer;                                                            //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIImpactFeedbackGenerator * _impactFeedbackBehavior;                                                       //@synthesize _impactFeedbackBehavior=__impactFeedbackBehavior - In the implementation block
@property (setter=_setIndexPathForPreviousFeedbackQuery:,nonatomic,retain) NSIndexPath * _indexPathForPreviousFeedbackQuery;              //@synthesize _indexPathForPreviousFeedbackQuery=__indexPathForPreviousFeedbackQuery - In the implementation block
@property (assign,nonatomic) id<PUReviewScrubberDataSource> dataSource;                                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<PUReviewScrubberDelegate> scrubberDelegate;                                                               //@synthesize scrubberDelegate=_scrubberDelegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                                             //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) Class scrubberCellClass;                                                                                     //@synthesize scrubberCellClass=_scrubberCellClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(UICollectionView *)_collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<PUReviewScrubberDataSource>)dataSource;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)_handleTapAtIndexPath:(id)arg1 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToPoint:(CGPoint)arg2 excludingIndexPath:(id)arg3 ;
-(void)_commonPUReviewScrubberInitialization;
-(Class)scrubberCellClass;
-(void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)toggleSelectedIndexPathAnimated:(BOOL)arg1 ;
-(void)reloadSelectedIndexPathAnimated:(BOOL)arg1 ;
-(void)_beginFeedbackInteraction;
-(void)_playFeedbackIfNeeded;
-(void)_endFeedbackInteraction;
-(void)_handleTapOnReviewScrubber:(id)arg1 ;
-(void)_updateContentOffsetForSelectedIndexPathAnimated:(BOOL)arg1 ;
-(id)indexPathUnderTickMarkInCollectionView:(id)arg1 atContentOffset:(CGPoint)arg2 ;
-(CGPoint)contentOffsetForIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(CGPoint)contentOffsetForItemAtIndex:(long long)arg1 ofScrollView:(id)arg2 ;
-(id<PUReviewScrubberDelegate>)scrubberDelegate;
-(void)_updateToSelectedIndexPath:(id)arg1 ;
-(void)_notifyDelegateOfScrub;
-(void)_notifyDelegateOfSelection;
-(UIImageView *)_arrowImageView;
-(BOOL)_ignoreScrollViewDidScrollUpdate;
-(BOOL)_performingInteractiveUpdate;
-(UIImpactFeedbackGenerator *)_impactFeedbackBehavior;
-(NSIndexPath *)_indexPathForPreviousFeedbackQuery;
-(void)_setIndexPathForPreviousFeedbackQuery:(id)arg1 ;
-(void)finishInteractiveUpdate;
-(void)beginInteractiveUpdate;
-(void)reloadIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)toggleIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithAbsoluteProgress:(double)arg1 ;
-(void)setScrubberDelegate:(id<PUReviewScrubberDelegate>)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setDataSource:(id<PUReviewScrubberDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)cellReuseIdentifier;
-(BOOL)isMinibar;
-(_UIBackdropView *)_backdropView;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PUHorizontalCollectionViewLayout *)_collectionViewLayout;
-(void)setCellReuseIdentifier:(NSString *)arg1 ;
-(void)setScrubberCellClass:(Class)arg1 ;
-(UIImageView *)_shadowView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
@end

