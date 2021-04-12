/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _TVCarouselCollectionViewLayout : UICollectionViewFlowLayout {

	NSDictionary* _layoutAttributesByIndexPath;

}
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(long long)_expectedNumberOfCells;
@end

