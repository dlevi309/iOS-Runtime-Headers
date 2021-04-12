/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/PUReviewScrubberDataSource.h>
#import <libobjc.A.dylib/PUReviewScrubberDelegate.h>
#import <libobjc.A.dylib/PUAvalancheReviewCollectionViewLayoutDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUTransitionViewAnimatorDelegate.h>
#import <libobjc.A.dylib/PUPhotosSharingTransitionViewController.h>
#import <libobjc.A.dylib/PHAssetCollectionDataSource.h>
#import <libobjc.A.dylib/PUOneUpPhotosSharingTransitionViewController.h>
#import <libobjc.A.dylib/PUOneUpAssetTransitionViewController.h>

@protocol PUAvalancheReviewControllerDelegate, PLAssetContainerList, PLAssetContainer;
@class PHFetchResult, NSMutableDictionary, PUAvalancheReviewControllerSpec, UICollectionView, PUAvalancheReviewCollectionViewLayout, UIBarButtonItem, UITapGestureRecognizer, NSIndexPath, PLAvalanche, PLManagedAsset, NSOrderedSet, PHCachingImageManager, NSMutableSet, PUPhotoPinchGestureRecognizer, PUTransitionViewAnimator, PUPhotosZoomingSharingGridCell, UICollectionViewLayout, PUPhotosSharingTransitionContext, PUAssetTransitionInfo, PUReviewScrubber, NSString;

@interface PUAvalancheReviewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUAvalancheReviewCollectionViewLayoutDelegate, UIGestureRecognizerDelegate, PUTransitionViewAnimatorDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController> {

	PHFetchResult* _assetCollectionsFetchResult;
	NSMutableDictionary* _resultsForAssetCollection;
	BOOL __updatingContentOffsetFromScrubbing;
	BOOL __completingReviewMode;
	id<PUAvalancheReviewControllerDelegate> _delegate;
	id<PLAssetContainerList> _avalancheContainerList;
	PUAvalancheReviewControllerSpec* __spec;
	UICollectionView* __collectionView;
	PUAvalancheReviewCollectionViewLayout* __collectionViewLayout;
	UIBarButtonItem* __doneBarButtonItem;
	UIBarButtonItem* __cancelBarButtonItem;
	UITapGestureRecognizer* __tapGestureRecognizer;
	NSIndexPath* __inFlightReferenceIndexPath;
	PLAvalanche* __avalancheBeingReviewed;
	PLManagedAsset* __initialAsset;
	NSOrderedSet* __initialFavorites;
	id<PLAssetContainer> __currentAssetContainer;
	PHCachingImageManager* __cachingImageManager;
	NSMutableSet* __preheatedAssets;
	NSMutableDictionary* __assetsToSizeDictionary;
	PUPhotoPinchGestureRecognizer* __photoZoomPinchGestureRecognizer;
	PUTransitionViewAnimator* __photoZoomAnimator;
	PUPhotosZoomingSharingGridCell* __photoZoomCell;
	UICollectionViewLayout* __transitionLayout;
	PUPhotosSharingTransitionContext* __photosSharingTransitionContext;
	PUAssetTransitionInfo* __assetTransitionInfo;
	CGRect __previousPreheatRect;

}

