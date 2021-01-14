/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXMutableZoomablePhotosViewModel.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@class NSSet, PXAssetReference, PXZoomablePhotosAlphaAnimator, PXNumberAnimator, PXZoomablePhotosLayoutSpecManager, PXAssetsDataSourceManager, PXSectionedSelectionManager, PXMediaProvider, NSArray, PXZoomableInlineHeadersDataSourceManager, PXUpdater, PXSelectionSnapshot, NSString;

@interface PXZoomablePhotosViewModel : PXObservable <PXChangeObserver, PXMutableZoomablePhotosViewModel, PXAssetsDataSourceManagerObserver> {

	BOOL _isUpdatingZoomState;
	PXZoomablePhotosAlphaAnimator* _alphaAnimator;
	long long _pendingZoomColumnIndex;
	BOOL _animatePendingZoom;
	PXNumberAnimator* _columnWidthAnimator;
	double _normalizedColumnWidthWhenPinchStarted;
	double _pinchLogValue;
	double _pinchLogVelocity;
	double _pinchLastDate;
	BOOL _wasPinching;
	BOOL _wasInteractiveZooming;
	unsigned long long _supportLevel;
	id _pauseToken;
	BOOL _lowMemoryMode;
	BOOL _isPinching;
	BOOL _viewBasedDecorationsEnabled;
	BOOL _isInSelectMode;
	BOOL _isInteractiveZooming;
	BOOL _aspectFit;
	BOOL _captionsVisible;
	BOOL _wantsDimmedSelectionStyle;
	BOOL _wantsOverBackgroundFloatingHeaderAppearance;
	BOOL _layoutExtendsContentBelowBounds;
	BOOL _shouldHideSurroundingContent;
	BOOL _isPerformingInitialChanges;
	BOOL _hasInlineHeadersContent;
	PXZoomablePhotosLayoutSpecManager* _specManager;
	PXAssetsDataSourceManager* _assetsDataSourceManager;
	PXSectionedSelectionManager* _selectionManager;
	PXMediaProvider* _mediaProvider;
	NSSet* _draggedAssetReferences;
	PXAssetReference* _dropTargetAssetReference;
	double _interactiveZoomColumnIndex;
	NSArray* _allowedColumns;
	NSArray* _allowedColumnWidths;
	PXAssetReference* _anchorAssetReference;
	PXZoomableInlineHeadersDataSourceManager* _inlineHeadersDataSourceManager;
	PXUpdater* _updater;
	SCD_Struct_PX48 _pinchState;
	SCD_Struct_PX49 _zoomState;

}

