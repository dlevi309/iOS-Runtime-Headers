/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout {

	BOOL _snapsToItemBoundaries;
	BOOL _snapsToItemCenters;

}

@property (assign,nonatomic) BOOL snapsToItemBoundaries;              //@synthesize snapsToItemBoundaries=_snapsToItemBoundaries - In the implementation block
@property (assign,nonatomic) BOOL snapsToItemCenters;                 //@synthesize snapsToItemCenters=_snapsToItemCenters - In the implementation block
@property (assign,nonatomic) double leadingInset; 
@property (assign,nonatomic) double trailingInset; 
+(double)snapToBoundariesDecelerationRate;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)init;
-(double)leadingInset;
-(double)trailingInset;
-(void)setLeadingInset:(double)arg1 ;
-(void)setTrailingInset:(double)arg1 ;
-(BOOL)snapsToItemBoundaries;
-(void)setSnapsToItemBoundaries:(BOOL)arg1 ;
-(BOOL)snapsToItemCenters;
-(void)setSnapsToItemCenters:(BOOL)arg1 ;
@end

