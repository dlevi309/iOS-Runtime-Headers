/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {

	UICollectionView* _collectionView;
	long long _numberOfRows;
	long long _numberOfColumns;
	CGSize _headerSize;
	double _horizontalPadding;
	double _verticalPadding;
	BOOL _backfills;

}

@property (assign,nonatomic) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double verticalPadding;                //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) BOOL backfills;                        //@synthesize backfills=_backfills - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(double)verticalPadding;
-(id)init;
-(double)horizontalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(BOOL)backfills;
-(void)setBackfills:(BOOL)arg1 ;
@end

