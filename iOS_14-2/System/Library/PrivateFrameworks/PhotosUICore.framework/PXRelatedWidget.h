/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXRelatedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXRelatedTilingLayoutDelegate.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXWidgetDelegate, PXWidgetUnlockDelegate;
@class PXPhotosDetailsContext, PXRelatedDataSourceManager, PXRelatedSpecManager, PXRelatedTilingLayout, PXBasicTileAnimator, PXTilingController, PXRelatedDataSource, NSDictionary, PXSectionedObjectReference, NSString, PXWidgetSpec, PXSectionedSelectionManager;

@interface PXRelatedWidget : NSObject <PXRelatedDataSourceManagerObserver, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate, PXRelatedTilingLayoutDelegate, PXTileSource, PXChangeObserver, PXWidget> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	struct {
		BOOL dataSourceManager;
		BOOL layout;
		BOOL availableNumberOfRows;
		BOOL maximumNumberOfRowsToDisplay;
		BOOL canExpand;
		BOOL hasLoadedContentData;
		BOOL prefetchedDataSources;
	}  _needsUpdateFlags;
	BOOL __shouldLoadContentData;
	BOOL __expanded;
	BOOL __canExpand;
	BOOL _hasLoadedContentData;
	id<PXWidgetDelegate> _widgetDelegate;
	id<PXWidgetUnlockDelegate> _widgetUnlockDelegate;
	PXPhotosDetailsContext* _context;
	PXRelatedDataSourceManager* __dataSourceManager;
	PXRelatedSpecManager* __specManager;
	PXRelatedTilingLayout* __layout;
	PXBasicTileAnimator* __tileAnimator;
	PXTilingController* __tilingController;
	long long __availableNumberOfRows;
	long long __maximumNumberOfRowsToDisplay;
	PXRelatedDataSource* __anchorDataSource;
	NSDictionary* __prefetchedDataSourceByRelatedEntry;
	PXSectionedObjectReference* _highlightedObjectReference;
	PXSectionedObjectReference* _focusedObjectReference;
	CGPoint __anchorOffset;
	PXSimpleIndexPath __anchorIndexPath;

}