@property (nonatomic,readonly) PXUpdater * updater;                                                                    //@synthesize updater=_updater - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX50 zoomState;                                                                //@synthesize zoomState=_zoomState - In the implementation block
@property (nonatomic,retain) NSArray * allowedColumns;                                                                 //@synthesize allowedColumns=_allowedColumns - In the implementation block
@property (nonatomic,readonly) BOOL isPerformingInitialChanges;                                                        //@synthesize isPerformingInitialChanges=_isPerformingInitialChanges - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSurroundingContent;                                                        //@synthesize shouldHideSurroundingContent=_shouldHideSurroundingContent - In the implementation block
@property (assign,nonatomic) BOOL hasInlineHeadersContent;                                                             //@synthesize hasInlineHeadersContent=_hasInlineHeadersContent - In the implementation block
@property (nonatomic,readonly) BOOL allowDenseLevels; 
@property (nonatomic,readonly) PXZoomablePhotosLayoutSpecManager * specManager;                                        //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * assetsDataSourceManager;                                    //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                         //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) id<PXZoomablePhotosUserDefaults> userDefaults; 
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                                        //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXSelectionSnapshot * selectionSnapshot; 
@property (nonatomic,readonly) BOOL lowMemoryMode;                                                                     //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (nonatomic,readonly) BOOL isPinching;                                                                        //@synthesize isPinching=_isPinching - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX47 pinchState;                                                             //@synthesize pinchState=_pinchState - In the implementation block
@property (nonatomic,readonly) BOOL viewBasedDecorationsEnabled;                                                       //@synthesize viewBasedDecorationsEnabled=_viewBasedDecorationsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isInSelectMode;                                                                    //@synthesize isInSelectMode=_isInSelectMode - In the implementation block
@property (nonatomic,readonly) NSSet * draggedAssetReferences;                                                         //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference;                                            //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,readonly) BOOL isInteractiveZooming;                                                              //@synthesize isInteractiveZooming=_isInteractiveZooming - In the implementation block
@property (nonatomic,readonly) double interactiveZoomColumnIndex;                                                      //@synthesize interactiveZoomColumnIndex=_interactiveZoomColumnIndex - In the implementation block
@property (nonatomic,readonly) NSArray * allowedColumnWidths;                                                          //@synthesize allowedColumnWidths=_allowedColumnWidths - In the implementation block
@property (nonatomic,readonly) PXAssetReference * anchorAssetReference;                                                //@synthesize anchorAssetReference=_anchorAssetReference - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayingIndividualItems; 
@property (nonatomic,readonly) BOOL aspectFit;                                                                         //@synthesize aspectFit=_aspectFit - In the implementation block
@property (nonatomic,readonly) BOOL captionsVisible;                                                                   //@synthesize captionsVisible=_captionsVisible - In the implementation block
@property (nonatomic,readonly) BOOL wantsDimmedSelectionStyle;                                                         //@synthesize wantsDimmedSelectionStyle=_wantsDimmedSelectionStyle - In the implementation block
@property (nonatomic,readonly) BOOL wantsOverBackgroundFloatingHeaderAppearance;                                       //@synthesize wantsOverBackgroundFloatingHeaderAppearance=_wantsOverBackgroundFloatingHeaderAppearance - In the implementation block
@property (nonatomic,readonly) BOOL layoutExtendsContentBelowBounds;                                                   //@synthesize layoutExtendsContentBelowBounds=_layoutExtendsContentBelowBounds - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersDataSourceManager * inlineHeadersDataSourceManager;              //@synthesize inlineHeadersDataSourceManager=_inlineHeadersDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXAssetReference *)dropTargetAssetReference;
-(BOOL)viewBasedDecorationsEnabled;
-(NSSet *)draggedAssetReferences;
-(void)setWantsDimmedSelectionStyle:(BOOL)arg1 ;
-(void)setIsInteractiveZooming:(BOOL)arg1 ;
-(void)setCaptionsVisible:(BOOL)arg1 ;
-(PXSectionedSelectionManager *)selectionManager;
-(PXSelectionSnapshot *)selectionSnapshot;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(PXZoomablePhotosLayoutSpecManager *)specManager;
-(PXMediaProvider *)mediaProvider;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(BOOL)wantsDimmedSelectionStyle;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(void)setLayoutExtendsContentBelowBounds:(BOOL)arg1 ;
-(void)zoomInToLastRememberedWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2 ;
-(double)interactiveZoomColumnIndex;
-(void)setAspectFit:(BOOL)arg1 ;
-(void)setInteractiveZoomColumnIndex:(double)arg1 withAnchorAssetReference:(id)arg2 ;
-(void)setWantsOverBackgroundFloatingHeaderAppearance:(BOOL)arg1 ;
-(NSArray *)allowedColumnWidths;
-(long long)_closestColumnIndexForAnimatedValue:(double)arg1 ;
-(id)init;
-(void)performInitialChanges:(/*^block*/id)arg1 ;
-(BOOL)shouldHideSurroundingContent;
-(long long)_maxColumnsForIndividualItems;
-(void)didPerformChanges;
-(NSArray *)allowedColumns;
-(BOOL)aspectFit;
-(void)zoomToColumnIndex:(long long)arg1 withAnchorAssetReference:(id)arg2 animated:(BOOL)arg3 ;
-(double)_columnIndexForItemWidth:(double)arg1 ;
-(void)_invalidateAllowedColumns;
-(BOOL)isPerformingInitialChanges;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(void)_updateShouldHideSurroundingContent;
-(long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1 ;
-(BOOL)isInSelectMode;
-(BOOL)captionsVisible;
-(SCD_Struct_PX50)zoomState;
-(PXAssetReference *)anchorAssetReference;
-(double)_columnWidthForDesiredColumnIndex:(double)arg1 ;
-(void)setShouldHideSurroundingContent:(BOOL)arg1 ;
-(id<PXZoomablePhotosUserDefaults>)userDefaults;
-(long long)denseZoomLevelForZoomState:(SCD_Struct_PX50)arg1 ;
-(void)_updateZoomState;
-(NSString *)description;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1 ;
-(PXUpdater *)updater;
-(PXZoomableInlineHeadersDataSourceManager *)inlineHeadersDataSourceManager;
-(long long)_closestColumnIndexForColumnWidth:(double)arg1 ;
-(BOOL)isDisplayingIndividualItems;
-(void)setIsInSelectMode:(BOOL)arg1 ;
-(long long)_clampColumnIndexToValidIndex:(long long)arg1 ;
-(BOOL)hasInlineHeadersContent;
-(BOOL)layoutExtendsContentBelowBounds;
-(SCD_Struct_PX47)pinchState;
-(void)setAllowedColumns:(NSArray *)arg1 ;
-(void)zoomInToIndividualItemsWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isInteractiveZooming;
-(BOOL)isPinching;
-(void)_handleSpecChange;
-(void)_invalidateAlphaAnimator;
-(void)resetColumns;
-(long long)_nextColumnIndexForInitialColumnWidth:(double)arg1 currentColumnWidth:(double)arg2 velocity:(double)arg3 ;
-(void)_invalidateShouldHideSurroundingContent;
-(void)_invalidatePinchVelocity;
-(id)mutableChangeObject;
-(BOOL)wantsOverBackgroundFloatingHeaderAppearance;
-(void)setHasInlineHeadersContent:(BOOL)arg1 ;
-(void)setZoomState:(SCD_Struct_PX50)arg1 ;
-(void)_updateAlphaAnimator;
-(BOOL)lowMemoryMode;
-(void)_setNeedsUpdate;
-(void)setIsPinching:(BOOL)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 selectionManager:(id)arg2 mediaProvider:(id)arg3 specManager:(id)arg4 ;
-(void)setPinchState:(SCD_Struct_PX47)arg1 withAnchorAssetReference:(id)arg2 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_updatePinchVelocity;
-(BOOL)allowDenseLevels;
-(void)_updateAllowedColumns;
-(void)dealloc;
-(BOOL)hasContentToZoom;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_invalidateZoomState;
@end

