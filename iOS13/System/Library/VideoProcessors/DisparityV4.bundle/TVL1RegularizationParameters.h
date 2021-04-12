/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@interface TVL1RegularizationParameters : NSObject {

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
-(float)alpha;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)setAlpha:(float)arg1 ;
-(void)setGain:(float)arg1 ;
-(float)gain;
-(void)setBeta:(float)arg1 ;
-(float)beta;
-(float)diffusion_eps;
-(void)setDiffusion_eps:(float)arg1 ;
@end

