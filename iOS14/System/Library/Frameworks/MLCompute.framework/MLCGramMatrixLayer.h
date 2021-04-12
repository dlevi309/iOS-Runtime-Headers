/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@interface MLCGramMatrixLayer : MLCLayer {

	float _scale;

}

@property (nonatomic,readonly) float scale;              //@synthesize scale=_scale - In the implementation block
+(id)layerWithScale:(float)arg1 ;
-(float)scale;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSizes:(id)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithScaleFactor:(float)arg1 ;
@end

