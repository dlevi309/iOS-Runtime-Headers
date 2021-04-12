/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@interface _MKJunctionElement : NSObject {

	CGPoint _leftBasePoint;
	CGPoint _rightBasePoint;
	double _angle;

}

@property (assign,nonatomic) CGPoint leftBasePoint;               //@synthesize leftBasePoint=_leftBasePoint - In the implementation block
@property (assign,nonatomic) CGPoint rightBasePoint;              //@synthesize rightBasePoint=_rightBasePoint - In the implementation block
@property (assign,nonatomic) double angle;                        //@synthesize angle=_angle - In the implementation block
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(CGPoint)leftBasePoint;
-(CGPoint)rightBasePoint;
-(CGPoint)leftEdgePointAtDistanceFromBase:(double)arg1 ;
-(CGPoint)rightEdgePointAtDistanceFromBase:(double)arg1 ;
-(void)setLeftBasePoint:(CGPoint)arg1 ;
-(void)setRightBasePoint:(CGPoint)arg1 ;
@end

