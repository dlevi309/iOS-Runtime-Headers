/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLinear : AXMDataRegressionModel {

	double _rSquared;

}

@property (nonatomic,readonly) double rSquared;              //@synthesize rSquared=_rSquared - In the implementation block
-(double)fitDataWithModelParams:(double*)arg1 finalParams:(double*)arg2 ;
-(/*^block*/id)modelFunction;
-(int)modelParameterCount;
-(void)getInitialParams:(double*)arg1 ;
-(id)partialDerivatives;
-(id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2 ;
-(id)modelDescription;
-(double)rSquared;
@end

