/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSvmParameters:(_SVMParameters*)arg1 ;
-(_SVMParameters*)svmParameters;
-(double)computeKernelValueWithSupportVector:(const BurstSupportVector*)arg1 ;
-(void)scaleVector;
-(float)predictResult;
-(id)initWithVersion:(int)arg1 ;
-(BOOL)isBurstAction;
-(float)testAverageCameraTravelDistance;
-(void)setTestAverageCameraTravelDistance:(float)arg1 ;
-(float)testMaxRegistrationErrorIntegral;
-(void)setTestMaxRegistrationErrorIntegral:(float)arg1 ;
-(float)testMaxPeakRegistrationError;
-(void)setTestMaxPeakRegistrationError:(float)arg1 ;
-(float)testMeanPeakRegistrationError;
-(void)setTestMeanPeakRegistrationError:(float)arg1 ;
-(float)testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
-(void)setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(float)arg1 ;
-(float)testInOutRatio;
-(void)setTestInOutRatio:(float)arg1 ;
-(float)testMaxInnerDistance;
-(void)setTestMaxInnerDistance:(float)arg1 ;
-(float)testAverageRegistrationErrorSkewness;
-(void)setTestAverageRegistrationErrorSkewness:(float)arg1 ;
-(float)testMinRegionOfInterestSize;
-(void)setTestMinRegionOfInterestSize:(float)arg1 ;
-(float)testMaxRegistrationErrorSkewness;
-(void)setTestMaxRegistrationErrorSkewness:(float)arg1 ;
@end
