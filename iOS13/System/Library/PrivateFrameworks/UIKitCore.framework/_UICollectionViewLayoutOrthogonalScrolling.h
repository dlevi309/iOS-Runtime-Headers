/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewLayoutOrthogonalScrolling <NSObject>
@required
-(BOOL)_hasOrthogonalScrollingSections;
-(id)_orthogonalScrollingSections;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
-(CGPoint*)_offsetForOrthogonalScrollingSection:(long long)arg1;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
-(CGPoint*)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
-(unsigned long long)_orthogonalScrollingAxis;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
-(CGVector*)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
-(CGRect*)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
-(CGRect*)_orthogonalScrollingContentRectForSection:(long long)arg1;
-(NSDirectionalEdgeInsets*)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(CGRect*)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
-(id)_orthogonalScrollingTrace;

@end

