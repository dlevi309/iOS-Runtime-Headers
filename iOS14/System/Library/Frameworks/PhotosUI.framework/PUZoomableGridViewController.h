/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCloudQuotaControllerDelegate.h>
#import <libobjc.A.dylib/PUMagnfiedViewControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotosLibraryFooterViewModelPresentationDelegate.h>

@class PXCPLUIStatusProvider, PXCloudQuotaController, NSTimer, NSArray, PUMomentsZoomLevelManager, PUZoomableGridViewControllerSpec, PUGridZoomLevelInfo, PUZoomableGridTransition, NSIndexPath, UITapGestureRecognizer, PUGridPinchGestureRecognizer, PUGridMagnifiedImageViewController, NSString;

@interface PUZoomableGridViewController : PUPhotosGridViewController <PXChangeObserver, PXCloudQuotaControllerDelegate, PUMagnfiedViewControllerDelegate, PXPhotosLibraryFooterViewModelPresentationDelegate> {

	BOOL _isDisplayingGlobalFooterView;
	BOOL _isDisplayingEmptyPlaceholderView;
	PXCPLUIStatusProvider* _cplUIStatusProvider;
	PXCloudQuotaController* _cloudQuotaController;
	BOOL _iCPLEnabled;
	BOOL _globalFooterDidAutoScroll;
	NSTimer* _globalFooterAutoScrollMinimumIdleTimer;
	BOOL _simulateGlobalFooterImportantInformationUpdates;
	NSTimer* _globalFooterImportantInformationUpdatesTimer;
	BOOL __hasAppearedOnce;
	NSArray* __syncProgressAlbums;
	PUMomentsZoomLevelManager* _zoomLevelManager;
	unsigned long long _zoomLevel;
	PUZoomableGridViewControllerSpec* _zoomableGridSpec;
	PUGridZoomLevelInfo* __zoomLevelInfo;
	PUZoomableGridTransition* _currentGridZoomTransitionInfo;
	NSIndexPath* __transitionExplicitAnchorIndexPath;
	NSIndexPath* __lastZoomInTransitionAnchorIndexPath;
	UITapGestureRecognizer* __tapGestureRecognizer;
	PUGridPinchGestureRecognizer* __gridPinchGestureRecognizer;
	PUGridMagnifiedImageViewController* _magnifiedImageViewController;
	double __lastUpdateWidth;
	unsigned long long __magnifierState;
	NSIndexPath* __dynamicLayoutTransitionAnchorIndexPath;
	CGPoint __frozeMagnifierAtPosition;

}

