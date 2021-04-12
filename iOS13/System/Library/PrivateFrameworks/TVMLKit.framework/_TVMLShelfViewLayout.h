/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfViewLayout.h>

@interface _TVMLShelfViewLayout : _TVShelfViewLayout {

	double _showcaseFactor;
	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;              //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (assign,nonatomic) double showcaseFactor;                  //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(TVCellMetrics)cellMetrics;
-(double)showcaseFactor;
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(void)setShowcaseFactor:(double)arg1 ;
-(double)expectedLineSpacing;
-(double)headerAllowance;
-(id)contentRowMetricsForShowcase:(BOOL)arg1 ;
@end

