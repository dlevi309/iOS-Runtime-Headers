/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _TVCarouselCollectionViewLayout : UICollectionViewFlowLayout {

	NSDictionary* _layoutAttributesByIndexPath;

}
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(long long)_expectedNumberOfCells;
@end

