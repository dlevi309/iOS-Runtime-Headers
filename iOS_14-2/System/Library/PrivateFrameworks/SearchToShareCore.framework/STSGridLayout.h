/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary, UICollectionViewLayoutAttributes, NSMutableDictionary, NSNumber;

@interface STSGridLayout : UICollectionViewLayout {

	NSDictionary* _headerAttributes;
	NSDictionary* _cellAttributes;
	NSDictionary* _tileAttributes;
	UICollectionViewLayoutAttributes* _footerAttributes;
	NSMutableDictionary* _tileSmallFrameCache;
	NSNumber* _hasOnlyLargeItems;
	double _contentSizeMaxY;
	double _headerHeight;
	double _footerHeight;
	double _itemSpacing;

}

@property (assign,nonatomic) double headerHeight;              //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;              //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) double itemSpacing;               //@synthesize itemSpacing=_itemSpacing - In the implementation block
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(double)itemSpacing;
-(id)init;
-(double)footerHeight;
-(void)setFooterHeight:(double)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(double)headerHeight;
-(BOOL)_hasOnlyLargeItems;
-(id)_gridTilesForCurrentDataSource;
-(CGSize)_availableContentSize;
-(unsigned long long)_tilesPerRowAndWidth:(double*)arg1 ;
-(id)_tileSmallFramesForSize:(CGSize)arg1 ;
-(id)_gridLayoutDelegate;
-(void)_redistributeLastRowItemsInTiles:(id)arg1 withTilesPerRow:(unsigned long long)arg2 ;
-(CGRect)_gridFrameForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2 inSize:(CGSize)arg3 ;
-(long long)maximumCellsPerRow;
@end

