/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@interface TVL1SolverParameters : NSObject {

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
-(int)iterations;
-(void)setIterations:(int)arg1 ;
-(float)sigma;
-(void)setSigma:(float)arg1 ;
-(float)theta;
-(void)setTheta:(float)arg1 ;
-(int)warpings;
-(float)tau;
-(void)setTau:(float)arg1 ;
-(float)huber_eps;
-(void)setHuber_eps:(float)arg1 ;
-(void)setWarpings:(int)arg1 ;
-(float)a_checkerboard;
-(void)setA_checkerboard:(float)arg1 ;
-(float)b_checkerboard;
-(void)setB_checkerboard:(float)arg1 ;
@end

