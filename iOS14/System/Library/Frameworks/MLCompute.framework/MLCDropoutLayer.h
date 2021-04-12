/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@interface MLCDropoutLayer : MLCLayer {

	float _rate;
	unsigned long long _seed;

}

@property (nonatomic,readonly) float rate;                           //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;              //@synthesize seed=_seed - In the implementation block
+(id)layerWithRate:(float)arg1 seed:(unsigned long long)arg2 ;
-(unsigned long long)seed;
-(id)description;
-(float)rate;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithRate:(float)arg1 seed:(unsigned long long)arg2 ;
@end

