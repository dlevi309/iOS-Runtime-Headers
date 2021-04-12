/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@protocol PXGShadowSource, PXGLayoutContentSource, PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGHighlightDecorationSource, PXGDragDecorationSource, PXGDebugDecorationSource;
@class NSMutableIndexSet, PXGLayout;

@interface PXGDecoratingLayout : PXGLayout {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingDecoratedLayout;
	NSMutableIndexSet* _invalidatedDecoratedSpriteIndexes;
	BOOL _wantsCaptionDecorations;
	long long _selectionDecorationStyle;
	unsigned long long _selectionDecorationOptions;
	id<PXGShadowSource> _shadowSource;
	BOOL _isChangingDecoratedLayout;
	BOOL _enabled;
	unsigned _numberOfDecoratingSpritesPerDecoratedSprite;
	PXGLayout* _decoratedLayout;
	id<PXGLayoutContentSource> _decorationSource;
	id<PXGAssetBadgeDecorationSource> _assetBadgeDecorationSource;
	id<PXGAssetBadgeDecorationSource> _assetProgressDecorationSource;
	id<PXGCaptionDecorationSource> _captionDecorationSource;
	id<PXGSelectionDecorationSource> _selectionDecorationSource;
	id<PXGHighlightDecorationSource> _highlightDecorationSource;
	id<PXGDragDecorationSource> _dragDecorationSource;
	id<PXGDebugDecorationSource> _debugDecorationSource;

}

@property (nonatomic,readonly) unsigned numberOfDecoratingSpritesPerDecoratedSprite;                                //@synthesize numberOfDecoratingSpritesPerDecoratedSprite=_numberOfDecoratingSpritesPerDecoratedSprite - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGAssetBadgeDecorationSource> assetBadgeDecorationSource;                 //@synthesize assetBadgeDecorationSource=_assetBadgeDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGAssetBadgeDecorationSource> assetProgressDecorationSource;              //@synthesize assetProgressDecorationSource=_assetProgressDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGCaptionDecorationSource> captionDecorationSource;                       //@synthesize captionDecorationSource=_captionDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGSelectionDecorationSource> selectionDecorationSource;                   //@synthesize selectionDecorationSource=_selectionDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGHighlightDecorationSource> highlightDecorationSource;                   //@synthesize highlightDecorationSource=_highlightDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGDragDecorationSource> dragDecorationSource;                             //@synthesize dragDecorationSource=_dragDecorationSource - In the implementation block
@property (nonatomic,__weak,readonly) id<PXGDebugDecorationSource> debugDecorationSource;                           //@synthesize debugDecorationSource=_debugDecorationSource - In the implementation block
@property (nonatomic,readonly) unsigned debugDecorationIndex; 
@property (nonatomic,retain) PXGLayout * decoratedLayout;                                                           //@synthesize decoratedLayout=_decoratedLayout - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutContentSource> decorationSource;                                    //@synthesize decorationSource=_decorationSource - In the implementation block
-(BOOL)enabled;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1 ;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)setDecorationSource:(id<PXGLayoutContentSource>)arg1 ;
-(BOOL)canHandleVisibleRectRejection;
-(void)viewEnvironmentDidChange;
-(void)alphaDidChange;
-(void)screenScaleDidChange;
-(void)_updateDecorationSprites;
-(id)init;
-(id)initWithDecoratedLayout:(id)arg1 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(PXGLayout *)decoratedLayout;
-(void)visibleRectDidChange;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)userInterfaceDirectionDidChange;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)_updateDecoratedLayout;
-(unsigned)debugDecorationIndex;
-(CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(CGRect)arg2 ;
-(void)setLastBaseline:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(double)lastBaseline;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(id<PXGDebugDecorationSource>)debugDecorationSource;
-(BOOL)isSpriteIndex:(unsigned)arg1 decoratingSpriteWithIndex:(out unsigned*)arg2 ;
-(id<PXGDragDecorationSource>)dragDecorationSource;
-(void)setContentSource:(id)arg1 ;
-(void)setDecoratedLayout:(PXGLayout *)arg1 ;
-(void)_invalidateDecorationForSpriteRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(void)update;
-(id)description;
-(BOOL)spritesAreInSyncWithDecoratedLayout;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(id<PXGSelectionDecorationSource>)selectionDecorationSource;
-(id)itemsLayout;
-(void)referenceSizeDidChange;
-(id<PXGCaptionDecorationSource>)captionDecorationSource;
-(void)safeAreaInsetsDidChange;
-(void)_applyDecoratedLayoutChangeDetails:(id)arg1 ;
-(id<PXGAssetBadgeDecorationSource>)assetBadgeDecorationSource;
-(void)_updateReloadSprites;
-(void)insertSublayout:(id)arg1 atIndex:(long long)arg2 ;
-(id)axSpriteIndexes;
-(unsigned)numberOfDecoratingSpritesPerDecoratedSprite;
-(id)layoutForItemChanges;
-(void)_updateDecorationSources;
-(void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2 fromDescendentSublayout:(id)arg3 ;
-(PXGDecorationSpriteInfo)decorationSpriteInfoForDecoratedSpriteIndex:(unsigned)arg1 decorationIndex:(unsigned)arg2 assetBadgeInfo:(PXAssetBadgeInfo)arg3 isItemSelected:(BOOL)arg4 isItemHighlighted:(BOOL)arg5 isItemDragged:(BOOL)arg6 ;
-(unsigned)spriteIndexForDecorationIndex:(unsigned)arg1 decoratingSpriteIndex:(unsigned)arg2 ;
-(id<PXGLayoutContentSource>)decorationSource;
-(id<PXGAssetBadgeDecorationSource>)assetProgressDecorationSource;
-(id<PXGHighlightDecorationSource>)highlightDecorationSource;
@end

