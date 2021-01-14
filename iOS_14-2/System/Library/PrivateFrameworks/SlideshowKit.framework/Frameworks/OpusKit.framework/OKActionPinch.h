/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionPinchExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionPinch : OKAction <OKActionPinchExports, NSSecureCoding> {

	double _scale;
	double _angle;
	double _velocity;
	CGPoint _translation;

}

@property (assign,nonatomic) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double angle;                     //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) CGPoint translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) double velocity;                  //@synthesize velocity=_velocity - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)pinchActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 scale:(double)arg4 angle:(double)arg5 translation:(CGPoint)arg6 velocity:(double)arg7 context:(id)arg8 ;
-(void)setVelocity:(double)arg1 ;
-(double)angle;
-(double)velocity;
-(id)init;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTranslation:(CGPoint)arg1 ;
-(void)setAngle:(double)arg1 ;
-(CGPoint)translation;
-(void)setScale:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

