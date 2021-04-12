/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(double)friction;
-(double)tension;
-(id)init;
-(void)setTension:(double)arg1 ;
-(double)input;
-(double)output;
-(void)setFriction:(double)arg1 ;
-(void)setInput:(double)arg1 ;
-(void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 ;
-(void)update;
-(BOOL)isCompleted;
-(int)updateCount;
-(void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 convergedSpeed:(double)arg4 ;
@end

