/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UILongPressGestureVelocitySample : NSObject {

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
-(CGPoint)start;
-(CGPoint)end;
-(double)force;
-(void)setForce:(double)arg1 ;
-(double)majorRadius;
-(void)setStart:(CGPoint)arg1 ;
-(void)setEnd:(CGPoint)arg1 ;
-(double)dt;
-(void)setDt:(double)arg1 ;
-(void)setMajorRadius:(double)arg1 ;
-(void)pullValuesFrom:(id)arg1 ;
-(void)resetValues;
@end

