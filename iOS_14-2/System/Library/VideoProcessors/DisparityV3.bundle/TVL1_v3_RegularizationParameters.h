/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@interface TVL1_v3_RegularizationParameters : NSObject {

	float _alpha;
	float _beta;
	float _gain;
	float _offset;
	float _diffusion_eps;

}

@property (assign,nonatomic) float alpha;                      //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;                       //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float gain;                       //@synthesize gain=_gain - In the implementation block
@property (assign,nonatomic) float offset;                     //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) float diffusion_eps;              //@synthesize diffusion_eps=_diffusion_eps - In the implementation block
-(float)gain;
-(float)beta;
-(float)alpha;
-(void)setGain:(float)arg1 ;
-(float)offset;
-(void)setBeta:(float)arg1 ;
-(void)setOffset:(float)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(float)diffusion_eps;
-(void)setDiffusion_eps:(float)arg1 ;
@end

