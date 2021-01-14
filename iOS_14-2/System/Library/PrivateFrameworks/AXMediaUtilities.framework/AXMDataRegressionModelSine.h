/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelSine : AXMDataRegressionModel
-(/*^block*/id)modelFunction;
-(int)modelParameterCount;
-(void)getInitialParams:(double*)arg1 ;
-(id)partialDerivatives;
-(id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2 ;
-(id)modelDescription;
-(double)estimatedRadianFrequency;
-(void)disqualifyModelIfNecessary;
@end

