/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVelocity:(double)arg1 ;
-(double)force;
-(double)velocity;
-(id)init;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setForce:(double)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

