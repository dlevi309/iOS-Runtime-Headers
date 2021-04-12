/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_dateLabelFont;
-(double)_titleLabelBaselineOffset;
-(double)_largeTextUtilityLabelBaselineOffset;
-(void)layoutIconButtonsWithScale:(double)arg1 ;
-(CGRect)_titleLabelBoundsThatFitsWidth:(double)arg1 ;
-(void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2 ;
-(double)headerHeightForWidth:(double)arg1 ;
-(CGSize)_boundingRectSizeForLabel:(id)arg1 width:(double)arg2 numberOfLines:(inout unsigned long long*)arg3 ;
-(void)layoutDateLabelWithScale:(double)arg1 ;
-(void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(double)arg1 ;
-(double)_dateLabelBaselineOffset;
-(CGSize)_utilityViewSizeThatFitsWidth:(double)arg1 ;
-(void)layoutUtilityButtonWithScale:(double)arg1 ;
-(unsigned long long)_titleLabelNumberOfLinesThatFitsWidth:(double)arg1 ;
-(void)invalidateCachedSizeInfo;
-(double)_largeTextLabelBaselineOffsetFromBottom;
-(double)contentBaseline;
-(CGRect)_dateLabelBoundsThatFitsWidth:(double)arg1 ;
@end

