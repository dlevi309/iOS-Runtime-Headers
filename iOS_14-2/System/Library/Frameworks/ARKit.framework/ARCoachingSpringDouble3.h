/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSArray;

@interface ARCoachingSpringDouble3 : NSObject {

	NSArray* _springs;
	double _response;
	double _dampingRatio;

}

@property (nonatomic,readonly) NSArray * springs; 
@property (assign,nonatomic)  value; 
@property (assign,nonatomic)  target; 
@property (assign,nonatomic)  velocity; 
@property (assign,nonatomic)  floatValue; 
@property (assign,nonatomic) double response; 
@property (assign,nonatomic) double dampingRatio; 
-(void)setVelocity:;
-(void)setTarget:;
-()velocity;
-()floatValue;
-(id)init;
-(void)setFloatValue:;
-(void)setValue:;
-(double)response;
-(void)setResponse:(double)arg1 ;
-(double)dampingRatio;
-()target;
-(NSArray *)springs;
-()value;
-(void)setDampingRatio:(double)arg1 ;
-(void)stepWithDeltaTime:(double)arg1 ;
@end

