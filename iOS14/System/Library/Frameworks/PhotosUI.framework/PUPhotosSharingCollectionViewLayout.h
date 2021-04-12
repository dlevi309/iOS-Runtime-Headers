/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUHorizontalTiledCollectionViewLayout.h>

@class NSMutableDictionary, NSIndexPath;

@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout {

	NSMutableDictionary* _cachedItemSublayouts;
	unsigned long long _sharingBadgesCorner;
	NSIndexPath* _zoomingCellIndexPath;
	UIOffset _sharingBadgesOffset;

}

@property (assign,nonatomic) UIOffset sharingBadgesOffset;                                                 //@synthesize sharingBadgesOffset=_sharingBadgesOffset - In the implementation block
@property (assign,nonatomic) unsigned long long sharingBadgesCorner;                                       //@synthesize sharingBadgesCorner=_sharingBadgesCorner - In the implementation block
@property (nonatomic,retain) NSIndexPath * zoomingCellIndexPath;                                           //@synthesize zoomingCellIndexPath=_zoomingCellIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotosSharingCollectionViewLayoutDelegate> delegate; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setZoomingCellIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)zoomingCellIndexPath;
-(void)invalidateCachedLayout;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(void)_didFinishLayoutTransitionAnimations:(BOOL)arg1 ;
-(CGRect)_floatingBadgeContainerFrameForBadgeContainerFrame:(CGRect)arg1 itemFrame:(CGRect)arg2 visibleItemFrame:(CGRect)arg3 ;
-(UIOffset)_floatingBadgeOffsetForBadgesContainerFrame:(CGRect)arg1 ItemFrame:(CGRect)arg2 visibleItemFrame:(CGRect)arg3 ;
-(id)_sublayoutForItemLayoutAttributes:(id)arg1 ;
-(UIOffset)sharingBadgesOffset;
-(void)setSharingBadgesOffset:(UIOffset)arg1 ;
-(unsigned long long)sharingBadgesCorner;
-(void)setSharingBadgesCorner:(unsigned long long)arg1 ;
@end

