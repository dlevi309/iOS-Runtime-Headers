/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class UIColor;

@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout {

	UIColor* _backgroundColor;
	BOOL _snapsToItemBoundaries;
	BOOL _snapsToItemCenters;

}

@property (nonatomic,copy) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL snapsToItemBoundaries;              //@synthesize snapsToItemBoundaries=_snapsToItemBoundaries - In the implementation block
@property (assign,nonatomic) BOOL snapsToItemCenters;                 //@synthesize snapsToItemCenters=_snapsToItemCenters - In the implementation block
+(Class)layoutAttributesClass;
+(float)snapToBoundariesDecelerationRate;
-(id)init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setSnapsToItemBoundaries:(BOOL)arg1 ;
-(BOOL)snapsToItemBoundaries;
-(BOOL)snapsToItemCenters;
-(void)setSnapsToItemCenters:(BOOL)arg1 ;
@end

