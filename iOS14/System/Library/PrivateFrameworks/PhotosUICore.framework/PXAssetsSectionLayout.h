/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSplitLayout.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGShadowSource.h>
#import <libobjc.A.dylib/PXGViewSource.h>
#import <libobjc.A.dylib/PXGDisplayAssetSource.h>
#import <libobjc.A.dylib/PXGGeneratedLayoutDelegate.h>
#import <libobjc.A.dylib/PXGItemsLayoutDelegate.h>
#import <libobjc.A.dylib/PXCuratedLibraryRowBasedLayout.h>

@protocol PXDisplayAssetFetchResult, PXAssetSectionLayoutDelegate;
@class PXCuratedLibrarySectionHeaderLayout, PXAssetCollectionReference, PXGBurstStackEffect, PXCuratedLibraryOverlayButtonConfiguration, PXAssetsSectionLayoutSpec, PXAssetsDataSource, PXPhotosGridAssetDecorationSource, PXCuratedLibraryActionManager, PXLoadingStatusManager, PXAssetReference, PXCuratedLibraryShowAllActionPerformer, PXCuratedLibraryActionPerformer, NSString, PXGLayoutGuide, PXIndexPathSet, PXGLayout, PXAssetsSectionConfigurator, PXSelectionSnapshot, NSSet;

@interface PXAssetsSectionLayout : PXGSplitLayout <PXChangeObserver, PXGShadowSource, PXGViewSource, PXGDisplayAssetSource, PXGGeneratedLayoutDelegate, PXGItemsLayoutDelegate, PXCuratedLibraryRowBasedLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	unsigned _sectionBoundariesSpriteIndex;
	unsigned _sectionShadowSpriteIndex;
	unsigned _showAllButtonSpriteIndex;
	unsigned short _showAllButtonVersion;
	CGSize _cachedShowAllButtonConfigurationSize;
	unsigned _selectAllButtonSpriteIndex;
	unsigned short _selectAllButtonVersion;
	CGSize _cachedSelectAllButtonConfigurationSize;
	PXCuratedLibrarySectionHeaderLayout* _sectionHeaderLayout;
	BOOL _isLastSection;
	BOOL _isUpdatingLocalSprites;
	BOOL _showAllButtonConfigurationIsValid;
	BOOL _selectAllButtonConfigurationIsValid;
	PXAssetCollectionReference* _assetCollectionReference;
	NSRange _cachedClampedItemRange;
	id<PXDisplayAssetFetchResult> _cachedClampedFetchResult;
	PXGBurstStackEffect* _burstStackEffect;
	BOOL _itemCaptionsVisible;
	BOOL _isSelecting;
	BOOL _canStartSelecting;
	BOOL _wantsShadow;
	BOOL _wantsDimmedSelectionStyle;
	BOOL _removesHeaderLayoutWhenEmpty;
	BOOL _removesContentLayoutWhenEmpty;
	BOOL _showsSkimmingSlideshow;
	BOOL _showsSkimmingInteraction;
	BOOL _isSkimming;
	BOOL _allowsPositionDependentHeaderContentOpacity;
	BOOL _presentedSkimming;
	PXCuratedLibraryOverlayButtonConfiguration* _showAllButtonConfiguration;
	PXCuratedLibraryOverlayButtonConfiguration* _selectAllButtonConfiguration;
	id<PXAssetSectionLayoutDelegate> _delegate;
	long long _zoomLevel;
	long long _targetZoomLevel;
	PXAssetsSectionLayoutSpec* _spec;
	long long _section;
	PXAssetsDataSource* _dataSource;
	PXPhotosGridAssetDecorationSource* _assetDecorationSource;
	PXCuratedLibraryActionManager* _actionManager;
	PXLoadingStatusManager* _loadingStatusManager;
	PXAssetReference* _dropTargetAssetReference;
	long long _numberOfPrecedingAssets;
	PXCuratedLibraryShowAllActionPerformer* _showAllActionPerformer;
	PXCuratedLibraryActionPerformer* _selectAllActionPerformer;
	NSString* _selectAllButtonTitle;
	/*^block*/id _addContentActionHandler;
	PXGLayoutGuide* _headerLayoutGuide;
	NSString* _axLocalizedBaseLabel;
	PXIndexPathSet* _skimmingIndexPaths;
	long long _maxSkimmingIndex;
	long long _currentSkimmingIndex;
	PXGLayout* _headerLayout;
	PXGLayout* _bodyContentLayout;
	PXAssetsSectionConfigurator* _configurator;
	PXGLayout* _bodyContainerLayout;
	double _distanceBetweenTitleTopAndBodyBottom;
	double _distanceBetweenHeaderTopAndNextBodyTop;
	double _intersectionSpacing;
	CGRect _showAllButtonFrame;
	PXSimpleIndexPath _presentedSectionIndexPath;

}

