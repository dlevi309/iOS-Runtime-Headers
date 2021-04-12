/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/AVTCollectionViewLayout.h>

@class AVTEngagementLayout, NSValue;

@interface AVTEngagementListCollectionViewLayout : UICollectionViewLayout <AVTCollectionViewLayout> {

	AVTEngagementLayout* _engagementLayout;
	NSValue* _ignoredProposedContentOffset;
	NSValue* _targetContentOffset;

}

@property (nonatomic,retain) NSValue * targetContentOffset;                         //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (nonatomic,retain) NSValue * ignoredProposedContentOffset;                //@synthesize ignoredProposedContentOffset=_ignoredProposedContentOffset - In the implementation block
@property (nonatomic,readonly) AVTEngagementLayout * engagementLayout;              //@synthesize engagementLayout=_engagementLayout - In the implementation block
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)initWithEngagementLayout:(id)arg1 ;
-(NSValue *)targetContentOffset;
-(void)setTargetContentOffset:(NSValue *)arg1 ;
-(CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)setIgnoredProposedContentOffset:(NSValue *)arg1 ;
-(UIEdgeInsets)engagementInsetsForCollectionViewBounds:(CGSize)arg1 ;
-(CGSize)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2 ;
-(NSValue *)ignoredProposedContentOffset;
-(CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2 ;
-(id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3 ;
-(AVTEngagementLayout *)engagementLayout;
-(void)clearTargetContentOffsetForAnimations;
-(void)setTargetContentOffsetForAnimations:(CGPoint)arg1 ;
@end

