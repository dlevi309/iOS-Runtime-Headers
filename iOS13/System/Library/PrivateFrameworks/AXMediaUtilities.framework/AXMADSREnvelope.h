/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface AXMADSREnvelope : NSObject {

	double _attackMS;
	double _attackLevel;
	double _decayMS;
	double _sustainMS;
	double _sustainLevel;
	double _releaseMS;

}

@property (assign,nonatomic) double attackMS;                  //@synthesize attackMS=_attackMS - In the implementation block
@property (assign,nonatomic) double attackLevel;               //@synthesize attackLevel=_attackLevel - In the implementation block
@property (assign,nonatomic) double decayMS;                   //@synthesize decayMS=_decayMS - In the implementation block
@property (assign,nonatomic) double sustainMS;                 //@synthesize sustainMS=_sustainMS - In the implementation block
@property (assign,nonatomic) double sustainLevel;              //@synthesize sustainLevel=_sustainLevel - In the implementation block
@property (assign,nonatomic) double releaseMS;                 //@synthesize releaseMS=_releaseMS - In the implementation block
@property (nonatomic,readonly) double lengthMS; 
+(id)defaultEnvelope;
-(id)init;
-(id)copy;
-(double)lengthMS;
-(double)levelForTime:(double)arg1 ;
-(id)initWithAttackDuration:(double)arg1 attackLevel:(double)arg2 decayDuration:(double)arg3 sustainDuration:(double)arg4 sustainLevel:(double)arg5 releaseDuration:(double)arg6 ;
-(double)attackMS;
-(double)decayMS;
-(double)sustainMS;
-(double)releaseMS;
-(double)attackLevel;
-(double)sustainLevel;
-(void)setAttackMS:(double)arg1 ;
-(void)setAttackLevel:(double)arg1 ;
-(void)setDecayMS:(double)arg1 ;
-(void)setSustainMS:(double)arg1 ;
-(void)setSustainLevel:(double)arg1 ;
-(void)setReleaseMS:(double)arg1 ;
@end

