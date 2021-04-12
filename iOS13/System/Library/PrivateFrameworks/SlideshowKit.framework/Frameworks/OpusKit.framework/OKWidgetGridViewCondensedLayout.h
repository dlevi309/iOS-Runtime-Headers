/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableArray;

@interface OKWidgetGridViewCondensedLayout : UICollectionViewLayout {

	float _spacingRatio;
	unsigned long long _numberOfRows;
	BOOL _snappingEnabled;
	NSMutableArray* _attributes;
	double _largestWidth;
	CGSize _contentSize;
	CGRect _oldBounds;

}

@property (assign) float spacingRatio;                           //@synthesize spacingRatio=_spacingRatio - In the implementation block
@property (assign) unsigned long long numberOfRows;              //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign) BOOL snappingEnabled;                         //@synthesize snappingEnabled=_snappingEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRows;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 ;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(void)setSpacingRatio:(float)arg1 ;
-(float)spacingRatio;
-(BOOL)snappingEnabled;
-(void)setSnappingEnabled:(BOOL)arg1 ;
@end