@property (nonatomic,retain) PXAssetsSectionConfigurator * configurator;                                               //@synthesize configurator=_configurator - In the implementation block
@property (nonatomic,retain) PXGLayout * bodyContainerLayout;                                                          //@synthesize bodyContainerLayout=_bodyContainerLayout - In the implementation block
@property (assign,nonatomic) BOOL allowsPositionDependentHeaderContentOpacity;                                         //@synthesize allowsPositionDependentHeaderContentOpacity=_allowsPositionDependentHeaderContentOpacity - In the implementation block
@property (assign,nonatomic) double distanceBetweenTitleTopAndBodyBottom;                                              //@synthesize distanceBetweenTitleTopAndBodyBottom=_distanceBetweenTitleTopAndBodyBottom - In the implementation block
@property (assign,nonatomic) double distanceBetweenHeaderTopAndNextBodyTop;                                            //@synthesize distanceBetweenHeaderTopAndNextBodyTop=_distanceBetweenHeaderTopAndNextBodyTop - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryOverlayButtonConfiguration * showAllButtonConfiguration;                //@synthesize showAllButtonConfiguration=_showAllButtonConfiguration - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryOverlayButtonConfiguration * selectAllButtonConfiguration;              //@synthesize selectAllButtonConfiguration=_selectAllButtonConfiguration - In the implementation block
@property (assign,nonatomic) CGRect showAllButtonFrame;                                                                //@synthesize showAllButtonFrame=_showAllButtonFrame - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath sectionIndexPath; 
@property (nonatomic,readonly) PXSimpleIndexPath presentedSectionIndexPath;                                            //@synthesize presentedSectionIndexPath=_presentedSectionIndexPath - In the implementation block
@property (nonatomic,readonly) BOOL presentedSkimming;                                                                 //@synthesize presentedSkimming=_presentedSkimming - In the implementation block
@property (nonatomic,retain) PXGLayout * headerLayout;                                                                 //@synthesize headerLayout=_headerLayout - In the implementation block
@property (nonatomic,readonly) BOOL isCurated; 
@property (nonatomic,readonly) long long numberOfAssets; 
@property (nonatomic,readonly) long long keyItemIndex; 
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> keyAssetsFetchResult; 
@property (assign,nonatomic) double intersectionSpacing;                                                               //@synthesize intersectionSpacing=_intersectionSpacing - In the implementation block
@property (nonatomic,readonly) PXGBurstStackEffect * burstStackEffect; 
@property (assign,nonatomic,__weak) id<PXAssetSectionLayoutDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long zoomLevel;                                                                      //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) long long targetZoomLevel;                                                                //@synthesize targetZoomLevel=_targetZoomLevel - In the implementation block
@property (nonatomic,retain) PXAssetsSectionLayoutSpec * spec;                                                         //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) long long section;                                                                      //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * dataSource;                                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXPhotosGridAssetDecorationSource * assetDecorationSource;                              //@synthesize assetDecorationSource=_assetDecorationSource - In the implementation block
@property (assign,nonatomic) BOOL itemCaptionsVisible;                                                                 //@synthesize itemCaptionsVisible=_itemCaptionsVisible - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryActionManager * actionManager;                                          //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) PXLoadingStatusManager * loadingStatusManager;                                          //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot; 
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                                              //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (assign,nonatomic) BOOL isSelecting;                                                                         //@synthesize isSelecting=_isSelecting - In the implementation block
@property (assign,nonatomic) BOOL canStartSelecting;                                                                   //@synthesize canStartSelecting=_canStartSelecting - In the implementation block
@property (assign,nonatomic) long long numberOfPrecedingAssets;                                                        //@synthesize numberOfPrecedingAssets=_numberOfPrecedingAssets - In the implementation block
@property (assign,nonatomic) BOOL wantsShadow;                                                                         //@synthesize wantsShadow=_wantsShadow - In the implementation block
@property (assign,nonatomic) BOOL wantsDimmedSelectionStyle;                                                           //@synthesize wantsDimmedSelectionStyle=_wantsDimmedSelectionStyle - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryShowAllActionPerformer * showAllActionPerformer;                          //@synthesize showAllActionPerformer=_showAllActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * selectAllActionPerformer;                               //@synthesize selectAllActionPerformer=_selectAllActionPerformer - In the implementation block
@property (nonatomic,retain) NSString * selectAllButtonTitle;                                                          //@synthesize selectAllButtonTitle=_selectAllButtonTitle - In the implementation block
@property (nonatomic,copy) id addContentActionHandler;                                                                 //@synthesize addContentActionHandler=_addContentActionHandler - In the implementation block
@property (nonatomic,retain) PXGLayoutGuide * headerLayoutGuide;                                                       //@synthesize headerLayoutGuide=_headerLayoutGuide - In the implementation block
@property (assign,nonatomic) BOOL removesHeaderLayoutWhenEmpty;                                                        //@synthesize removesHeaderLayoutWhenEmpty=_removesHeaderLayoutWhenEmpty - In the implementation block
@property (assign,nonatomic) BOOL removesContentLayoutWhenEmpty;                                                       //@synthesize removesContentLayoutWhenEmpty=_removesContentLayoutWhenEmpty - In the implementation block
@property (nonatomic,retain) NSString * axLocalizedBaseLabel;                                                          //@synthesize axLocalizedBaseLabel=_axLocalizedBaseLabel - In the implementation block
@property (assign,nonatomic) BOOL showsSkimmingSlideshow;                                                              //@synthesize showsSkimmingSlideshow=_showsSkimmingSlideshow - In the implementation block
@property (assign,nonatomic) BOOL showsSkimmingInteraction;                                                            //@synthesize showsSkimmingInteraction=_showsSkimmingInteraction - In the implementation block
@property (assign,nonatomic) BOOL isSkimming;                                                                          //@synthesize isSkimming=_isSkimming - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * skimmingIndexPaths;                                                      //@synthesize skimmingIndexPaths=_skimmingIndexPaths - In the implementation block
@property (assign,nonatomic) long long maxSkimmingIndex;                                                               //@synthesize maxSkimmingIndex=_maxSkimmingIndex - In the implementation block
@property (assign,nonatomic) long long currentSkimmingIndex;                                                           //@synthesize currentSkimmingIndex=_currentSkimmingIndex - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection; 
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference; 
@property (nonatomic,readonly) PXGLayout * bodyContentLayout;                                                          //@synthesize bodyContentLayout=_bodyContentLayout - In the implementation block
@property (nonatomic,readonly) id<PXGItemsGeometry> bodyItemsGeometry; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double buildingRowContentHeight; 
@property (nonatomic,readonly) double buildingRowSpacing; 
+(CGSize)estimatedSizeWithReferenceSize:(CGSize)arg1 assetCollection:(id)arg2 numberOfAssets:(long long)arg3 isCurated:(BOOL)arg4 zoomLevel:(long long)arg5 spec:(id)arg6 ;
-(PXGBurstStackEffect *)burstStackEffect;
-(double)buildingRowSpacing;
-(PXPhotosGridAssetDecorationSource *)assetDecorationSource;
-(PXAssetReference *)dropTargetAssetReference;
-(NSSet *)draggedAssetReferences;
-(void)setWantsDimmedSelectionStyle:(BOOL)arg1 ;
-(long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3 ;
-(id)axLocalizedLabel;
-(PXLoadingStatusManager *)loadingStatusManager;
-(PXAssetCollectionReference *)assetCollectionReference;
-(void)setNumberOfPrecedingAssets:(long long)arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2 ;
-(id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2 ;
-(void)_callAddContentActionHandler;
-(PXSelectionSnapshot *)selectionSnapshot;
-(void)setIsSelecting:(BOOL)arg1 ;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 type:(unsigned long long)arg2 ;
-(void)_updateDecorationSource;
-(void)contentSizeDidChange;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(long long)targetZoomLevel;
-(BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3 ;
-(void)setSelectAllActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)numberOfPrecedingAssets;
-(void)_updateLocalSprites;
-(void)setSpec:(PXAssetsSectionLayoutSpec *)arg1 ;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(BOOL)wantsDimmedSelectionStyle;
-(double)buildingRowContentHeight;
-(BOOL)itemCaptionsVisible;
-(long long)zoomLevel;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)setHeaderLayoutGuide:(PXGLayoutGuide *)arg1 ;
-(BOOL)isCurated;
-(BOOL)isSelecting;
-(PXSimpleIndexPath)presentedSectionIndexPath;
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(long long)currentSkimmingIndex;
-(void)setIsSkimming:(BOOL)arg1 ;
-(void)setShowsSkimmingSlideshow:(BOOL)arg1 ;
-(long long)keyItemIndex;
-(double)distanceBetweenTitleTopAndBodyBottom;
-(void)setConfigurator:(PXAssetsSectionConfigurator *)arg1 ;
-(PXAssetsSectionConfigurator *)configurator;
-(void)screenScaleDidChange;
-(void)setZoomLevel:(long long)arg1 ;
-(id)init;
-(void)setAxLocalizedBaseLabel:(NSString *)arg1 ;
-(PXGLayout *)bodyContentLayout;
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1 ;
-(void)visibleRectDidChange;
-(double)intersectionSpacing;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(id<PXAssetSectionLayoutDelegate>)delegate;
-(long long)maxSkimmingIndex;
-(id<PXDisplayAssetFetchResult>)keyAssetsFetchResult;
-(void)setMaxSkimmingIndex:(long long)arg1 ;
-(void)setSelectAllButtonTitle:(NSString *)arg1 ;
-(void)setSkimmingIndexPaths:(PXIndexPathSet *)arg1 ;
-(PXIndexPathSet *)skimmingIndexPaths;
-(PXSimpleIndexPath)sectionIndexPath;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)setBodyContentLayout:(id)arg1 wantsDecoration:(BOOL)arg2 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isSkimming;
-(id)_rowBasedBodyContentLayout;
-(id)addContentActionHandler;
-(long long)section;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1 ;
-(void)setDistanceBetweenTitleTopAndBodyBottom:(double)arg1 ;
-(void)setCurrentSkimmingIndex:(long long)arg1 ;
-(void)_updateShowAllButtonPosition;
-(CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1 ;
-(void)setBodyContainerLayout:(PXGLayout *)arg1 ;
-(id)_assetReferenceClosestVisuallyToAssetReference:(id)arg1 ;
-(void)setDataSource:(id)arg1 section:(long long)arg2 ;
-(void)_updateDistanceProperties;
-(PXCuratedLibraryShowAllActionPerformer *)showAllActionPerformer;
-(void)_invalidateContent;
-(PXAssetsDataSource *)dataSource;
-(BOOL)removesHeaderLayoutWhenEmpty;
-(void)setShowsSkimmingInteraction:(BOOL)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateShowAllButtonPosition;
-(void)setShowAllActionPerformer:(PXCuratedLibraryShowAllActionPerformer *)arg1 ;
-(void)_updateSelectAllButtonPosition;
-(void)setHeaderLayout:(PXGLayout *)arg1 ;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(void)_invalidateConfigurator;
-(PXCuratedLibraryActionManager *)actionManager;
-(BOOL)_shouldAnchorOnAssetCollection;
-(id)shadowForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(PXGLayout *)bodyContainerLayout;
-(PXAssetsSectionLayoutSpec *)spec;
-(id<PXGItemsGeometry>)bodyItemsGeometry;
-(void)setDelegate:(id<PXAssetSectionLayoutDelegate>)arg1 ;
-(void)setTargetZoomLevel:(long long)arg1 ;
-(void)update;
-(BOOL)presentedSkimming;
-(NSString *)description;
-(double)distanceBetweenHeaderTopAndNextBodyTop;
-(PXCuratedLibraryActionPerformer *)selectAllActionPerformer;
-(void)setRemovesContentLayoutWhenEmpty:(BOOL)arg1 ;
-(CGRect)showAllButtonFrame;
-(void)setItemCaptionsVisible:(BOOL)arg1 ;
-(void)setRemovesHeaderLayoutWhenEmpty:(BOOL)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(void)setCanStartSelecting:(BOOL)arg1 ;
-(void)_invalidateSelectAllButton;
-(void)setIntersectionSpacing:(double)arg1 ;
-(id)_displayAssetForBodyItem:(long long)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned)arg2 withAspectRatio:(double)arg3 ;
-(PXGLayoutGuide *)headerLayoutGuide;
-(CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3 ;
-(void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(SCD_Struct_PX15*)arg2 forItemsInRange:(NSRange)arg3 ;
-(void)setWantsShadow:(BOOL)arg1 ;
-(BOOL)showsSkimmingSlideshow;
-(PXCuratedLibraryOverlayButtonConfiguration *)selectAllButtonConfiguration;
-(PXSimpleIndexPath)_dataSourceIndexPathForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)setShowAllButtonFrame:(CGRect)arg1 ;
-(unsigned short)itemsLayout:(id)arg1 effectIdForItem:(long long)arg2 ;
-(id<PXDisplayAssetCollection>)assetCollection;
-(void)_updateContent;
-(void)setDistanceBetweenHeaderTopAndNextBodyTop:(double)arg1 ;
-(BOOL)canStartSelecting;
-(void)_invalidateSelectAllButtonPosition;
-(void)_updateAssetsWithCoveredBottomTrailingCorner;
-(void)_invalidateAssetsWithCoveredBottomTrailingCorner;
-(long long)numberOfAssets;
-(id)initWithSection:(long long)arg1 dataSource:(id)arg2 spec:(id)arg3 ;
-(id)initWithSection:(long long)arg1 dataSource:(id)arg2 actionManager:(id)arg3 loadingStatusManager:(id)arg4 zoomLevel:(long long)arg5 spec:(id)arg6 ;
-(id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned)arg2 ;
-(id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned)arg2 ;
-(id)axSpriteIndexes;
-(NSString *)axLocalizedBaseLabel;
-(BOOL)removesContentLayoutWhenEmpty;
-(BOOL)wantsShadow;
-(PXCuratedLibraryOverlayButtonConfiguration *)showAllButtonConfiguration;
-(double)cornerRadiusForShadowSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)layoutForItemChanges;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(NSString *)selectAllButtonTitle;
-(BOOL)allowsPositionDependentHeaderContentOpacity;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)setAllowsPositionDependentHeaderContentOpacity:(BOOL)arg1 ;
-(void)_updateConfigurator;
-(void)setAddContentActionHandler:(id)arg1 ;
-(BOOL)showsSkimmingInteraction;
-(PXGLayout *)headerLayout;
-(void)_invalidateShowAllButton;
-(void)_updateSectionHeaderProperties;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

