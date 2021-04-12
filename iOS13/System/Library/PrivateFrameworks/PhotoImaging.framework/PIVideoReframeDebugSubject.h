/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIReframeSubject.h>

@interface PIVideoReframeDebugSubject : PIReframeSubject {

	CGVector _velocity;
	CGVector _acceleration;

}

@property (assign) CGVector velocity;                  //@synthesize velocity=_velocity - In the implementation block
@property (assign) CGVector acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGVector)velocity;
-(void)setVelocity:(CGVector)arg1 ;
-(CGVector)acceleration;
-(void)setAcceleration:(CGVector)arg1 ;
@end

