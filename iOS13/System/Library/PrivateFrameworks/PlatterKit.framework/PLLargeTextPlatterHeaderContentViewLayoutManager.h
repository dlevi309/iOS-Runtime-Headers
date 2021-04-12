/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLPlatterHeaderContentViewLayoutManager.h>

@class NSStringDrawingContext;

@interface PLLargeTextPlatterHeaderContentViewLayoutManager : PLPlatterHeaderContentViewLayoutManager {

	NSStringDrawingContext* _drawingContext;
	double _referenceWidth;
	CGSize _cachedTitleBoundingRectSize;
	unsigned long long _cachedTitleNumberOfLines;

}
+(double)contentBaselineToBoundsBottomWithFont:(id)arg1 boundsWidth:(double)arg2 scale:(double)arg3 ;
-(double)headerHeightForWidth:(double)arg1 ;
-(double)_titleLabelBaselineOffset;
-(double)contentBaseline;
-(void)layoutIconButtonsWithScale:(double)arg1 ;
-(void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2 ;
-(void)layoutUtilityButtonWithScale:(double)arg1 ;
-(void)layoutDateLabelWithScale:(double)arg1 ;
-(void)invalidateCachedSizeInfo;
-(id)_dateLabelFont;
-(CGRect)_titleLabelBoundsThatFitsWidth:(double)arg1 ;
-(CGRect)_dateLabelBoundsThatFitsWidth:(double)arg1 ;
-(double)_largeTextLabelBaselineOffsetFromBottom;
-(CGSize)_utilityViewSizeThatFitsWidth:(double)arg1 ;
-(double)_dateLabelBaselineOffset;
-(CGSize)_boundingRectSizeForLabel:(id)arg1 width:(double)arg2 numberOfLines:(inout unsigned long long*)arg3 ;
-(void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(double)arg1 ;
-(double)_largeTextUtilityLabelBaselineOffset;
-(unsigned long long)_titleLabelNumberOfLinesThatFitsWidth:(double)arg1 ;
@end

