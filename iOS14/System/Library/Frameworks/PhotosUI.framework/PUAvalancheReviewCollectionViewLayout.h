/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSIndexPath;

@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout {

	NSIndexPath* _zoomingCellIndexPath;
	UIOffset _sharingBadgeOffset;

}

@property (assign,nonatomic) UIOffset sharingBadgeOffset;                                                    //@synthesize sharingBadgeOffset=_sharingBadgeOffset - In the implementation block
@property (nonatomic,retain) NSIndexPath * zoomingCellIndexPath;                                             //@synthesize zoomingCellIndexPath=_zoomingCellIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<PUAvalancheReviewCollectionViewLayoutDelegate> delegate; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setZoomingCellIndexPath:(NSIndexPath *)arg1 ;
-(UIOffset)sharingBadgeOffset;
-(NSIndexPath *)zoomingCellIndexPath;
-(CGRect)_floatingSelectionBadgeFrameForItemFrame:(CGRect)arg1 visibleItemFrame:(CGRect)arg2 atIndexPath:(id)arg3 ;
-(id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1 ;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setSharingBadgeOffset:(UIOffset)arg1 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)_supportsAdvancedTransitionAnimations;
@end

