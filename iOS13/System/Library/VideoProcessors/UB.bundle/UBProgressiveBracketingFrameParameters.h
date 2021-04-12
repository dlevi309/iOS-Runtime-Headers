/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@interface UBProgressiveBracketingFrameParameters : NSObject {

	float _gain;
	int _AGC;
	double _integrationTime;

}

@property (assign,nonatomic) int AGC;                               //@synthesize AGC=_AGC - In the implementation block
@property (nonatomic,readonly) double integrationTime;              //@synthesize integrationTime=_integrationTime - In the implementation block
@property (nonatomic,readonly) float gain;                          //@synthesize gain=_gain - In the implementation block
-(float)gain;
-(double)integrationTime;
-(int)AGC;
-(id)initWithIntegrationTime:(double)arg1 gain:(float)arg2 AGC:(int)arg3 ;
-(void)setAGC:(int)arg1 ;
@end

