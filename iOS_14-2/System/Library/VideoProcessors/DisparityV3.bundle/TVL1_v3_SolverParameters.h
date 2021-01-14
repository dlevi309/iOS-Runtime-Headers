/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@interface TVL1_v3_SolverParameters : NSObject {

	float _tau;
	float _sigma;
	float _theta;
	float _huber_eps;
	int _warpings;
	int _iterations;
	float _a_checkerboard;
	float _b_checkerboard;

}

@property (assign,nonatomic) float tau;                         //@synthesize tau=_tau - In the implementation block
@property (assign,nonatomic) float sigma;                       //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) float theta;                       //@synthesize theta=_theta - In the implementation block
@property (assign,nonatomic) float huber_eps;                   //@synthesize huber_eps=_huber_eps - In the implementation block
@property (assign,nonatomic) int warpings;                      //@synthesize warpings=_warpings - In the implementation block
@property (assign,nonatomic) int iterations;                    //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) float a_checkerboard;              //@synthesize a_checkerboard=_a_checkerboard - In the implementation block
@property (assign,nonatomic) float b_checkerboard;              //@synthesize b_checkerboard=_b_checkerboard - In the implementation block
-(void)setIterations:(int)arg1 ;
-(float)tau;
-(int)iterations;
-(float)theta;
-(float)sigma;
-(void)setTheta:(float)arg1 ;
-(void)setSigma:(float)arg1 ;
-(int)warpings;
-(void)setTau:(float)arg1 ;
-(float)huber_eps;
-(void)setHuber_eps:(float)arg1 ;
-(void)setWarpings:(int)arg1 ;
-(float)a_checkerboard;
-(void)setA_checkerboard:(float)arg1 ;
-(float)b_checkerboard;
-(void)setB_checkerboard:(float)arg1 ;
@end

