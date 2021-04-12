/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCOptimizer.h>
#import <MLCompute/MLCOptimizerCompiling.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCOptimizerDescriptor, NSString;

@interface MLCAdamOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {

	float _beta1;
	float _beta2;
	float _epsilon;
	unsigned long long _timeStep;
	MLCOptimizerDescriptor* _optimizerDescriptor;

}

@property (nonatomic,readonly) MLCOptimizerDescriptor * optimizerDescriptor;              //@synthesize optimizerDescriptor=_optimizerDescriptor - In the implementation block
@property (assign,nonatomic) unsigned long long timeStep;                                 //@synthesize timeStep=_timeStep - In the implementation block
@property (nonatomic,readonly) float beta1;                                               //@synthesize beta1=_beta1 - In the implementation block
@property (nonatomic,readonly) float beta2;                                               //@synthesize beta2=_beta2 - In the implementation block
@property (nonatomic,readonly) float epsilon;                                             //@synthesize epsilon=_epsilon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optimizerWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 ;
+(id)optimizerWithDescriptor:(id)arg1 ;
-(float)beta1;
-(float)beta2;
-(NSString *)description;
-(unsigned long long)timeStep;
-(void)setTimeStep:(unsigned long long)arg1 ;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)compileForDevice:(id)arg1 ;
-(MLCOptimizerDescriptor *)optimizerDescriptor;
-(id)initWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 ;
@end