@property (nonatomic,readonly) PUZoomableGridTransition * currentGridZoomTransitionInfo; 
@property (nonatomic,retain) PUZoomableGridViewControllerSpec * zoomableGridSpec;                                                                     //@synthesize zoomableGridSpec=_zoomableGridSpec - In the implementation block
@property (nonatomic,readonly) PUGridZoomLevelInfo * _zoomLevelInfo;                                                                                  //@synthesize _zoomLevelInfo=__zoomLevelInfo - In the implementation block
@property (setter=_setCurrentGridZoomTransitionInfo:,nonatomic,retain) PUZoomableGridTransition * currentGridZoomTransitionInfo;                      //@synthesize currentGridZoomTransitionInfo=_currentGridZoomTransitionInfo - In the implementation block
@property (setter=_setTransitionExplicitAnchorIndexPath:,nonatomic,retain) NSIndexPath * _transitionExplicitAnchorIndexPath;                          //@synthesize _transitionExplicitAnchorIndexPath=__transitionExplicitAnchorIndexPath - In the implementation block
@property (setter=_setLastZoomInTransitionAnchorIndexPath:,nonatomic,retain) NSIndexPath * _lastZoomInTransitionAnchorIndexPath;                      //@synthesize _lastZoomInTransitionAnchorIndexPath=__lastZoomInTransitionAnchorIndexPath - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                                         //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (setter=_setGridPinchGestureRecognizer:,nonatomic,retain) PUGridPinchGestureRecognizer * _gridPinchGestureRecognizer;                       //@synthesize _gridPinchGestureRecognizer=__gridPinchGestureRecognizer - In the implementation block
@property (setter=_setMagnifiedImageViewController:,nonatomic,retain) PUGridMagnifiedImageViewController * magnifiedImageViewController;              //@synthesize magnifiedImageViewController=_magnifiedImageViewController - In the implementation block
@property (nonatomic,readonly) NSArray * _syncProgressAlbums;                                                                                         //@synthesize _syncProgressAlbums=__syncProgressAlbums - In the implementation block
@property (assign,setter=_setLastUpdateWidth:,nonatomic) double _lastUpdateWidth;                                                                     //@synthesize _lastUpdateWidth=__lastUpdateWidth - In the implementation block
@property (assign,setter=_setHasAppearedOnce:,nonatomic) BOOL _hasAppearedOnce;                                                                       //@synthesize _hasAppearedOnce=__hasAppearedOnce - In the implementation block
@property (assign,setter=_setMagnifierState:,nonatomic) unsigned long long _magnifierState;                                                           //@synthesize _magnifierState=__magnifierState - In the implementation block
@property (assign,setter=_setFrozeMagnifierAtPosition:,nonatomic) CGPoint _frozeMagnifierAtPosition;                                                  //@synthesize _frozeMagnifierAtPosition=__frozeMagnifierAtPosition - In the implementation block
@property (setter=_setDynamicLayoutTransitionAnchorIndexPath:,nonatomic,retain) NSIndexPath * _dynamicLayoutTransitionAnchorIndexPath;                //@synthesize _dynamicLayoutTransitionAnchorIndexPath=__dynamicLayoutTransitionAnchorIndexPath - In the implementation block
@property (nonatomic,readonly) PUMomentsZoomLevelManager * zoomLevelManager;                                                                          //@synthesize zoomLevelManager=_zoomLevelManager - In the implementation block
@property (nonatomic,readonly) unsigned long long zoomLevel;                                                                                          //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createCPLUIStatusProvider;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(CGPoint)arg2 contentSize:(CGSize)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1 ;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(void)uninstallGestureRecognizers;
-(unsigned long long)zoomLevel;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(BOOL)canDragIn;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)wantsPlaceholderView;
-(void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 buttonAction:(/*^block*/id*)arg4 ;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)_handlePreviewGesture:(id)arg1 ;
-(void)updateLayoutMetrics;
-(id)newGridLayout;
-(BOOL)allowSlideshowButton;
-(void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(BOOL)arg4 ;
-(PUZoomableGridViewControllerSpec *)zoomableGridSpec;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(PUZoomableGridTransition *)currentGridZoomTransitionInfo;
-(void)_handleTapGesture:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 forIndexPath:(id)arg2 ;
-(BOOL)pu_shouldActAsTabRootViewController;
-(NSString *)description;
-(BOOL)updateSpec;
-(CGRect)_frameForItemAtIndexPath:(id)arg1 ;
-(long long)dateRangeFormatterPreset;
-(void)didReceiveMemoryWarning;
-(BOOL)isTransitionAutoAdjustContentOffsetEnabled;
-(BOOL)canBeginStackCollapseTransition;
-(id)presentingViewControllerForCloudQuotaController:(id)arg1 ;
-(void)configureGlobalFooterView:(id)arg1 ;
-(CGPoint)contentOffsetForPreheating;
-(void)preheatAssets;
-(void)viewDidLoad;
-(NSArray *)_syncProgressAlbums;
-(void)_invalidateSyncProgressAlbums;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)gridZoomTransitionDidFinish:(BOOL)arg1 ;
-(void)prepareForTransitionToZoomableViewController:(id)arg1 anchorItemIndexPath:(id)arg2 anchorShiftsColumns:(BOOL)arg3 animated:(BOOL)arg4 interactive:(BOOL)arg5 ;
-(id)initWithSpec:(id)arg1 zoomLevelManager:(id)arg2 zoomLevel:(unsigned long long)arg3 ;
-(BOOL)isCurrentCollectionViewDataSource;
-(BOOL)canDisplayEditButton;
-(CGSize)contentSizeForPreheating;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldPerformAutomaticContentOffsetAdjustment;
-(BOOL)shouldPreventRevealInMomentAction;
-(void)processDataSourceChange:(id)arg1 ;
-(BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1 ;
-(long long)oneUpPresentationOrigin;
-(void)willDisplayEmptyPlaceholderView;
-(void)didEndDisplayingEmptyPlaceholderView;
-(void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1 ;
-(void)updateVisibleSectionHeadersAtIndexes:(id)arg1 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)gridSettings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)wantsGlobalFooter;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)cellFillMode;
-(CGSize)imageRequestItemSize;
-(void)installGestureRecognizers;
-(long long)imageDeliveryMode;
-(double)cellAspectRatioHint;
-(PUMomentsZoomLevelManager *)zoomLevelManager;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(PUGridZoomLevelInfo *)_zoomLevelInfo;
-(BOOL)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(long long*)arg3 cropInsets:(UIEdgeInsets*)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6 ;
-(id)bestTransitionReferenceItemIndexPathOutIsFromLastTransition:(BOOL*)arg1 outIsExplicit:(BOOL*)arg2 ;
-(id)presentingViewControllerForViewModel:(id)arg1 ;
-(void)_updateTransitionsIfNecessary;
-(unsigned long long)_eventSourceFromZoomLevel:(unsigned long long)arg1 ;
-(void)_setCplUIStatusProvider:(id)arg1 ;
-(void)_needsCPLInformationDidChange;
-(void)_globalFooterDidChange;
-(BOOL)collectionViewPointInSectionHeader:(CGPoint)arg1 ;
-(BOOL)_shouldShowCPLInformationInGlobalFooter;
-(void)_updateMagnifierWithGesture:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_configureGlobalFooterImportantInformationUpdatesTimer;
-(BOOL)_shouldRevealPhotosGlobalFooterView;
-(void)_conditionallyRevealPhotosGlobalFooterViewWithLastUserScrollTime:(double)arg1 ;
-(void)_conditionallyRevealPhotosGlobalFooterView;
-(BOOL)_globalFooterHasImportantInformation;
-(void)_globalFooterHasImportantInformationDidChange;
-(void)_didEndDisplayingGlobalFooterView;
-(void)_handleGridPinchGestureRecognizer:(id)arg1 ;
-(id)magnifiedImageViewControllerCreatingIfNecessary:(BOOL)arg1 ;
-(void)_configureMagnifiedImageViewController:(id)arg1 forIndexPath:(id)arg2 gestureLocationInWindow:(CGPoint)arg3 ;
-(void)tearDownMagnifiedImageViewController;
-(id)_itemPathForLocationInGesture:(id)arg1 ;
-(void)_reclaimCollectionView;
-(BOOL)_disallowNavigationToHigherZoomLevel;
-(id)_beginInteractiveTransitionWithReferenceItemPath:(id)arg1 zoomingOut:(BOOL)arg2 ;
-(void)navigateToLowerZoomLevelWithReferenceItemPath:(id)arg1 ;
-(void)setZoomableGridSpec:(PUZoomableGridViewControllerSpec *)arg1 ;
-(void)_setCurrentGridZoomTransitionInfo:(id)arg1 ;
-(NSIndexPath *)_transitionExplicitAnchorIndexPath;
-(void)_setTransitionExplicitAnchorIndexPath:(id)arg1 ;
-(NSIndexPath *)_lastZoomInTransitionAnchorIndexPath;
-(void)_setLastZoomInTransitionAnchorIndexPath:(id)arg1 ;
-(PUGridPinchGestureRecognizer *)_gridPinchGestureRecognizer;
-(void)_setGridPinchGestureRecognizer:(id)arg1 ;
-(PUGridMagnifiedImageViewController *)magnifiedImageViewController;
-(void)_setMagnifiedImageViewController:(id)arg1 ;
-(double)_lastUpdateWidth;
-(void)_setLastUpdateWidth:(double)arg1 ;
-(BOOL)_hasAppearedOnce;
-(void)_setHasAppearedOnce:(BOOL)arg1 ;
-(unsigned long long)_magnifierState;
-(void)_setMagnifierState:(unsigned long long)arg1 ;
-(CGPoint)_frozeMagnifierAtPosition;
-(void)_setFrozeMagnifierAtPosition:(CGPoint)arg1 ;
-(NSIndexPath *)_dynamicLayoutTransitionAnchorIndexPath;
-(void)_setDynamicLayoutTransitionAnchorIndexPath:(id)arg1 ;
-(void)reclaimCollectionView;
-(void)ppt_navigateToPhotosDetailsAnimated:(BOOL)arg1 ;
-(void)dealloc;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

