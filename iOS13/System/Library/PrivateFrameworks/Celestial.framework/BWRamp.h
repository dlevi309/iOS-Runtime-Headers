/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(BOOL)isRamping;
-(float)updateRampForNexIteration;
-(void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 ;
-(BOOL)isRampingUp;
-(void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 exponentialConvergenceFraction:(float)arg5 ;
@end

