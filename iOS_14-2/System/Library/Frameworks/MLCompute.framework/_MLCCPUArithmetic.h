/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPUArithmetic : _MLCCPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 operation:(int)arg2 ;
+(unsigned)bnnsArithmeticFunctionFor:(int)arg1 ;
+(int)arithmeticOperatorTypeFor:(int)arg1 ;
-(id)initWithDevice:(id)arg1 operation:(int)arg2 ;
@end

