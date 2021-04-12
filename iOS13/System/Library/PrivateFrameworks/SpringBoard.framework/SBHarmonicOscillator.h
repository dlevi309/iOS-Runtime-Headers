/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBHarmonicOscillator : NSObject {

	double A;
	double Z;
	double k;
	double dk;
	double mink;
	double m;
	double dm;
	double minm;
	double psi_n;
	double psi_d;
	double zeta;

}

@property (assign,nonatomic) double startingAmplitude; 
@property (assign,nonatomic) double endingAmplitude; 
@property (assign,nonatomic) double springStrength; 
@property (assign,nonatomic) double springDecay; 
@property (assign,nonatomic) double minimumSpringStrength; 
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double massDecay; 
@property (assign,nonatomic) double minimumMass; 
-(id)init;
-(void)updateParameters;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(void)setSpringConstant:(double)arg1 ;
-(double)amplitudeForElapsedTime:(double)arg1 ;
-(double)startingAmplitude;
-(void)setStartingAmplitude:(double)arg1 ;
-(double)endingAmplitude;
-(void)setEndingAmplitude:(double)arg1 ;
-(double)springStrength;
-(void)setSpringStrength:(double)arg1 ;
-(double)springDecay;
-(void)setSpringDecay:(double)arg1 ;
-(double)minimumSpringStrength;
-(void)setMinimumSpringStrength:(double)arg1 ;
-(double)massDecay;
-(void)setMassDecay:(double)arg1 ;
-(double)minimumMass;
-(void)setMinimumMass:(double)arg1 ;
@end

