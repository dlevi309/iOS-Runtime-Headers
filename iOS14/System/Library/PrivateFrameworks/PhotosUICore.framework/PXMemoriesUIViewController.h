/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>
#import <libobjc.A.dylib/PXTilingControllerZoomAnimationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXMemoriesUITileSourceDelegate.h>
#import <libobjc.A.dylib/PXUserInterfaceFeatureViewController.h>

@protocol PXViewControllerEventTracker;
@class PXMemoriesDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesSpecManager, PXMemoriesUITileSource, PXSectionedLayoutEngine, PXSectionedObjectReference, PXPhotosDetailsContext, PXBasicUIViewTileAnimator, PXMemoriesSpec, PXUITapGestureRecognizer, PXTouchingUIGestureRecognizer, PXTilingController, PXUIScrollViewController, NSString;

@interface PXMemoriesUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXSectionedDataSourceManagerObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController> {

	SCD_Struct_PX59 _updateFlags;
	BOOL __performNextTransitionWithoutAnimation;
	BOOL _embedded;
	PXMemoriesDataSourceManager* _dataSourceManager;
	PXMemoriesFeedViewControllerHelper* __helper;
	PXMemoriesSpecManager* __specManager;
	PXMemoriesUITileSource* __tileSource;
	PXSectionedLayoutEngine* __layoutEngine;
	id<PXViewControllerEventTracker> _eventTracker;
	PXSectionedObjectReference* _anchorMemoryReference;
	PXSectionedObjectReference* __highlightedMemoryReference;
	PXSectionedObjectReference* __actionPresentationMemoryReference;
	PXSectionedObjectReference* __activatedMemoryReference;
	PXPhotosDetailsContext* __selectedItemDetailsContext;
	PXBasicUIViewTileAnimator* __tileAnimator;
	PXMemoriesSpec* __spec;
	unsigned long long __memoriesStyle;
	PXUITapGestureRecognizer* __tapRecognizer;
	PXTouchingUIGestureRecognizer* __touchRecognizer;
	unsigned long long _pageIndex;
	PXTilingController* _tilingController;
	PXUIScrollViewController* _scrollViewController;
	CGPoint _anchorMemoryOrigin;

}

