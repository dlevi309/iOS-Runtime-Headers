/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGShadowSource.h>
#import <libobjc.A.dylib/PXLoadingStatusManagerObserver.h>
#import <libobjc.A.dylib/PXGAssetBadgeDecorationSource.h>
#import <libobjc.A.dylib/PXGCaptionDecorationSource.h>
#import <libobjc.A.dylib/PXGSelectionDecorationSource.h>
#import <libobjc.A.dylib/PXGDragDecorationSource.h>
#import <libobjc.A.dylib/PXGDebugDecorationSource.h>
#import <libobjc.A.dylib/PXGDisplayAssetRequestObserver.h>

@class NSIndexSet, NSMutableSet, PXAssetBadgeManager, PXGLayout, PXAssetsDataSource, PXSelectionSnapshot, NSSet, PXLoadingStatusManager, PXGGridLayout, PXGItemsLayout, NSString;

@interface PXPhotosGridAssetDecorationSource : NSObject <PXGShadowSource, PXLoadingStatusManagerObserver, PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGDragDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetRequestObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	NSIndexSet* _draggedItems;
	NSMutableSet* _assetUUIDsInCloud;
	PXAssetBadgeManager* _badgeManager;
	BOOL _forceBadgesOnAllAssets;
	BOOL _isInSelectMode;
	BOOL _durationAlwaysHidden;
	BOOL _hidesInteractiveFavoriteBadges;
	BOOL _wantsDimmedSelectionStyle;
	BOOL _enableDebugDecoration;
	BOOL _selectionLimitReached;
	PXGLayout* _decoratedLayout;
	PXAssetsDataSource* _dataSource;
	long long _section;
	PXSelectionSnapshot* _selectionSnapshot;
	NSSet* _draggedAssetReferences;
	PXLoadingStatusManager* _loadingStatusManager;
	unsigned long long _forbiddenBadges;
	long long _interItemSpacingThresholdForExteriorFocusRingSelection;
	NSIndexSet* _itemsWithCoveredBottomTrailingCorner;
	PXGGridLayout* _decoratedGridLayout;

}

@property (nonatomic,readonly) PXGGridLayout * decoratedGridLayout;                                         //@synthesize decoratedGridLayout=_decoratedGridLayout - In the implementation block
@property (nonatomic,readonly) PXGItemsLayout * decoratedItemsLayout; 
@property (assign,getter=isSelectionLimitReached,nonatomic) BOOL selectionLimitReached;                     //@synthesize selectionLimitReached=_selectionLimitReached - In the implementation block
@property (assign,nonatomic,__weak) PXGLayout * decoratedLayout;                                            //@synthesize decoratedLayout=_decoratedLayout - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * dataSource;                                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) long long section;                                                           //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isInSelectMode;                                                           //@synthesize isInSelectMode=_isInSelectMode - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                                       //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (nonatomic,copy) NSSet * draggedAssetReferences;                                                  //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (nonatomic,retain) PXLoadingStatusManager * loadingStatusManager;                                 //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
@property (assign,nonatomic) unsigned long long forbiddenBadges;                                            //@synthesize forbiddenBadges=_forbiddenBadges - In the implementation block
@property (assign,nonatomic) BOOL durationAlwaysHidden;                                                     //@synthesize durationAlwaysHidden=_durationAlwaysHidden - In the implementation block
@property (assign,nonatomic) BOOL hidesInteractiveFavoriteBadges;                                           //@synthesize hidesInteractiveFavoriteBadges=_hidesInteractiveFavoriteBadges - In the implementation block
@property (assign,nonatomic) BOOL wantsDimmedSelectionStyle;                                                //@synthesize wantsDimmedSelectionStyle=_wantsDimmedSelectionStyle - In the implementation block
@property (assign,nonatomic) long long interItemSpacingThresholdForExteriorFocusRingSelection;              //@synthesize interItemSpacingThresholdForExteriorFocusRingSelection=_interItemSpacingThresholdForExteriorFocusRingSelection - In the implementation block
@property (nonatomic,copy) NSIndexSet * itemsWithCoveredBottomTrailingCorner;                               //@synthesize itemsWithCoveredBottomTrailingCorner=_itemsWithCoveredBottomTrailingCorner - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDecoration;                                                    //@synthesize enableDebugDecoration=_enableDebugDecoration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)draggedAssetReferences;
-(void)setWantsDimmedSelectionStyle:(BOOL)arg1 ;
-(PXLoadingStatusManager *)loadingStatusManager;
-(PXSelectionSnapshot *)selectionSnapshot;
-(void)setLoadingStatusManager:(PXLoadingStatusManager *)arg1 ;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(BOOL)wantsDimmedSelectionStyle;
-(void)setForbiddenBadges:(unsigned long long)arg1 ;
-(unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1 ;
-(void)_invalidateProgressDecoration;
-(BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg1 ;
-(unsigned long long)forbiddenBadges;
-(id)init;
-(BOOL)enableDebugDecoration;
-(PXGLayout *)decoratedLayout;
-(BOOL)wantsCaptionDecorationsInLayout:(id)arg1 ;
-(void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3 ;
-(PXGItemsLayout *)decoratedItemsLayout;
-(BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)arg1 ;
-(void)observeIsInCloud:(BOOL)arg1 forDisplayAsset:(id)arg2 ;
-(long long)section;
-(BOOL)isSelectionLimitReached;
-(void)setDataSource:(id)arg1 section:(long long)arg2 ;
-(PXAssetsDataSource *)dataSource;
-(id)draggingSpriteIndexesInLayout:(id)arg1 ;
-(PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned)arg2 inLayout:(id)arg3 ;
-(void)setInterItemSpacingThresholdForExteriorFocusRingSelection:(long long)arg1 ;
-(BOOL)isInSelectMode;
-(long long)interItemSpacingThresholdForExteriorFocusRingSelection;
-(id)shadowForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)setHidesInteractiveFavoriteBadges:(BOOL)arg1 ;
-(void)setDecoratedLayout:(PXGLayout *)arg1 ;
-(long long)selectionDecorationStyleInLayout:(id)arg1 ;
-(void)update;
-(void)setDurationAlwaysHidden:(BOOL)arg1 ;
-(id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2 ;
-(void)setSelectionLimitReached:(BOOL)arg1 ;
-(PXGGridLayout *)decoratedGridLayout;
-(NSIndexSet *)itemsWithCoveredBottomTrailingCorner;
-(void)setIsInSelectMode:(BOOL)arg1 ;
-(void)setItemsWithCoveredBottomTrailingCorner:(NSIndexSet *)arg1 ;
-(id)loadStatusForAsset:(id)arg1 atSpriteIndex:(unsigned)arg2 inLayout:(id)arg3 ;
-(void)_invalidateDragDecoration;
-(BOOL)hidesInteractiveFavoriteBadges;
-(void)setEnableDebugDecoration:(BOOL)arg1 ;
-(BOOL)durationAlwaysHidden;
-(void)_updateDragDecoration;
-(double)cornerRadiusForShadowSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)selectedSpriteIndexesInLayout:(id)arg1 ;
-(BOOL)wantsDebugDecorationInLayout:(id)arg1 ;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(id)debugDecorationAtSpriteIndex:(unsigned)arg1 asset:(id)arg2 inLayout:(id)arg3 ;
@end

