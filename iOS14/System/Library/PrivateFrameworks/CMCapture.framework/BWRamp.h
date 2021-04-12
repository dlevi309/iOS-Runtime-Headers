/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface BWRamp : NSObject {

	BOOL _isRamping;
	float _currentValue;
	int _currentIteration;
	float _startValue;
	float _targetValue;
	int _durationInIterations;
	int _shape;
	BOOL _isRampingUp;
	float _exponentialConvergenceFraction;
	float _exponentialSnapFraction;

}

@property (nonatomic,readonly) BOOL isRamping;                  //@synthesize isRamping=_isRamping - In the implementation block
@property (nonatomic,readonly) float currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly) BOOL isRampingUp;                //@synthesize isRampingUp=_isRampingUp - In the implementation block
+(void)initialize;
-(id)init;
-(float)currentValue;
-(BOOL)isRampingUp;
-(BOOL)isRamping;
-(void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 ;
-(float)updateRampForNexIteration;
-(void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 exponentialConvergenceFraction:(float)arg5 ;
@end

