/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCReshapeLayer : MLCLayer {

	NSArray* _shape;

}

@property (nonatomic,copy,readonly) NSArray * shape;              //@synthesize shape=_shape - In the implementation block
+(id)layerWithShape:(id)arg1 ;
-(NSArray *)shape;
-(id)initWithShape:(id)arg1 ;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2 ;
-(unsigned long long)deviceMemorySizeForForward;
-(BOOL)isStaticBatchSize;
@end

