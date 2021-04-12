/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@class NSMutableArray;

@interface PFProportionalIntegralController : NSObject {

	BOOL _outputReady;
	long long _setPoint;
	long long _integralError;
	long long _integralErrorMin;
	long long _integralErrorMax;
	double _proportionalGain;
	double _integralGain;
	long long _output;
	long long _outputMin;
	long long _outputMax;
	NSMutableArray* _statistics;

}

@property (assign) long long setPoint;                       //@synthesize setPoint=_setPoint - In the implementation block
@property (assign) long long integralError;                  //@synthesize integralError=_integralError - In the implementation block
@property (assign) long long integralErrorMin;               //@synthesize integralErrorMin=_integralErrorMin - In the implementation block
@property (assign) long long integralErrorMax;               //@synthesize integralErrorMax=_integralErrorMax - In the implementation block
@property (assign) double proportionalGain;                  //@synthesize proportionalGain=_proportionalGain - In the implementation block
@property (assign) double integralGain;                      //@synthesize integralGain=_integralGain - In the implementation block
@property (assign) long long output;                         //@synthesize output=_output - In the implementation block
@property (assign) long long outputMin;                      //@synthesize outputMin=_outputMin - In the implementation block
@property (assign) long long outputMax;                      //@synthesize outputMax=_outputMax - In the implementation block
@property (retain) NSMutableArray * statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (assign) BOOL outputReady;                         //@synthesize outputReady=_outputReady - In the implementation block
-(NSMutableArray *)statistics;
-(void)setStatistics:(NSMutableArray *)arg1 ;
-(long long)output;
-(void)setOutput:(long long)arg1 ;
-(id)initWithSetPoint:(long long)arg1 ;
-(void)updateWithTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3 ;
-(void)addStatisticsSampleForTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3 ;
-(void)enumerateStatisticsMeasurementsWithHandler:(/*^block*/id)arg1 ;
-(id)statisticsDescription;
-(long long)setPoint;
-(void)setSetPoint:(long long)arg1 ;
-(long long)integralError;
-(void)setIntegralError:(long long)arg1 ;
-(long long)integralErrorMin;
-(void)setIntegralErrorMin:(long long)arg1 ;
-(long long)integralErrorMax;
-(void)setIntegralErrorMax:(long long)arg1 ;
-(double)proportionalGain;
-(void)setProportionalGain:(double)arg1 ;
-(double)integralGain;
-(void)setIntegralGain:(double)arg1 ;
-(long long)outputMin;
-(void)setOutputMin:(long long)arg1 ;
-(long long)outputMax;
-(void)setOutputMax:(long long)arg1 ;
-(BOOL)outputReady;
-(void)setOutputReady:(BOOL)arg1 ;
@end

