/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <VideosUI/VideosExtrasCarouselCollectionViewLayout.h>

@protocol VideosExtrasCarouselCollectionViewLayout
@required
-(double)itemWidth;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2;
-(unsigned long long)indexOfVisibleItem;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1;

@end


@class NSDictionary;

@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout <VideosExtrasCarouselCollectionViewLayout> {

	NSDictionary* _cachedLayoutAttributes;
	long long _indexOfVisibleItemForBoundsChange;
	CGSize _cachedCollectionViewContentSize;

}

@property (nonatomic,retain) NSDictionary * cachedLayoutAttributes;                    //@synthesize cachedLayoutAttributes=_cachedLayoutAttributes - In the implementation block
@property (assign,nonatomic) CGSize cachedCollectionViewContentSize;                   //@synthesize cachedCollectionViewContentSize=_cachedCollectionViewContentSize - In the implementation block
@property (assign,nonatomic) long long indexOfVisibleItemForBoundsChange;              //@synthesize indexOfVisibleItemForBoundsChange=_indexOfVisibleItemForBoundsChange - In the implementation block
-(id)init;
-(double)itemWidth;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(double)_spaceBetweenItems;
-(double)_neighboringItemVisibleWidth;
-(void)setCachedLayoutAttributes:(NSDictionary *)arg1 ;
-(void)setCachedCollectionViewContentSize:(CGSize)arg1 ;
-(CGSize)cachedCollectionViewContentSize;
-(NSDictionary *)cachedLayoutAttributes;
-(long long)_indexOfVisibleItemForContentOffset:(CGPoint)arg1 collectionViewBounds:(CGRect)arg2 ;
-(CGPoint)_contentOffsetForItemAtIndex:(long long)arg1 collectionViewBounds:(CGRect)arg2 ;
-(void)setIndexOfVisibleItemForBoundsChange:(long long)arg1 ;
-(long long)indexOfVisibleItemForBoundsChange;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)indexOfVisibleItem;
-(double)_spaceBetweenItemsForCollectionViewBounds:(CGRect)arg1 ;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 ;
@end

