/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCSliceLayer : MLCLayer {

	NSArray* _start;
	NSArray* _end;
	NSArray* _stride;

}

@property (nonatomic,copy,readonly) NSArray * start;               //@synthesize start=_start - In the implementation block
@property (nonatomic,copy,readonly) NSArray * end;                 //@synthesize end=_end - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stride;              //@synthesize stride=_stride - In the implementation block
+(id)sliceLayerWithStart:(id)arg1 end:(id)arg2 stride:(id)arg3 ;
-(NSArray *)end;
-(NSArray *)start;
-(NSArray *)stride;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(BOOL)isStaticBatchSize;
-(id)initSliceLayerWithStart:(id)arg1 end:(id)arg2 stride:(id)arg3 ;
-(unsigned long long)resultSizeForDimension:(unsigned long long)arg1 ;
@end

