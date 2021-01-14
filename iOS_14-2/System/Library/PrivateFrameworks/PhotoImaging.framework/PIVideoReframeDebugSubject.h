/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVelocity:(CGVector)arg1 ;
-(CGVector)velocity;
-(id)description;
-(CGVector)acceleration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAcceleration:(CGVector)arg1 ;
@end

