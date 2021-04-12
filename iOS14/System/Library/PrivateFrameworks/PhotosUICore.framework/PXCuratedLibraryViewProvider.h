/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGViewDiagnosticsSource.h>
#import <libobjc.A.dylib/PXZoomablePhotosInteractionDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGAXResponder.h>

@protocol PXGAXResponder, PXCuratedLibraryEventTracker;
@class PHPhotoLibrary, PXExtendedTraitCollection, PXGView, PXCuratedLibraryLayout, PXCuratedLibraryViewModel, PXUIMediaProvider, PXCuratedLibraryAssetsDataSourceManager, PXCuratedLibraryVideoPlaybackController, PXAssetsDataSourceCountsController, PXCuratedLibraryFooterController, PXZoomablePhotosInteraction, PXAssetReference, PXSectionedObjectReference, NSString;

@interface PXCuratedLibraryViewProvider : NSObject <PXGViewDiagnosticsSource, PXZoomablePhotosInteractionDelegate, PXChangeObserver, PXGAXResponder> {

	id<PXGAXResponder> _axNextResponder;
	PHPhotoLibrary* _photoLibrary;
	PXExtendedTraitCollection* _extendedTraitCollection;
	PXGView* _gridView;
	PXCuratedLibraryLayout* _layout;
	PXCuratedLibraryViewModel* _viewModel;
	PXUIMediaProvider* _mediaProvider;
	PXCuratedLibraryAssetsDataSourceManager* _assetsDataSourceManager;
	PXCuratedLibraryVideoPlaybackController* _videoPlaybackController;
	PXAssetsDataSourceCountsController* _itemCountsController;
	PXCuratedLibraryFooterController* _footerController;
	id<PXCuratedLibraryEventTracker> _eventTracker;
	PXZoomablePhotosInteraction* _zoomablePhotosInteraction;

}

@property (nonatomic,readonly) PXZoomablePhotosInteraction * zoomablePhotosInteraction;                                        //@synthesize zoomablePhotosInteraction=_zoomablePhotosInteraction - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;                                            //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,readonly) PXGView * gridView;                                                                             //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryLayout * layout;                                                                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                                          //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider;                                                              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * assetsDataSourceManager;                              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryVideoPlaybackController * videoPlaybackController;                              //@synthesize videoPlaybackController=_videoPlaybackController - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceCountsController * itemCountsController;                                      //@synthesize itemCountsController=_itemCountsController - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryFooterController * footerController;                                            //@synthesize footerController=_footerController - In the implementation block
@property (nonatomic,readonly) id<PXCuratedLibraryEventTracker> eventTracker;                                                  //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) PXAssetReference * preferredAnchorAssetReference; 
@property (nonatomic,readonly) PXSectionedObjectReference * preferredObjectReferenceToScrollToWhenRestoringState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder;                                                        //@synthesize axNextResponder=_axNextResponder - In the implementation block
-(void)selectionManager:(id)arg1 revealObjectAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(PXZoomablePhotosInteraction *)zoomablePhotosInteraction;
-(BOOL)zoomablePhotosInteractionShouldBegin:(id)arg1 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 coordinateSpace:(id)arg2 ;
-(void)setAxNextResponder:(id<PXGAXResponder>)arg1 ;
-(id)axContainingViewForAXGroup:(id)arg1 ;
-(id)indexPathsFromIndexPath:(PXSimpleIndexPath)arg1 toIndexPath:(PXSimpleIndexPath)arg2 inDataSource:(id)arg3 ;
-(PXAssetsDataSourceCountsController *)itemCountsController;
-(id<PXCuratedLibraryEventTracker>)eventTracker;
-(void)zoomablePhotosInteractionWillBegin:(id)arg1 ;
-(PXGView *)gridView;
-(BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3 ;
-(PXUIMediaProvider *)mediaProvider;
-(PXCuratedLibraryVideoPlaybackController *)videoPlaybackController;
-(PXCuratedLibraryAssetsDataSourceManager *)assetsDataSourceManager;
-(id)additionalRectDiagnosticsProvidersForView:(id)arg1 ;
-(id)hitTestResultControlsForCurrentZoomLevel;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 extendedTraitCollection:(id)arg2 ;
-(PXSectionedObjectReference *)preferredObjectReferenceToScrollToWhenRestoringState;
-(PXCuratedLibraryViewModel *)viewModel;
-(id)zoomablePhotosInteraction:(id)arg1 assetReferenceAtLocation:(CGPoint)arg2 ;
-(id)selectionManager:(id)arg1 indexPathsBetweenIndexPath:(PXSimpleIndexPath)arg2 andIndexPath:(PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4 ;
-(void)_logLibraryCountsIfNecessary;
-(long long)selectionBasisForSelectionManager:(id)arg1 ;
-(PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(PXAssetReference *)preferredAnchorAssetReference;
-(void)_handleChangeToModifySelectionWithUserInfo:(id)arg1 ;
-(PXCuratedLibraryFooterController *)footerController;
-(PXSimpleIndexPath)_indexPathClosestToIndexPath:(PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(void)prepareForNavigationToObjectReference:(id)arg1 ;
-(PXSimpleIndexPath)selectionManager:(id)arg1 indexPathClosestToIndexPath:(PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3 ;
-(void)scrollLibraryViewToAssetReference:(id)arg1 scrollPosition:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(id)_itemsGeometryForDataSource:(id)arg1 ;
-(id<PXGAXResponder>)axNextResponder;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(UIEdgeInsets)anchorPaddingForCurrentZoomLevel;
-(BOOL)canSelectObjectAtIndexPath:(PXSimpleIndexPath)arg1 inDataSource:(id)arg2 ;
-(void)scrollLibraryViewToObjectReference:(id)arg1 scrollPosition:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXCuratedLibraryLayout *)layout;
@end

