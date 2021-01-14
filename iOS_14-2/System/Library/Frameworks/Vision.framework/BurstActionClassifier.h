/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface BurstActionClassifier : NSObject {

	BOOL hasBeenScaled;
	double testVector[7];
	float testAverageCameraTravelDistance;
	float testMaxRegistrationErrorIntegral;
	float testMaxPeakRegistrationError;
	float testMeanPeakRegistrationError;
	float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
	float testInOutRatio;
	float testMaxInnerDistance;
	float testAverageRegistrationErrorSkewness;
	float testMinRegionOfInterestSize;
	float testMaxRegistrationErrorSkewness;
	_SVMParameters* _svmParameters;

}

@property (assign) float testMaxInnerDistance; 
@property (assign) float testInOutRatio; 
@property (assign) float testMaxPeakRegistrationError; 
@property (assign) float testMeanPeakRegistrationError; 
@property (assign) float testMinRegionOfInterestSize; 
@property (assign) float testMaxRegistrationErrorSkewness; 
@property (assign) float testMaxRegistrationErrorIntegral; 
@property (assign) float testAverageCameraTravelDistance; 
@property (assign) float testAverageRegistrationErrorSkewness; 
@property (assign) float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix; 
@property (assign) _SVMParameters* svmParameters;                                          //@synthesize svmParameters=_svmParameters - In the implementation block
-(id)init;
-(id)initWithVersion:(int)arg1 ;
-(void)setSvmParameters:(_SVMParameters*)arg1 ;
-(_SVMParameters*)svmParameters;
-(double)computeKernelValueWithSupportVector:(const BurstSupportVector*)arg1 ;
-(void)scaleVector;
-(float)predictResult;
-(BOOL)isBurstAction;
-(float)testInOutRatio;
-(float)testAverageCameraTravelDistance;
-(void)setTestAverageCameraTravelDistance:(float)arg1 ;
-(float)testMaxRegistrationErrorIntegral;
-(void)setTestMaxRegistrationErrorIntegral:(float)arg1 ;
-(float)testMaxPeakRegistrationError;
-(void)setTestMaxPeakRegistrationError:(float)arg1 ;
-(float)testMeanPeakRegistrationError;
-(void)setTestMeanPeakRegistrationError:(float)arg1 ;
-(void)setTestInOutRatio:(float)arg1 ;
-(float)testMaxInnerDistance;
-(float)testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
-(float)testAverageRegistrationErrorSkewness;
-(void)setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(float)arg1 ;
-(void)setTestMaxInnerDistance:(float)arg1 ;
-(void)setTestAverageRegistrationErrorSkewness:(float)arg1 ;
-(float)testMinRegionOfInterestSize;
-(void)setTestMinRegionOfInterestSize:(float)arg1 ;
-(float)testMaxRegistrationErrorSkewness;
-(void)setTestMaxRegistrationErrorSkewness:(float)arg1 ;
@end

