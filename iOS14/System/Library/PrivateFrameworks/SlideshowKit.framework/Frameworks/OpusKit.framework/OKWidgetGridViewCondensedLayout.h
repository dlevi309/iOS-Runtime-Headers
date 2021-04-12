/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(unsigned long long)numberOfRows;
-(id)indexPathsForItemsInRect:(CGRect)arg1 ;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(void)dealloc;
-(void)setSnappingEnabled:(BOOL)arg1 ;
-(void)setSpacingRatio:(float)arg1 ;
-(float)spacingRatio;
-(BOOL)snappingEnabled;
@end

