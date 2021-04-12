/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@interface HBFGPUParameters : NSObject {

	int _iterations;
	int _scales;
	int _radius;
	int _padding;
	float _sigma_0;
	float _sigma_1;
	float _sigma_2;
	float _sigma_w;
	float _conf_min;
	float _conf_max;
	float _occ_thres;

}

@property (assign,nonatomic) int iterations;               //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) int scales;                   //@synthesize scales=_scales - In the implementation block
@property (assign,nonatomic) int radius;                   //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) int padding;                  //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) float sigma_0;                //@synthesize sigma_0=_sigma_0 - In the implementation block
@property (assign,nonatomic) float sigma_1;                //@synthesize sigma_1=_sigma_1 - In the implementation block
@property (assign,nonatomic) float sigma_2;                //@synthesize sigma_2=_sigma_2 - In the implementation block
@property (assign,nonatomic) float sigma_w;                //@synthesize sigma_w=_sigma_w - In the implementation block
@property (assign,nonatomic) float conf_min;               //@synthesize conf_min=_conf_min - In the implementation block
@property (assign,nonatomic) float conf_max;               //@synthesize conf_max=_conf_max - In the implementation block
@property (assign,nonatomic) float occ_thres;              //@synthesize occ_thres=_occ_thres - In the implementation block
-(void)setRadius:(int)arg1 ;
-(int)scales;
-(void)setIterations:(int)arg1 ;
-(int)iterations;
-(int)radius;
-(int)padding;
-(void)setPadding:(int)arg1 ;
-(void)setScales:(int)arg1 ;
-(void)setSigma_0:(float)arg1 ;
-(void)setSigma_1:(float)arg1 ;
-(void)setSigma_2:(float)arg1 ;
-(void)setSigma_w:(float)arg1 ;
-(void)setConf_min:(float)arg1 ;
-(void)setConf_max:(float)arg1 ;
-(void)setOcc_thres:(float)arg1 ;
-(float)sigma_0;
-(float)sigma_1;
-(float)sigma_2;
-(float)sigma_w;
-(float)conf_min;
-(float)conf_max;
-(float)occ_thres;
@end

