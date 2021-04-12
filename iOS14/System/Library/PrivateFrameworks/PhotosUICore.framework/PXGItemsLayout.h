/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@protocol PXGItemsLayoutDelegate, PXGLayoutContentSource, PXGItemsGeometry;
@class PXGLayout;

@interface PXGItemsLayout : PXGLayout {

	BOOL _loadedItemsNeedUpdate;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned long long _delegateRespondsTo;
	long long _applyingItemChangesCount;
	long long* _currentStylableItems;
	long long* _pendingStylableItems;
	BOOL* _pendingAnimations;
	long long* _styleableAnimations;
	double* _stylablePaddings;
	BOOL _accessoryItemsNeedUpdate;
	PXGLayout* _accessoryItemsContainerLayout;
	BOOL _lazy;
	id<PXGItemsLayoutDelegate> _delegate;
	long long _numberOfAccessoryItems;
	id<PXGLayoutContentSource> _accessoryItemContentSource;
	id _dropTargetObjectReference;
	unsigned long long _dropTargetStyle;
	id<PXGItemsGeometry> _itemsGeometry;
	long long __numberOfItems;
	NSRange _loadedItems;

}

@property (assign,nonatomic) NSRange loadedItems;                                                       //@synthesize loadedItems=_loadedItems - In the implementation block
@property (assign,nonatomic) long long _numberOfItems;                                                  //@synthesize _numberOfItems=__numberOfItems - In the implementation block
@property (assign,getter=isLazy,nonatomic) BOOL lazy;                                                   //@synthesize lazy=_lazy - In the implementation block
@property (assign,nonatomic,__weak) id<PXGItemsLayoutDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long numberOfItems; 
@property (assign,nonatomic) long long numberOfAccessoryItems;                                          //@synthesize numberOfAccessoryItems=_numberOfAccessoryItems - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutContentSource> accessoryItemContentSource;              //@synthesize accessoryItemContentSource=_accessoryItemContentSource - In the implementation block
@property (nonatomic,readonly) BOOL isApplyingItemChanges; 
@property (nonatomic,retain) id dropTargetObjectReference;                                              //@synthesize dropTargetObjectReference=_dropTargetObjectReference - In the implementation block
@property (assign,nonatomic) unsigned long long dropTargetStyle;                                        //@synthesize dropTargetStyle=_dropTargetStyle - In the implementation block
@property (nonatomic,readonly) id<PXGItemsGeometry> itemsGeometry;                                      //@synthesize itemsGeometry=_itemsGeometry - In the implementation block
-(id)itemsForSpriteIndexes:(id)arg1 ;
-(id)loadedItemsForItems:(id)arg1 ;
-(void)setLoadedItems:(NSRange)arg1 ;
-(void)setDropTargetStyle:(unsigned long long)arg1 ;
-(BOOL)isApplyingItemChanges;
-(long long)numberOfAccessoryItems;
-(void)_invalidateAccessoryItems;
-(id)init;
-(CGSize)sizeForItem:(long long)arg1 ;
-(void)updateLoadedItemsIfNeeded;
-(long long)numberOfItems;
-(id<PXGItemsLayoutDelegate>)delegate;
-(void)setAccessoryItemContentSource:(id<PXGLayoutContentSource>)arg1 ;
-(void)_updateStylableType:(long long)arg1 ;
-(void)setAnimationParameters:(SCD_Struct_PX58)arg1 forStylableType:(long long)arg2 ;
-(NSRange)loadedItems;
-(long long)itemForObjectReference:(id)arg1 options:(unsigned long long)arg2 ;
-(id<PXGItemsGeometry>)itemsGeometry;
-(id)spriteIndexesForItems:(id)arg1 ;
-(void)setLazy:(BOOL)arg1 ;
-(void)setNumberOfAccessoryItems:(long long)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(unsigned long long)dropTargetStyle;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(long long)accessoryItemForSpriteIndex:(unsigned)arg1 ;
-(void)beginApplyingItemChanges;
-(void)_handleFocusChangeWithUserInfo:(id)arg1 ;
-(BOOL)spriteIndexIsItem:(unsigned)arg1 ;
-(unsigned)spriteIndexForItem:(long long)arg1 ;
-(void)endApplyingItemChanges;
-(void)setDelegate:(id<PXGItemsLayoutDelegate>)arg1 ;
-(void)update;
-(void)_updateHoveredItemIfNeeded;
-(id)description;
-(long long)itemForSpriteIndex:(unsigned)arg1 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(void)_updateFocusedItemIfNeeded;
-(id)itemsLayout;
-(id)objectReferenceForItem:(long long)arg1 ;
-(void)loadedItemsDidChange;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)dropTargetObjectReferenceDidChange;
-(NSRange)itemsToLoad;
-(void)numberOfAccessoryItemsDidChange;
-(BOOL)spriteIndexIsAccessoryItem:(unsigned)arg1 ;
-(void)_updateAccessoryItems;
-(void)invalidateStylableType:(long long)arg1 ;
-(void)updateAccessoryItemsIfNeeded;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(/*^block*/id)arg3 ;
-(BOOL)delegateRespondsTo:(unsigned long long)arg1 ;
-(void)_handleSelectionChangeWithUserInfo:(id)arg1 ;
-(void)_updateLoadedItems;
-(id)axVisibleSpriteIndexes;
-(id<PXGLayoutContentSource>)accessoryItemContentSource;
-(unsigned)spriteIndexForAccessoryItem:(long long)arg1 ;
-(BOOL)shouldInvalidateDecorationForModifiedSprites;
-(id)axSpriteIndexes;
-(BOOL)isLazy;
-(void)setItem:(long long)arg1 forStylableType:(long long)arg2 animated:(BOOL)arg3 ;
-(long long)_numberOfItems;
-(id)layoutForItemChanges;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 ;
-(void)invalidateLoadedItems;
-(id)dropTargetObjectReference;
-(long long)itemForObjectReference:(id)arg1 ;
-(void)modifyAccessoryItemSpritesInRange:(PXGSpriteIndexRange)arg1 state:(/*^block*/id)arg2 ;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)accessoryItemsDidChange;
-(void)set_numberOfItems:(long long)arg1 ;
-(void)dealloc;
-(void)setDropTargetObjectReference:(id)arg1 ;
@end

