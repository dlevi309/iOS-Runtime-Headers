/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLNoiseStrategy.h>

@class NSString;

@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy> {

	unsigned long long _seed;
	BOOL _inplaceNorm;
	int _maxIterations;
	float _minimumMagnitude;
	SCD_Struct_PM12 _noiseScaleFactors;
	long long _noiseMechanism;

}

@property (assign) SCD_Struct_PM12 noiseScaleFactors;               //@synthesize noiseScaleFactors=_noiseScaleFactors - In the implementation block
@property (assign) float minimumMagnitude;                          //@synthesize minimumMagnitude=_minimumMagnitude - In the implementation block
@property (assign) long long noiseMechanism;                        //@synthesize noiseMechanism=_noiseMechanism - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3 ;
-(NSString *)description;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(void)addNoiseToSparseVector:(id)arg1 ;
-(void)addNoiseToSparseMatrix:(id)arg1 ;
-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float*)arg3 ;
-(id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(SCD_Struct_PM12)arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 noiseMechanism:(long long)arg5 inplaceNorm:(BOOL)arg6 ;
-(id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(SCD_Struct_PM12)arg2 minimumMagnitude:(float)arg3 noiseMechanism:(long long)arg4 inplaceNorm:(BOOL)arg5 ;
-(PMLPreNoiseScaleFactorAndNoiseSampler)samplerWithScaleFactorFor:(id)arg1 usingNorm:(BOOL)arg2 ;
-(id)createDefaultSampler;
-(id)createSamplerByName:(id)arg1 ;
-(SCD_Struct_PM12)noiseScaleFactors;
-(void)setNoiseScaleFactors:(SCD_Struct_PM12)arg1 ;
-(float)minimumMagnitude;
-(void)setMinimumMagnitude:(float)arg1 ;
-(long long)noiseMechanism;
-(void)setNoiseMechanism:(long long)arg1 ;
@end

