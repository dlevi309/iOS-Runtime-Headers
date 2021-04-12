/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@interface ARCoachingBasicSpring : NSObject {

	float _target;
	float _velocity;
	float _position;
	float _tension;
	float _friction;

}

@property (assign,nonatomic) float tension;               //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) float friction;              //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) float input; 
@property (nonatomic,readonly) float output; 
-(float)input;
-(void)setInput:(float)arg1 ;
-(float)friction;
-(void)setFriction:(float)arg1 ;
-(float)tension;
-(void)setTension:(float)arg1 ;
-(float)output;
-(id)initWithTension:(float)arg1 friction:(float)arg2 ;
-(void)stepWithDeltaTime:(double)arg1 ;
-(void)setInput:(float)arg1 velocity:(float)arg2 ;
@end

