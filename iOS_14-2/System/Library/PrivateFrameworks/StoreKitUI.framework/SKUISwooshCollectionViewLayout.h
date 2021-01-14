/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)snapsToItemBoundaries;
-(void)setSnapsToItemBoundaries:(BOOL)arg1 ;
-(BOOL)snapsToItemCenters;
-(void)setSnapsToItemCenters:(BOOL)arg1 ;
@end

