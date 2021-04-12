/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIElasticValue : NSObject {

	double _currentValue;
	double _targetValue;
	double _speed;
	double _friction;
	double _momentum;

}

@property (assign,nonatomic) double currentValue;                        //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) double targetValue;                         //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) double speed;                               //@synthesize speed=_speed - In the implementation block
@property (getter=isSteady,nonatomic,readonly) BOOL steady; 
@property (assign,nonatomic) double friction;                            //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double momentum;                            //@synthesize momentum=_momentum - In the implementation block
-(id)init;
-(id)description;
-(double)momentum;
-(void)setMomentum:(double)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(BOOL)isSteady;
-(void)update:(double)arg1 ;
-(id)initWithValue:(double)arg1 ;
-(void)updateFromDisplayLink:(id)arg1 ;
-(double)currentValue;
-(void)setCurrentValue:(double)arg1 ;
@end

