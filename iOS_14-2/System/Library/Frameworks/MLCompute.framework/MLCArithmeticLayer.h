/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@interface MLCArithmeticLayer : MLCLayer {

	BOOL _binaryOperation;
	int _operation;

}

@property (nonatomic,readonly) BOOL binaryOperation;              //@synthesize binaryOperation=_binaryOperation - In the implementation block
@property (nonatomic,readonly) int operation;                     //@synthesize operation=_operation - In the implementation block
+(id)layerWithOperation:(int)arg1 ;
-(int)operation;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2 ;
-(BOOL)binaryOperation;
-(id)initWithArithmeticOperation:(int)arg1 ;
-(BOOL)skipGradientComputationForSourceTensor:(id)arg1 resultTensor:(id)arg2 ;
@end

