/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfViewLayout.h>

@interface _TVMLShelfViewLayout : _TVShelfViewLayout {

	double _showcaseFactor;
	double _cachedTallestHeaderHeight;
	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;                     //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (assign,nonatomic) double showcaseFactor;                         //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
@property (assign,nonatomic) double cachedTallestHeaderHeight;              //@synthesize cachedTallestHeaderHeight=_cachedTallestHeaderHeight - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)init;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(double)showcaseFactor;
-(TVCellMetrics)cellMetrics;
-(double)cachedTallestHeaderHeight;
-(void)setCachedTallestHeaderHeight:(double)arg1 ;
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(void)setShowcaseFactor:(double)arg1 ;
-(double)expectedLineSpacing;
-(double)headerAllowance;
-(id)contentRowMetricsForShowcase:(BOOL)arg1 ;
@end

