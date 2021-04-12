/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIEnhancementHistogram;

@interface CIEnhancementCalculation : NSObject {

	CGSize originalFaceColor;
	CIEnhancementHistogram* lumHist;
	CIEnhancementHistogram* rgbSumHist;
	CIEnhancementHistogram* satHist;
	CIEnhancementHistogram* borderHist;
	double exposureValue;
	double maxShadow;
	double minShadow;
	double exposureValueAtZeroShadow;
	double curvePercent;
	BOOL faceInputSet;
	double percentFaceChange;

}

@property (readonly) CGSize originalFaceColor; 
@property (readonly) CIEnhancementHistogram * lumHist; 
@property (readonly) CIEnhancementHistogram * rgbSumHist; 
@property (readonly) CIEnhancementHistogram * satHist; 
@property (readonly) CIEnhancementHistogram * borderHist; 
+(double)bestWarmthForI:(double)arg1 q:(double)arg2 percentChange:(double*)arg3 ;
-(id)shadow;
-(id)init;
-(CIEnhancementHistogram *)lumHist;
-(CIEnhancementHistogram *)satHist;
-(id)rawShadow;
-(CIEnhancementHistogram *)rgbSumHist;
-(CIEnhancementHistogram *)borderHist;
-(void)setFaceColorFromChromaI:(double)arg1 andChromaQ:(double)arg2 ;
-(int)putShadowsAnalysisInto:(double*)arg1 ;
-(void)downSampleHistogram:(id)arg1 to:(unsigned)arg2 storeIn:(double*)arg3 ;
-(void)printAnalysis;
-(void)setCurvePercent:(double)arg1 ;
-(void)setLuminanceHistogram:(id)arg1 ;
-(void)setRGBSumHistogram:(id)arg1 ;
-(void)setBorderHistogram:(id)arg1 ;
-(void)setSaturationHistogram:(id)arg1 ;
-(void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(void)setExposureValue:(double)arg1 ;
-(void)setShadowsMin:(double)arg1 max:(double)arg2 zeroExposure:(double)arg3 ;
-(void)printHistogram:(id)arg1 downsampledTo:(unsigned)arg2 ;
-(void)printHistogramsDownsampledTo:(unsigned)arg1 ;
-(id)vibrance;
-(unsigned long long)curveCount;
-(id)faceBalanceWarmth;
-(id)faceBalanceStrength;
-(CGSize)originalFaceColor;
-(CGPoint)curvePointAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

