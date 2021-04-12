/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCMatMulDescriptor;

@interface MLCMatMulLayer : MLCLayer {

	MLCMatMulDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MLCMatMulDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(MLCMatMulDescriptor *)descriptor;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
@end

