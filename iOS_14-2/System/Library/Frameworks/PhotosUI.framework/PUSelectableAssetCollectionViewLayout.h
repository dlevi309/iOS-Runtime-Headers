/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSSet;

@interface PUSelectableAssetCollectionViewLayout : PUHorizontalCollectionViewLayout {

	NSSet* _floatingCellIndexPaths;
	UIOffset _sharingBadgeOffset;
	CGSize _layoutReferenceSize;

}

@property (assign,nonatomic) UIOffset sharingBadgeOffset;                                                    //@synthesize sharingBadgeOffset=_sharingBadgeOffset - In the implementation block
@property (nonatomic,retain) NSSet * floatingCellIndexPaths;                                                 //@synthesize floatingCellIndexPaths=_floatingCellIndexPaths - In the implementation block
@property (assign,nonatomic) CGSize layoutReferenceSize;                                                     //@synthesize layoutReferenceSize=_layoutReferenceSize - In the implementation block
@property (assign,nonatomic,__weak) id<PUSelectableAssetCollectionViewLayoutDelegate> delegate; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setLayoutReferenceSize:(CGSize)arg1 ;
-(UIOffset)sharingBadgeOffset;
-(CGRect)_floatingSelectionBadgeFrameForItemFrame:(CGRect)arg1 visibleItemFrame:(CGRect)arg2 atIndexPath:(id)arg3 ;
-(id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1 ;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setSharingBadgeOffset:(UIOffset)arg1 ;
-(CGSize)layoutReferenceSize;
-(CGRect)collectionViewBounds;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(void)setFloatingCellIndexPaths:(NSSet *)arg1 ;
-(NSSet *)floatingCellIndexPaths;
@end

