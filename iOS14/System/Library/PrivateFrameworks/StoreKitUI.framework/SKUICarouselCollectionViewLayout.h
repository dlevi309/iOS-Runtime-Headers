/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)prepareLayout;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(void)_panGestureRecognized:(id)arg1 ;
-(NSIndexPath *)startScrollingIndexPath;
-(CGPoint)_collectionViewBoundsCenter;
-(void)setStartScrollingIndexPath:(NSIndexPath *)arg1 ;
@end

