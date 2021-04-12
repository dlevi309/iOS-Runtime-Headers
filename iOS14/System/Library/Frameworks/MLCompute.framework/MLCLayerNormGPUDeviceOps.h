/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSArray;

@interface MLCLayerNormGPUDeviceOps : MLCGPUDeviceOps {

	float _varianceEpsilon;
	NSArray* _normalizedShape;
	id _layerNormGammaGradient;
	id _layerNormBetaGradient;
	id _layerNormInverseSqrtVariance;
	id _layerNormInputNormalized;
	id _layerNormMultiGPUChildOps;

}

@property (nonatomic,retain) NSArray * normalizedShape;                    //@synthesize normalizedShape=_normalizedShape - In the implementation block
@property (assign,nonatomic) float varianceEpsilon;                        //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,retain) id layerNormGammaGradient;                    //@synthesize layerNormGammaGradient=_layerNormGammaGradient - In the implementation block
@property (nonatomic,retain) id layerNormBetaGradient;                     //@synthesize layerNormBetaGradient=_layerNormBetaGradient - In the implementation block
@property (nonatomic,retain) id layerNormInverseSqrtVariance;              //@synthesize layerNormInverseSqrtVariance=_layerNormInverseSqrtVariance - In the implementation block
@property (nonatomic,retain) id layerNormInputNormalized;                  //@synthesize layerNormInputNormalized=_layerNormInputNormalized - In the implementation block
@property (nonatomic,retain) id layerNormMultiGPUChildOps;                 //@synthesize layerNormMultiGPUChildOps=_layerNormMultiGPUChildOps - In the implementation block
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(float)varianceEpsilon;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(id)layerNormBetaGradient;
-(id)layerNormGammaGradient;
-(void)setLayerNormMultiGPUChildOps:(id)arg1 ;
-(id)layerNormMultiGPUChildOps;
-(void)setNormalizedShape:(NSArray *)arg1 ;
-(void)setVarianceEpsilon:(float)arg1 ;
-(void)setLayerNormGammaGradient:(id)arg1 ;
-(void)setLayerNormBetaGradient:(id)arg1 ;
-(NSArray *)normalizedShape;
-(id)layerNormInputNormalized;
-(void)setLayerNormInputNormalized:(id)arg1 ;
-(id)layerNormInverseSqrtVariance;
-(void)setLayerNormInverseSqrtVariance:(id)arg1 ;
@end

