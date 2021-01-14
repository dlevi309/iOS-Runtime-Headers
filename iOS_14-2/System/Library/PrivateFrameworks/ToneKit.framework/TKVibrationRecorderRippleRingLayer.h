/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer {

	double _creationTimestamp;
	double _ringSpeed;
	CGPoint _normalizedRingLocation;

}

@property (nonatomic,readonly) CGPoint normalizedRingLocation;              //@synthesize normalizedRingLocation=_normalizedRingLocation - In the implementation block
@property (nonatomic,readonly) double ringSpeed;                            //@synthesize ringSpeed=_ringSpeed - In the implementation block
-(id)init;
-(void)reset;
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(CGPoint)arg2 ringSpeed:(double)arg3 ;
-(CGPoint)normalizedRingLocation;
-(double)ringSpeed;
@end

