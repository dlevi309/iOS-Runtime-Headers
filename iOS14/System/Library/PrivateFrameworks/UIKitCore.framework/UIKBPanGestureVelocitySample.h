/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBPanGestureVelocitySample : NSObject {

	CGPoint start;
	CGPoint end;
	double dt;
	double force;
	double majorRadius;

}

@property (assign) CGPoint start; 
@property (assign) CGPoint end; 
@property (assign) double dt; 
@property (assign) double force; 
@property (assign) double majorRadius; 
-(double)force;
-(CGPoint)end;
-(CGPoint)start;
-(void)pullValuesFrom:(id)arg1 ;
-(void)resetValues;
-(void)setForce:(double)arg1 ;
-(void)setEnd:(CGPoint)arg1 ;
-(void)setMajorRadius:(double)arg1 ;
-(void)setDt:(double)arg1 ;
-(double)majorRadius;
-(double)dt;
-(void)setStart:(CGPoint)arg1 ;
@end