@property (nonatomic,readonly) PUAvalancheReviewControllerSpec * _spec;                                                                                 //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) UICollectionView * _collectionView;                                                                                      //@synthesize _collectionView=__collectionView - In the implementation block
@property (nonatomic,readonly) PUAvalancheReviewCollectionViewLayout * _collectionViewLayout;                                                           //@synthesize _collectionViewLayout=__collectionViewLayout - In the implementation block
@property (nonatomic,readonly) PUReviewScrubber * _reviewScrubber; 
@property (nonatomic,readonly) UIBarButtonItem * _doneBarButtonItem;                                                                                    //@synthesize _doneBarButtonItem=__doneBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _cancelBarButtonItem;                                                                                  //@synthesize _cancelBarButtonItem=__cancelBarButtonItem - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGestureRecognizer;                                                                          //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSIndexPath * _inFlightReferenceIndexPath;                                                                               //@synthesize _inFlightReferenceIndexPath=__inFlightReferenceIndexPath - In the implementation block
@property (nonatomic,readonly) BOOL _updatingContentOffsetFromScrubbing;                                                                                //@synthesize _updatingContentOffsetFromScrubbing=__updatingContentOffsetFromScrubbing - In the implementation block
@property (assign,nonatomic) BOOL _completingReviewMode;                                                                                                //@synthesize _completingReviewMode=__completingReviewMode - In the implementation block
@property (nonatomic,readonly) PLAvalanche * _avalancheBeingReviewed;                                                                                   //@synthesize _avalancheBeingReviewed=__avalancheBeingReviewed - In the implementation block
@property (nonatomic,readonly) PLManagedAsset * _initialAsset;                                                                                          //@synthesize _initialAsset=__initialAsset - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * _initialFavorites;                                                                                        //@synthesize _initialFavorites=__initialFavorites - In the implementation block
@property (nonatomic,readonly) id<PLAssetContainer> _currentAssetContainer;                                                                             //@synthesize _currentAssetContainer=__currentAssetContainer - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * _cachingImageManager;                                                                            //@synthesize _cachingImageManager=__cachingImageManager - In the implementation block
@property (assign,setter=_setPreviousPreheatRect:,nonatomic) CGRect _previousPreheatRect;                                                               //@synthesize _previousPreheatRect=__previousPreheatRect - In the implementation block
@property (setter=_setPreheatedAssets:,nonatomic,retain) NSMutableSet * _preheatedAssets;                                                               //@synthesize _preheatedAssets=__preheatedAssets - In the implementation block
@property (setter=_setAssetsToSizeDictionary:,nonatomic,retain) NSMutableDictionary * _assetsToSizeDictionary;                                          //@synthesize _assetsToSizeDictionary=__assetsToSizeDictionary - In the implementation block
@property (setter=_setPhotoZoomPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * _photoZoomPinchGestureRecognizer;              //@synthesize _photoZoomPinchGestureRecognizer=__photoZoomPinchGestureRecognizer - In the implementation block
@property (setter=_setPhotoZoomAnimator:,nonatomic,retain) PUTransitionViewAnimator * _photoZoomAnimator;                                               //@synthesize _photoZoomAnimator=__photoZoomAnimator - In the implementation block
@property (setter=_setPhotoZoomCell:,nonatomic,retain) PUPhotosZoomingSharingGridCell * _photoZoomCell;                                                 //@synthesize _photoZoomCell=__photoZoomCell - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                                   //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * _photosSharingTransitionContext;                                                        //@synthesize _photosSharingTransitionContext=__photosSharingTransitionContext - In the implementation block
@property (nonatomic,retain) PUAssetTransitionInfo * _assetTransitionInfo;                                                                              //@synthesize _assetTransitionInfo=__assetTransitionInfo - In the implementation block
@property (assign,nonatomic) id<PUAvalancheReviewControllerDelegate> delegate;                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<PLAssetContainerList> avalancheContainerList;                                                                         //@synthesize avalancheContainerList=_avalancheContainerList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHFetchResult * assetCollectionsFetchResult; 
+(id)filteringContext;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PUAvalancheReviewControllerSpec *)_spec;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(UICollectionView *)_collectionView;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<PUAvalancheReviewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_handleDoneButton:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(CGRect)arg3 atIndexPath:(id)arg4 ;
-(void)_handlePhotoPinch:(id)arg1 ;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 ;
-(CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1 ;
-(void)setOneUpPhotosSharingTransitionContext:(id)arg1 ;
-(void)setOneUpPhotosSharingTransitionInfo:(id)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(id)embeddedActivityView;
-(CGRect)embeddedActivityViewFrameWhenShowing:(BOOL)arg1 ;
-(id)transitionCollectionView;
-(void)setPhotosSharingTransitionContext:(id)arg1 ;
-(void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2 ;
-(PUReviewScrubber *)_reviewScrubber;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)reviewScrubberDidScrub:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1 ;
-(unsigned long long)reviewScrubber:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2 ;
-(long long)_interfaceOrientationFromDeviceOrientation:(long long)arg1 ;
-(BOOL)reviewScrubber:(id)arg1 shouldProvideFeedbackForCellAtIndexPath:(id)arg2 ;
-(id)initWithSpec:(id)arg1 startingAtAsset:(id)arg2 inAvalanche:(id)arg3 currentAssetContainer:(id)arg4 ;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)_updateEnabledNavigationBarItems;
-(void)_updateNavigationItemTitle;
-(void)_updateBarItemsAnimated:(BOOL)arg1 ;
-(void)_updateMainViewAnimated:(BOOL)arg1 ;
-(void)_getMainCollectionViewFrame:(CGRect*)arg1 collectionViewLayoutInsets:(UIEdgeInsets*)arg2 orientation:(long long)arg3 ;
-(void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2 ;
-(NSMutableSet *)_preheatedAssets;
-(void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(CGRect)selectionBadgeFrameForItemFrame:(CGRect)arg1 atIndexPath:(id)arg2 ;
-(void)_handleTapAtIndexPath:(id)arg1 ;
-(void)_handleTapInMainCollectionView:(id)arg1 ;
-(id)_assetAtIndexPath:(id)arg1 ;
-(PLManagedAsset *)_initialAsset;
-(id)_phAssetAtIndexPath:(id)arg1 ;
-(CGSize)_sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1 ;
-(double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToPoint:(CGPoint)arg2 excludingIndexPath:(id)arg3 ;
-(id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2 ;
-(void)_updateCollectionViewLayoutInsets;
-(void)_beginZoomingForCellAtIndexPath:(id)arg1 ;
-(void)_endZoomingForCell;
-(unsigned short)reviewScrubberImageFormat;
-(void)_updateReviewScrubberFromContentOffset;
-(void)_reloadAvalancheDataWithAsset:(id)arg1 ;
-(void)_promoteFavoriteAssetsAndDeleteNonPicks:(BOOL)arg1 withReviewCompletionHandler:(/*^block*/id)arg2 ;
-(void)_toggleCurrentPickStatusAtIndexPath:(id)arg1 ;
-(void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1 ;
-(void)_dismissReviewControllerWithAsset:(id)arg1 ;
-(void)_finishReviewAndDeleteNonPicks:(BOOL)arg1 ;
-(void)_cancelReviewMode;
-(void)_cancelReviewModeAction:(id)arg1 ;
-(void)pu_assetContainerDidChange:(id)arg1 ;
-(void)_stopPreheatingAllAssets;
-(void)_startPreheatingAllAssets;
-(CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2 ;
-(id<PLAssetContainerList>)avalancheContainerList;
-(NSIndexPath *)_inFlightReferenceIndexPath;
-(BOOL)_updatingContentOffsetFromScrubbing;
-(BOOL)_completingReviewMode;
-(void)set_completingReviewMode:(BOOL)arg1 ;
-(NSOrderedSet *)_initialFavorites;
-(PLAvalanche *)_avalancheBeingReviewed;
-(id<PLAssetContainer>)_currentAssetContainer;
-(void)_setPreheatedAssets:(id)arg1 ;
-(NSMutableDictionary *)_assetsToSizeDictionary;
-(void)_setAssetsToSizeDictionary:(id)arg1 ;
-(PUPhotoPinchGestureRecognizer *)_photoZoomPinchGestureRecognizer;
-(void)_setPhotoZoomPinchGestureRecognizer:(id)arg1 ;
-(PUPhotosZoomingSharingGridCell *)_photoZoomCell;
-(PUTransitionViewAnimator *)_photoZoomAnimator;
-(void)_setPhotoZoomAnimator:(id)arg1 ;
-(void)_setPhotoZoomCell:(id)arg1 ;
-(void)_setTransitionLayout:(id)arg1 ;
-(PUPhotosSharingTransitionContext *)_photosSharingTransitionContext;
-(void)set_photosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1 ;
-(PUAssetTransitionInfo *)_assetTransitionInfo;
-(void)set_assetTransitionInfo:(PUAssetTransitionInfo *)arg1 ;
-(PHCachingImageManager *)_cachingImageManager;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<PUAvalancheReviewControllerDelegate>)arg1 ;
-(UICollectionViewLayout *)_transitionLayout;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)_resetPreheating;
-(void)viewDidLoad;
-(void)_updatePreheatedAssets;
-(BOOL)pu_wantsToolbarVisible;
-(UIBarButtonItem *)_cancelBarButtonItem;
-(CGRect)_previousPreheatRect;
-(void)_setPreviousPreheatRect:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PUAvalancheReviewCollectionViewLayout *)_collectionViewLayout;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(UIBarButtonItem *)_doneBarButtonItem;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_currentAsset;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
@end

