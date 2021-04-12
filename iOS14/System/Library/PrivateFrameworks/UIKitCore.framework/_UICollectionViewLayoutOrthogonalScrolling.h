/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewLayoutOrthogonalScrolling <NSObject>
@required
-(CGPoint*)_offsetForOrthogonalScrollingSection:(long long)arg1;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
-(CGRect*)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
-(id)_orthogonalScrollingSections;
-(CGVector*)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
-(CGRect*)_orthogonalScrollingContentRectForSection:(long long)arg1;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1;
-(CGRect*)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
-(BOOL)_hasOrthogonalScrollingSections;
-(CGPoint*)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2;
-(unsigned long long)_orthogonalScrollingAxis;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(NSDirectionalEdgeInsets*)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
-(id)_orthogonalScrollingStateForSection:(long long)arg1;
-(id)_orthogonalScrollingTrace;

@end

