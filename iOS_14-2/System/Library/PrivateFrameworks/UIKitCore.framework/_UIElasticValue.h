/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)friction;
-(void)setSpeed:(double)arg1 ;
-(void)update:(double)arg1 ;
-(id)init;
-(double)speed;
-(void)setFriction:(double)arg1 ;
-(id)initWithValue:(double)arg1 ;
-(BOOL)isSteady;
-(double)momentum;
-(double)targetValue;
-(id)description;
-(double)currentValue;
-(void)setMomentum:(double)arg1 ;
-(void)updateFromDisplayLink:(id)arg1 ;
-(void)setTargetValue:(double)arg1 ;
-(void)setCurrentValue:(double)arg1 ;
@end

