/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@interface MLCReductionLayer : MLCLayer {

	int _reductionType;
	unsigned long long _dimension;

}

@property (nonatomic,readonly) int reductionType;                         //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) unsigned long long dimension;              //@synthesize dimension=_dimension - In the implementation block
+(id)layerWithReductionType:(int)arg1 dimension:(unsigned long long)arg2 ;
-(unsigned long long)dimension;
-(id)description;
-(int)reductionType;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithReduceType:(int)arg1 dimension:(unsigned long long)arg2 ;
@end

