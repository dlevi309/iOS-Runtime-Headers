/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout {

	NSIndexPath* _startScrollingIndexPath;

}

@property (nonatomic,retain) NSIndexPath * startScrollingIndexPath;              //@synthesize startScrollingIndexPath=_startScrollingIndexPath - In the implementation block
+(Class)layoutAttributesClass;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)_panGestureRecognized:(id)arg1 ;
-(NSIndexPath *)startScrollingIndexPath;
-(CGPoint)_collectionViewBoundsCenter;
-(void)setStartScrollingIndexPath:(NSIndexPath *)arg1 ;
@end

