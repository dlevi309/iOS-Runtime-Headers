/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DKDrawingStrokePoint : NSObject <NSCopying> {

	double _force;
	double _velocity;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double force;                  //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double velocity;               //@synthesize velocity=_velocity - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)location;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(double)force;
-(void)setForce:(double)arg1 ;
@end

