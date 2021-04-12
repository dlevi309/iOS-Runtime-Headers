/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXCuratedLibraryViewModel, PXAssetCollectionReference, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject {

	PXCuratedLibraryViewModel* _viewModel;
	long long _zoomLevel;
	long long _skimmingZoomLevel;
	id _dataSourcePauseToken;
	BOOL _isPlayingSlideshow;
	BOOL _isInteractionInProgress;
	PXAssetCollectionReference* _containingAssetCollectionReference;
	PXIndexPathSet* _indexPathSetForSkimming;
	PXSimpleIndexPath _initialIndexPath;
	PXSimpleIndexPath _skimmedIndexPath;

}

@property (nonatomic,readonly) PXAssetCollectionReference * containingAssetCollectionReference;              //@synthesize containingAssetCollectionReference=_containingAssetCollectionReference - In the implementation block
@property (nonatomic,readonly) BOOL isPlayingSlideshow;                                                      //@synthesize isPlayingSlideshow=_isPlayingSlideshow - In the implementation block
@property (nonatomic,readonly) BOOL isInteractionInProgress;                                                 //@synthesize isInteractionInProgress=_isInteractionInProgress - In the implementation block
@property (nonatomic,readonly) BOOL canStartSkimming; 
@property (nonatomic,copy,readonly) PXIndexPathSet * indexPathSetForSkimming;                                //@synthesize indexPathSetForSkimming=_indexPathSetForSkimming - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath initialIndexPath;                                           //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath skimmedIndexPath;                                             //@synthesize skimmedIndexPath=_skimmedIndexPath - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                        //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithViewModel:(id)arg1 ;
-(PXAssetCollectionReference *)containingAssetCollectionReference;
-(PXIndexPathSet *)indexPathSetForSkimming;
-(void)persistSkimmingState;
-(id)validatedAssetCollectionReference:(id)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)prepareForSkimmingInAssetCollectionReference:(id)arg1 ;
-(void)tearDownAfterSkimmingShowHints:(BOOL)arg1 persistState:(BOOL)arg2 ;
-(BOOL)canStartSkimming;
-(void)prepareForSlideshowForAssetCollectionReference:(id)arg1 ;
-(PXSimpleIndexPath)skimmedIndexPath;
-(void)prepareForShowingHintsForAssetCollectionReference:(id)arg1 ;
-(BOOL)isPlayingSlideshow;
-(PXSimpleIndexPath)initialIndexPath;
-(void)setSkimmedIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)transitionToSlideshow;
-(void)_prepareIndexesForAssetCollectionReference:(id)arg1 willStartSkimming:(BOOL)arg2 willStartSlideshow:(BOOL)arg3 ;
-(void)_updateViewModel;
-(BOOL)isInteractionInProgress;
-(void)transitionToSkimming;
@end

