/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@interface MenstrualCyclesAppPlugin.CycleTimelineCollectionViewLayout : UICollectionViewLayout {

	 config;
	 itemHeight;
	 contentSize;
	 zoomAreaOffset;
	 zoomArea;
	 computedAttributes;

}

@property (readonly,nonatomic) BOOL flipsHorizontallyInOppositeLayoutDirection; 
@property (readonly,nonatomic) CGSize collectionViewContentSize; 
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

