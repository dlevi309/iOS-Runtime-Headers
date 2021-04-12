/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLinear : AXMDataRegressionModel {

	double _rSquared;

}

@property (nonatomic,readonly) double rSquared;              //@synthesize rSquared=_rSquared - In the implementation block
-(id)modelDescription;
-(/*^block*/id)modelFunction;
-(int)modelParameterCount;
-(void)getInitialParams:(double*)arg1 ;
-(id)partialDerivatives;
-(id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2 ;
-(double)rSquared;
-(double)fitDataWithModelParams:(double*)arg1 finalParams:(double*)arg2 ;
@end

