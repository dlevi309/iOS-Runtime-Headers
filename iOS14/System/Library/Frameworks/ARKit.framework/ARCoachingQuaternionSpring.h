/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class NSArray;

@interface ARCoachingQuaternionSpring : NSObject {

	NSArray* _springs;
	double _response;
	double _dampingRatio;

}

@property (nonatomic,readonly) NSArray * springs; 
@property (assign,nonatomic) SCD_Struct_AR10 value; 
@property (assign,nonatomic) SCD_Struct_AR10 target; 
@property (assign,nonatomic) SCD_Struct_AR10 velocity; 
@property (assign,nonatomic) double response; 
@property (assign,nonatomic) double dampingRatio; 
-(void)setVelocity:(SCD_Struct_AR10)arg1 ;
-(void)setTarget:(SCD_Struct_AR10)arg1 ;
-(SCD_Struct_AR10)velocity;
-(id)init;
-(void)setValue:(SCD_Struct_AR10)arg1 ;
-(double)response;
-(void)setResponse:(double)arg1 ;
-(double)dampingRatio;
-(SCD_Struct_AR10)target;
-(NSArray *)springs;
-(SCD_Struct_AR10)value;
-(void)setDampingRatio:(double)arg1 ;
-(void)stepWithDeltaTime:(double)arg1 ;
@end

