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

@interface MLCRMSPropOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {

	BOOL _isCentered;
	float _momentumScale;
	float _alpha;
	float _epsilon;
	MLCOptimizerDescriptor* _optimizerDescriptor;

}

@property (nonatomic,readonly) MLCOptimizerDescriptor * optimizerDescriptor;              //@synthesize optimizerDescriptor=_optimizerDescriptor - In the implementation block
@property (nonatomic,readonly) float momentumScale;                                       //@synthesize momentumScale=_momentumScale - In the implementation block
@property (nonatomic,readonly) float alpha;                                               //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) float epsilon;                                             //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) BOOL isCentered;                                           //@synthesize isCentered=_isCentered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optimizerWithDescriptor:(id)arg1 ;
+(id)optimizerWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 isCentered:(BOOL)arg5 ;
-(float)alpha;
-(NSString *)description;
-(float)momentumScale;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCentered;
-(BOOL)compileForDevice:(id)arg1 ;
-(MLCOptimizerDescriptor *)optimizerDescriptor;
-(id)initWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(BOOL)arg5 ;
@end