@property (nonatomic,readonly) PXRelatedDataSourceManager * _dataSourceManager;                                                              //@synthesize _dataSourceManager=__dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXRelatedSpecManager * _specManager;                                                                          //@synthesize _specManager=__specManager - In the implementation block
@property (nonatomic,readonly) PXRelatedTilingLayout * _layout;                                                                              //@synthesize _layout=__layout - In the implementation block
@property (nonatomic,readonly) PXBasicTileAnimator * _tileAnimator;                                                                          //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXTilingController * _tilingController;                                                                       //@synthesize _tilingController=__tilingController - In the implementation block
@property (assign,setter=_setShouldLoadContentData:,nonatomic) BOOL _shouldLoadContentData;                                                  //@synthesize _shouldLoadContentData=__shouldLoadContentData - In the implementation block
@property (assign,setter=_setAvailableNumberOfRows:,nonatomic) long long _availableNumberOfRows;                                             //@synthesize _availableNumberOfRows=__availableNumberOfRows - In the implementation block
@property (assign,setter=_setMaximumNumberOfRowsToDisplay:,nonatomic) long long _maximumNumberOfRowsToDisplay;                               //@synthesize _maximumNumberOfRowsToDisplay=__maximumNumberOfRowsToDisplay - In the implementation block
@property (assign,setter=_setExpanded:,getter=_isExpanded,nonatomic) BOOL _expanded;                                                         //@synthesize _expanded=__expanded - In the implementation block
@property (assign,setter=_setCanExpand:,nonatomic) BOOL _canExpand;                                                                          //@synthesize _canExpand=__canExpand - In the implementation block
@property (setter=_setAnchorDataSource:,nonatomic,retain) PXRelatedDataSource * _anchorDataSource;                                           //@synthesize _anchorDataSource=__anchorDataSource - In the implementation block
@property (assign,setter=_setAnchorIndexPath:,nonatomic) PXSimpleIndexPath _anchorIndexPath;                                                 //@synthesize _anchorIndexPath=__anchorIndexPath - In the implementation block
@property (assign,setter=_setAnchorOffset:,nonatomic) CGPoint _anchorOffset;                                                                 //@synthesize _anchorOffset=__anchorOffset - In the implementation block
@property (assign,setter=_setHasLoadedContentData:,nonatomic) BOOL hasLoadedContentData;                                                     //@synthesize hasLoadedContentData=_hasLoadedContentData - In the implementation block
@property (setter=_setPrefetchedDataSourceByRelatedEntry:,nonatomic,retain) NSDictionary * _prefetchedDataSourceByRelatedEntry;              //@synthesize _prefetchedDataSourceByRelatedEntry=__prefetchedDataSourceByRelatedEntry - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * highlightedObjectReference;                                                        //@synthesize highlightedObjectReference=_highlightedObjectReference - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * focusedObjectReference;                                                            //@synthesize focusedObjectReference=_focusedObjectReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                                                                     //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;                                                         //@synthesize widgetUnlockDelegate=_widgetUnlockDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec; 
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
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
-(PXRelatedTilingLayout *)_layout;
-(BOOL)_isExpanded;
-(NSString *)localizedTitle;
-(id)init;
-(void)_updateIfNeeded;
-(PXPhotosDetailsContext *)context;
-(id)createTileAnimator;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(PXRelatedDataSourceManager *)_dataSourceManager;
-(PXBasicTileAnimator *)_tileAnimator;
-(BOOL)_canExpand;
-(BOOL)relatedTilingLayout:(id)arg1 isPlaceholderEntryAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)relatedTilingLayout:(id)arg1 titleFontNameForEntryAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGRect)relatedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3 ;
-(id)relatedEntryForTileIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(PXTileIdentifier)identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2 layout:(id)arg3 ;
-(PXTileIdentifier)identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2 ;
-(id)relatedEntryAtPoint:(CGPoint)arg1 inCoordinateSpaceWithIdentifier:(void*)arg2 ;
-(id)entryObjectReferenceAtPoint:(CGPoint)arg1 inCoordinateSpaceWithIdentifier:(void*)arg2 ;
-(id)allRelatedEntries;
-(id)photosDataSourceForRelatedEntry:(id)arg1 ;
-(id)relatedEntryForPhotosDataSource:(id)arg1 ;
-(void)setHighlightedObjectReference:(PXSectionedObjectReference *)arg1 ;
-(void)setFocusedObjectReference:(PXSectionedObjectReference *)arg1 ;
-(CGRect)rectOfInterestForRelatedEntry:(id)arg1 inCoordinateSpaceWithIdentifier:(void*)arg2 ;
-(void)enumerateTilesForRelatedRelatedEntry:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setCanExpand:(BOOL)arg1 ;
-(void)_setAvailableNumberOfRows:(long long)arg1 ;
-(void)_setMaximumNumberOfRowsToDisplay:(long long)arg1 ;
-(void)_saveAnchoring;
-(CGPoint)_anchorPointForLayoutContentBounds:(CGRect)arg1 ;
-(id)_createPhotosDataSourceForRelatedEntry:(id)arg1 ;
-(void)_loadContentDataIfNeeded;
-(void)_invalidateDataSourceManager;
-(void)_updateDataSourceManagerIfNeeded;
-(void)_invalidateAvailableNumberOfRows;
-(void)_updateAvailableNumberOfRowsIfNeeded;
-(void)_invalidateMaximumNumberOfRowsToDisplay;
-(void)_updateMaximumNumberOfRowsToDisplayIfNeeded;
-(void)_invalidateCanExpand;
-(void)_updateCanExpandIfNeeded;
-(void)_invalidatePrefetchedDataSources;
-(void)_updatePrefetchedDataSources;
-(void)_invalidateHasLoadedContentData;
-(void)_updateHasLoadedContentDataIfNeeded;
-(BOOL)_shouldLoadContentData;
-(void)_setShouldLoadContentData:(BOOL)arg1 ;
-(long long)_availableNumberOfRows;
-(long long)_maximumNumberOfRowsToDisplay;
-(PXRelatedDataSource *)_anchorDataSource;
-(void)_setAnchorDataSource:(id)arg1 ;
-(PXSimpleIndexPath)_anchorIndexPath;
-(void)_setAnchorIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSDictionary *)_prefetchedDataSourceByRelatedEntry;
-(void)_setPrefetchedDataSourceByRelatedEntry:(id)arg1 ;
-(PXSectionedObjectReference *)highlightedObjectReference;
-(PXSectionedObjectReference *)focusedObjectReference;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(void)_setHasLoadedContentData:(BOOL)arg1 ;
-(BOOL)_needsUpdate;
-(void)tilingController:(id)arg1 prepareForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(void)_loadTilingController;
-(PXTilingController *)_tilingController;
-(void)_setAnchorOffset:(CGPoint)arg1 ;
-(PXRelatedSpecManager *)_specManager;
-(id)extendedTraitCollection;
-(void)installGestureRecognizers;
-(void)_setExpanded:(BOOL)arg1 ;
-(void)_setNeedsUpdate;
-(BOOL)hasLoadedContentData;
-(void)_updateLayoutIfNeeded;
-(CGPoint)_anchorOffset;
-(void)loadContentData;
-(void)unloadContentData;
-(void)userDidSelectDisclosureControl;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(id<PXWidgetUnlockDelegate>)widgetUnlockDelegate;
-(void)setWidgetUnlockDelegate:(id<PXWidgetUnlockDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(PXTilingController *)contentTilingController;
-(NSString *)localizedDisclosureTitle;
-(void)_invalidateLayout;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
@end
