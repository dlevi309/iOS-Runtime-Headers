/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@interface BWSpringSimulation : NSObject {

	double _tension;
	double _friction;
	double _convergedSpeed;
	double _inputValue;
	double _outputValue;
	double _previousForce;
	BOOL _completed;
	int _updateCount;

}

@property (assign,nonatomic) double input;                                     //@synthesize inputValue=_inputValue - In the implementation block
@property (assign,nonatomic) double tension;                                   //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                                  //@synthesize friction=_friction - In the implementation block
@property (nonatomic,readonly) double output;                                  //@synthesize outputValue=_outputValue - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) int updateCount;                                //@synthesize updateCount=_updateCount - In the implementation block
+(void)initialize;
-(id)init;
-(double)input;
-(void)update;
-(void)setInput:(double)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(double)tension;
-(void)setTension:(double)arg1 ;
-(int)updateCount;
-(double)output;
-(BOOL)isCompleted;
-(void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 convergedSpeed:(double)arg4 ;
-(void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 ;
@end

