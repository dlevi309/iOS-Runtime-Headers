/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@interface MLCCompareLayer : MLCLayer {

	int _predicate;

}

@property (nonatomic,readonly) int predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
+(id)layerWithPredicate:(int)arg1 ;
-(id)initWithPredicate:(int)arg1 ;
-(int)predicate;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
@end

