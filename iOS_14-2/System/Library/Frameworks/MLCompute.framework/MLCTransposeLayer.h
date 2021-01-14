/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCTransposeLayer : MLCLayer {

	NSArray* _dimensions;
	NSArray* _shape;

}

@property (nonatomic,readonly) NSArray * shape;                        //@synthesize shape=_shape - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
+(id)layerWithDimensions:(id)arg1 ;
-(NSArray *)shape;
-(NSArray *)dimensions;
-(id)description;
-(id)initWithDimensions:(id)arg1 ;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSizes:(id)arg1 dimension:(unsigned long long)arg2 ;
-(BOOL)isStaticBatchSize;
@end

