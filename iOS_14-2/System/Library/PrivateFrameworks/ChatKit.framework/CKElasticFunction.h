/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKElasticFunction : NSObject {

	double _currentValue;
	double _elastic;
	double _oldForce;
	double _velocity;
	double _friction;
	double _tension;

}

@property (assign,nonatomic) double friction;                //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double tension;                 //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double input;                   //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly) double output; 
@property (nonatomic,readonly) double velocity; 
+(id)functionWithTension:(double)arg1 friction:(double)arg2 initialValue:(double)arg3 ;
-(double)friction;
-(double)tension;
-(double)velocity;
-(id)init;
-(void)setTension:(double)arg1 ;
-(double)input;
-(double)output;
-(void)setFriction:(double)arg1 ;
-(void)setInput:(double)arg1 ;
-(void)step;
@end

