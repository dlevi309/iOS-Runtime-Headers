/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStroke.h>

@class TSDFrameSpec, NSString;

@interface TSDFrame : TSDStroke {

	TSDFrameSpec* mSpec;
	NSString* mFrameName;
	double mAssetScale;
	BOOL mScaledSizesValid;
	double mLeftWidth;
	double mRightWidth;
	double mTopHeight;
	double mBottomHeight;
	CGSize mAdornmentSize;

}

@property (nonatomic,readonly) double assetScale; 
@property (nonatomic,readonly) TSDFrameSpec * frameSpec; 
+(Class)mutableClass;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)frameName;
-(BOOL)supportsColor;
-(BOOL)shouldRender;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)supportsLineOptions;
-(BOOL)supportsPattern;
-(BOOL)isFrame;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(BOOL)arg4 ;
-(BOOL)isNullStroke;
-(BOOL)canApplyDirectlyToRepCALayer;
-(BOOL)canApplyToCAShapeLayer;
-(TSDStrokeOutsets)outsets;
-(BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
-(BOOL)drawsInOneStep;
-(id)strokeByTransformingByTransform:(CGAffineTransform)arg1 ;
-(CGRect)coverageRect:(CGRect)arg1 ;
-(BOOL)hasMask;
-(CGRect)coverageRectWithoutAdornment:(CGRect)arg1 ;
-(id)initWithFrameName:(id)arg1 ;
-(double)minimumAssetScale;
-(BOOL)shouldRenderForSizeIncludingCoverage:(CGSize)arg1 ;
-(id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2 archivableFrameName:(id)arg3 ;
-(id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2 ;
-(id)initWithFrameSpec:(id)arg1 ;
-(TSDFrameSpec *)frameSpec;
-(double)assetScale;
-(id)archivableFrameName;
-(CGRect)p_coverageRectWithoutAdornment:(CGRect)arg1 ;
-(CGRect)i_adornmentRectForRect:(CGRect)arg1 ;
-(CGRect)p_coverageRectWithAdornment:(CGRect)arg1 ;
-(CGSize)p_minimumRenderedSize;
-(double)i_leftWidth;
-(double)i_rightWidth;
-(double)i_topHeight;
-(double)i_bottomHeight;
-(BOOL)i_willRenderForRect:(CGRect)arg1 ;
@end

