/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSURegressionModel.h>

@interface TSULogarithmicRegressionModel : TSURegressionModel {

	double* mCoefficients;
	int mNumCoefficients;
	BOOL mAffine;
	double mIntercept;
	double mRSquared;

}
-(double)rSquared;
-(void)dealloc;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5 ;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1 ;
-(id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(BOOL)arg5 desiredIntercept:(double)arg6 ;
-(int)regressionType;
-(int)numCoefficients;
@end