@property (nonatomic,readonly) PXMemoriesFeedViewControllerHelper * _helper;                                                                             //@synthesize _helper=__helper - In the implementation block
@property (nonatomic,readonly) PXMemoriesSpecManager * _specManager;                                                                                     //@synthesize _specManager=__specManager - In the implementation block
@property (nonatomic,readonly) PXMemoriesUITileSource * _tileSource;                                                                                     //@synthesize _tileSource=__tileSource - In the implementation block
@property (nonatomic,readonly) PXSectionedLayoutEngine * _layoutEngine;                                                                                  //@synthesize _layoutEngine=__layoutEngine - In the implementation block
@property (nonatomic,readonly) id<PXViewControllerEventTracker> eventTracker;                                                                            //@synthesize eventTracker=_eventTracker - In the implementation block
@property (setter=_setAnchorMemoryReference:,nonatomic,retain) PXSectionedObjectReference * anchorMemoryReference;                                       //@synthesize anchorMemoryReference=_anchorMemoryReference - In the implementation block
@property (assign,setter=_setAnchorMemoryOrigin:,nonatomic) CGPoint anchorMemoryOrigin;                                                                  //@synthesize anchorMemoryOrigin=_anchorMemoryOrigin - In the implementation block
@property (setter=_setHighlightedMemoryReference:,nonatomic,retain) PXSectionedObjectReference * _highlightedMemoryReference;                            //@synthesize _highlightedMemoryReference=__highlightedMemoryReference - In the implementation block
@property (setter=_setActionPresentationMemoryReference:,nonatomic,retain) PXSectionedObjectReference * _actionPresentationMemoryReference;              //@synthesize _actionPresentationMemoryReference=__actionPresentationMemoryReference - In the implementation block
@property (setter=_setActivatedMemoryReference:,nonatomic,retain) PXSectionedObjectReference * _activatedMemoryReference;                                //@synthesize _activatedMemoryReference=__activatedMemoryReference - In the implementation block
@property (setter=_setSelectedItemDetailsContext:,nonatomic,retain) PXPhotosDetailsContext * _selectedItemDetailsContext;                                //@synthesize _selectedItemDetailsContext=__selectedItemDetailsContext - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                                                                //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (setter=_setSpec:,nonatomic,retain) PXMemoriesSpec * _spec;                                                                                    //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) unsigned long long _memoriesStyle;                                                                                        //@synthesize _memoriesStyle=__memoriesStyle - In the implementation block
@property (nonatomic,readonly) PXUITapGestureRecognizer * _tapRecognizer;                                                                                //@synthesize _tapRecognizer=__tapRecognizer - In the implementation block
@property (nonatomic,readonly) PXTouchingUIGestureRecognizer * _touchRecognizer;                                                                         //@synthesize _touchRecognizer=__touchRecognizer - In the implementation block
@property (assign,setter=_setPerformNextTransitionWithoutAnimation:,nonatomic) BOOL _performNextTransitionWithoutAnimation;                              //@synthesize _performNextTransitionWithoutAnimation=__performNextTransitionWithoutAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                                                                               //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,readonly) PXTilingController * tilingController;                                                                                    //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * scrollViewController;                                                                          //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                                                                                            //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,readonly) PXMemoriesDataSourceManager * dataSourceManager;                                                                          //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@property (nonatomic,readonly) long long userInterfaceFeature; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(id<PXViewControllerEventTracker>)eventTracker;
-(PXMemoriesSpec *)_spec;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_configureLayout:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(id)initWithDataSourceManager:(id)arg1 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(PXUIScrollViewController *)scrollViewController;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(PXUITapGestureRecognizer *)_tapRecognizer;
-(void)_saveAnchor;
-(void)_updateIfNeeded;
-(id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)initWithDataSourceManager:(id)arg1 style:(unsigned long long)arg2 ;
-(void)invalidateLayoutEngine;
-(void)_updateLayoutEngineIfNeeded;
-(id)_createNewLayout;
-(void)_handleTouch:(id)arg1 ;
-(PXSimpleIndexPath)_indexPathForMemoryAtPoint:(CGPoint)arg1 ;
-(PXSimpleIndexPath)_indexPathForMemoryInScrollViewAtPoint:(CGPoint)arg1 ;
-(void)_presentMemoryAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_reconfigureTargetLayout;
-(id)_memoryTileViewForLocation:(CGPoint)arg1 ;
-(id)_previewActionMenusForIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_setHighlightedMemoryReference:(id)arg1 ;
-(void)_setActionPresentationMemoryReference:(id)arg1 ;
-(id)_photosDetailsContextForIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1 ;
-(PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1 ;
-(void)_updateScrollViewControllerContentInset;
-(CGPoint)anchorMemoryOrigin;
-(void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)datasourceManagerDidChange;
-(id)_sourceViewForMemoryActionsController;
-(PXSectionedObjectReference *)anchorMemoryReference;
-(void)_setAnchorMemoryReference:(id)arg1 ;
-(void)_setAnchorMemoryOrigin:(CGPoint)arg1 ;
-(PXSectionedObjectReference *)_highlightedMemoryReference;
-(PXSectionedObjectReference *)_actionPresentationMemoryReference;
-(unsigned long long)_memoriesStyle;
-(PXSectionedObjectReference *)_activatedMemoryReference;
-(void)_setActivatedMemoryReference:(id)arg1 ;
-(PXPhotosDetailsContext *)_selectedItemDetailsContext;
-(void)_setSelectedItemDetailsContext:(id)arg1 ;
-(PXTouchingUIGestureRecognizer *)_touchRecognizer;
-(BOOL)_performNextTransitionWithoutAnimation;
-(void)_setPerformNextTransitionWithoutAnimation:(BOOL)arg1 ;
-(PXTilingController *)tilingController;
-(long long)userInterfaceFeature;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)_setSpec:(id)arg1 ;
-(unsigned long long)pageIndex;
-(PXMemoriesDataSourceManager *)dataSourceManager;
-(PXMemoriesUITileSource *)_tileSource;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(id)createNewLayoutGenerator;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isEmbedded;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(BOOL)_needsUpdate;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg1 ;
-(id)regionOfInterestForTransition:(id)arg1 ;
-(void)prepareForInteractiveTransition:(id)arg1 ;
-(void)tilingController:(id)arg1 prepareForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(CGPoint)arg3 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(PXMemoriesSpecManager *)_specManager;
-(void)_setNeedsUpdate;
-(void)_updateLayoutIfNeeded;
-(PXSectionedLayoutEngine *)_layoutEngine;
-(PXMemoriesFeedViewControllerHelper *)_helper;
-(void)_handleScrollViewTap:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setEmbedded:(BOOL)arg1 ;
-(void)_invalidateLayout;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

