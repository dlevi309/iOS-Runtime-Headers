/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXUIWidget.h>

@protocol PXWidgetDelegate;
@class UICollectionView, PXAssetVariationsDataSourceManager, PXPhotoKitAssetActionManager, PXAssetVariationRenderProvider, PXActionPerformer, _PXAssetVariationsContentView, UILabel, PXPhotosDetailsContext, NSString, PXAssetVariationCollectionViewCell, PXWidgetSpec, PXAssetVariationsDataSource, PXPhotosDetailsLoadCoordinationToken, PHAsset, UIImage, AVAsset, PXAssetEditOperationManager, PXOneUpPresentation, PXTilingController, PXSectionedSelectionManager;

@interface PXPhotosDetailsAssetVariationsWidget : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver, PXUIWidget> {

	UICollectionView* _collectionView;
	PXAssetVariationsDataSourceManager* _dataSourceManager;
	CGSize _contentSize;
	PXPhotoKitAssetActionManager* _actionManager;
	PXAssetVariationRenderProvider* _previewRenderProvider;
	PXActionPerformer* _actionPerformer;
	_PXAssetVariationsContentView* _contentView;
	UILabel* _failureView;
	BOOL _didSetInitialScrollPosition;
	int _placeholderImageRequestID;
	int _existingVideoRequestID;
	struct {
		BOOL views;
		BOOL viewsConfiguration;
		BOOL initialScrollPosition;
		BOOL layout;
		BOOL disclosureTitle;
		BOOL renderProvider;
		BOOL visibleCells;
		BOOL placeholderImage;
		BOOL existingVideo;
		BOOL metrics;
	}  _needsUpdateFlags;
	BOOL _isDismissingForSelection;
	BOOL __contentViewVisible;
	BOOL _hasLoadedContentData;
	PXPhotosDetailsContext* _context;
	NSString* _localizedDisclosureTitle;
	PXAssetVariationCollectionViewCell* _measuringCell;
	id<PXWidgetDelegate> _widgetDelegate;
	PXWidgetSpec* _spec;
	PXAssetVariationsDataSource* __dataSource;
	PXPhotosDetailsLoadCoordinationToken* __loadCoordinationToken;
	PHAsset* __asset;
	UIImage* __placeholderImage;
	AVAsset* __existingVideoAsset;
	UIEdgeInsets _collectionContentInsets;
	UIEdgeInsets __contentInsets;

}

