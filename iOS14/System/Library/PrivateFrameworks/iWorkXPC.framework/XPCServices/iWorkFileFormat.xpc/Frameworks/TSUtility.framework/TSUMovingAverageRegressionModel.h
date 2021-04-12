/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSURegressionModel.h>

@interface TSUMovingAverageRegressionModel : TSURegressionModel {

	int mNumTrendPoint;
	double* mTrendXValues;
	double* mTrendYValues;

}
-(double)rSquared;
-(void)dealloc;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5 ;
-(double)coefficientAtIndex:(int)arg1 ;
-(int)numTrendPoint;
-(double)trendXValueAtIndex:(int)arg1 ;
-(double)trendYValueAtIndex:(int)arg1 ;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1 ;
-(int)numSuperscriptRanges;
-(NSRange)superscriptRangeAtIndex:(int)arg1 ;
-(id)initWithMappings:(int)arg1 xs:(id)arg2 ys:(id)arg3 numPeriod:(int)arg4 ;
-(int)regressionType;
-(int)numCoefficients;
-(id)equationString;
@end

