/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


#import <AuthKitUI/AuthKitUI-Structs.h>
@interface AKCurvePoint : NSObject {

	double _x;
	double _y;
	double _roundness;
	double _smoothness;
	CGPoint _leftTangentPoint;
	CGPoint _rightTangentPoint;

}

@property (x) double x;                                    //@synthesize x=_x - In the implementation block
@property (y) double y;                                    //@synthesize y=_y - In the implementation block
@property (assign) CGPoint leftTangentPoint;               //@synthesize leftTangentPoint=_leftTangentPoint - In the implementation block
@property (assign) CGPoint rightTangentPoint;              //@synthesize rightTangentPoint=_rightTangentPoint - In the implementation block
@property (assign) double roundness;                       //@synthesize roundness=_roundness - In the implementation block
@property (assign) double smoothness;                      //@synthesize smoothness=_smoothness - In the implementation block
@property (assign) CGPoint CGPoint; 
+(id)pointWithCGPoint:(CGPoint)arg1 ;
+(id)pointWithX:(double)arg1 y:(double)arg2 ;
-(double)x;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)y;
-(CGPoint)CGPoint;
-(id)initWithX:(double)arg1 y:(double)arg2 ;
-(void)setCGPoint:(CGPoint)arg1 ;
-(CGPoint)leftTangentPoint;
-(void)setLeftTangentPoint:(CGPoint)arg1 ;
-(CGPoint)rightTangentPoint;
-(void)setRightTangentPoint:(CGPoint)arg1 ;
-(double)roundness;
-(void)setRoundness:(double)arg1 ;
-(double)smoothness;
-(void)setSmoothness:(double)arg1 ;
@end