@property (setter=_setLocalizedDisclosureTitle:,nonatomic,retain) NSString * localizedDisclosureTitle;                                     //@synthesize localizedDisclosureTitle=_localizedDisclosureTitle - In the implementation block
@property (assign,setter=_setContentInsets:,nonatomic) UIEdgeInsets _contentInsets;                                                        //@synthesize _contentInsets=__contentInsets - In the implementation block
@property (setter=_setDataSource:,nonatomic,retain) PXAssetVariationsDataSource * _dataSource;                                             //@synthesize _dataSource=__dataSource - In the implementation block
@property (setter=_setLoadCoordinationToken:,nonatomic,retain) PXPhotosDetailsLoadCoordinationToken * _loadCoordinationToken;              //@synthesize _loadCoordinationToken=__loadCoordinationToken - In the implementation block
@property (assign,setter=_setContentViewVisible:,getter=_isContentViewVisible,nonatomic) BOOL _contentViewVisible;                         //@synthesize _contentViewVisible=__contentViewVisible - In the implementation block
@property (nonatomic,readonly) PXAssetEditOperationManager * editOperationManager; 
@property (setter=_setAsset:,nonatomic,retain) PHAsset * _asset;                                                                           //@synthesize _asset=__asset - In the implementation block
@property (setter=_setPlaceholderImage:,nonatomic,retain) UIImage * _placeholderImage;                                                     //@synthesize _placeholderImage=__placeholderImage - In the implementation block
@property (setter=_setExistingVideoAsset:,nonatomic,retain) AVAsset * _existingVideoAsset;                                                 //@synthesize _existingVideoAsset=__existingVideoAsset - In the implementation block
@property (nonatomic,readonly) PXAssetVariationCollectionViewCell * measuringCell;                                                         //@synthesize measuringCell=_measuringCell - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets collectionContentInsets;                                                                       //@synthesize collectionContentInsets=_collectionContentInsets - In the implementation block
@property (assign,setter=_setHasLoadedContentData:,nonatomic) BOOL hasLoadedContentData;                                                   //@synthesize hasLoadedContentData=_hasLoadedContentData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation; 
@property (nonatomic,readonly) BOOL cursorInteractionEnabled; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                                                                   //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec;                                                                                          //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
+(void)preloadResources;
-(void)contentViewDidDisappear;
-(UIImage *)_placeholderImage;
-(void)setContentSize:(CGSize)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(NSString *)localizedTitle;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(PHAsset *)_asset;
-(void)contentViewWillAppear;
-(void)_setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)_updateIfNeeded;
-(PXPhotosDetailsContext *)context;
-(void)_setDataSource:(id)arg1 ;
-(PXWidgetSpec *)spec;
-(PXAssetEditOperationManager *)editOperationManager;
-(PXAssetVariationsDataSource *)_dataSource;
-(void)_invalidateExistingVideo;
-(void)_updateExistingVideoIfNeeded;
-(void)_handleExistingVideoResult:(id)arg1 info:(id)arg2 ;
-(void)_invalidatePlaceholderImage;
-(void)_updatePlaceholderImageIfNeeded;
-(void)_handlePlaceholderImageResult:(id)arg1 info:(id)arg2 ;
-(void)_invalidateRenderProvider;
-(void)_updateRenderProviderIfNeeded;
-(void)_invalidateVisibleCells;
-(void)_updateVisibleCellsIfNeeded;
-(void)_invalidateDisclosureTitle;
-(void)_updateDisclosureTitleIfNeeded;
-(void)_invalidateViews;
-(void)_updateViewsIfNeeded;
-(void)_invalidateviewsConfiguration;
-(void)_updateviewsConfigurationIfNeeded;
-(void)_invalidateInitialScrollPosition;
-(void)_updateInitialScrollPositionIfNeeded;
-(void)_setLocalizedDisclosureTitle:(id)arg1 ;
-(void)_setExistingVideoAsset:(id)arg1 ;
-(void)_setLoadCoordinationToken:(id)arg1 ;
-(void)_setHasLoadedContentData:(BOOL)arg1 ;
-(BOOL)_needsUpdate;
-(void)_contentViewDidLayoutSubviews;
-(id)_newLayoutForSize:(CGSize)arg1 ;
-(CGSize)_itemSizeForViewSize:(CGSize)arg1 ;
-(id)_cellReuseIdentifierForVariationType:(long long)arg1 ;
-(void)_presentStatusAlert;
-(void)_commitEditWithVariationType:(long long)arg1 ;
-(void)_setContentViewVisible:(BOOL)arg1 ;
-(void)_invalidateMetrics;
-(PXAssetVariationCollectionViewCell *)measuringCell;
-(UIEdgeInsets)collectionContentInsets;
-(PXPhotosDetailsLoadCoordinationToken *)_loadCoordinationToken;
-(BOOL)_isContentViewVisible;
-(AVAsset *)_existingVideoAsset;
-(UIEdgeInsets)_contentInsets;
-(void)_setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)_setNeedsUpdate;
-(BOOL)hasLoadedContentData;
-(void)_updateLayoutIfNeeded;
-(NSObject*<PXAnonymousView>)contentView;
-(void)_updateMetricsIfNeeded;
-(void)_setPlaceholderImage:(id)arg1 ;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)userDidSelectDisclosureControl;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(NSString *)localizedDisclosureTitle;
-(void)_invalidateLayout;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
@end

