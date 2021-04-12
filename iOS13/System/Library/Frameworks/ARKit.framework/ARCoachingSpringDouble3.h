/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-()floatValue;
-(id)init;
-(void)setTarget:;
-()target;
-()value;
-(void)setValue:;
-(double)response;
-()velocity;
-(void)setVelocity:;
-(void)setResponse:(double)arg1 ;
-(double)dampingRatio;
-(NSArray *)springs;
-(void)setFloatValue:;
-(void)setDampingRatio:(double)arg1 ;
-(void)stepWithDeltaTime:(double)arg1 ;
@end

