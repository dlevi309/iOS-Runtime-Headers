/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)friction;
-(float)tension;
-(void)setTension:(float)arg1 ;
-(float)input;
-(float)output;
-(void)setFriction:(float)arg1 ;
-(void)setInput:(float)arg1 ;
-(id)initWithTension:(float)arg1 friction:(float)arg2 ;
-(void)stepWithDeltaTime:(double)arg1 ;
-(void)setInput:(float)arg1 velocity:(float)arg2 ;
@end

