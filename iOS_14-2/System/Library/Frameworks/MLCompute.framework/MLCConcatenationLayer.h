/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCLayer.h>

@interface MLCConcatenationLayer : MLCLayer {

	unsigned long long _dimension;

}

@property (nonatomic,readonly) unsigned long long dimension;              //@synthesize dimension=_dimension - In the implementation block
+(id)layer;
+(id)layerWithDimension:(unsigned long long)arg1 ;
-(unsigned long long)dimension;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2 ;
-(unsigned long long)deviceMemorySizeForForward;
-(BOOL)isStaticBatchSize;
-(id)initWithDimension:(unsigned long long)arg1 ;
@end

