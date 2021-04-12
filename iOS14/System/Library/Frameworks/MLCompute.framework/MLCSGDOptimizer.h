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

@interface MLCSGDOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {

	BOOL _usesNesterovMomentum;
	float _momentumScale;
	MLCOptimizerDescriptor* _optimizerDescriptor;

}

@property (nonatomic,readonly) MLCOptimizerDescriptor * optimizerDescriptor;              //@synthesize optimizerDescriptor=_optimizerDescriptor - In the implementation block
@property (nonatomic,readonly) float momentumScale;                                       //@synthesize momentumScale=_momentumScale - In the implementation block
@property (nonatomic,readonly) BOOL usesNesterovMomentum;                                 //@synthesize usesNesterovMomentum=_usesNesterovMomentum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optimizerWithDescriptor:(id)arg1 ;
+(id)optimizerWithDescriptor:(id)arg1 momentumScale:(float)arg2 usesNesterovMomentum:(BOOL)arg3 ;
-(NSString *)description;
-(float)momentumScale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)compileForDevice:(id)arg1 ;
-(id)initWithMomentumScale:(float)arg1 useNesterovMomentum:(BOOL)arg2 optimizerDescriptor:(id)arg3 ;
-(MLCOptimizerDescriptor *)optimizerDescriptor;
-(BOOL)usesNesterovMomentum;
@end

