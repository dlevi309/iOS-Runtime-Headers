/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKCurvePoint : NSObject {

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
+(id)pointWithX:(double)arg1 y:(double)arg2 ;
+(id)pointWithCGPoint:(CGPoint)arg1 ;
-(double)x;
-(double)y;
-(void)setSmoothness:(double)arg1 ;
-(double)smoothness;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 ;
-(void)setCGPoint:(CGPoint)arg1 ;
-(CGPoint)CGPoint;
-(CGPoint)leftTangentPoint;
-(void)setLeftTangentPoint:(CGPoint)arg1 ;
-(CGPoint)rightTangentPoint;
-(void)setRightTangentPoint:(CGPoint)arg1 ;
-(double)roundness;
-(void)setRoundness:(double)arg1 ;
@end

