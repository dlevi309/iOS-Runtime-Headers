/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionPanExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionPan : OKAction <OKActionPanExports, NSSecureCoding> {

	unsigned long long _direction;
	CGPoint _translation;
	CGPoint _velocity;

}

@property (assign,nonatomic) CGPoint translation;                       //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                          //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)panActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7 ;
-(unsigned long long)direction;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocity;
-(id)init;
-(void)setDirection:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTranslation:(CGPoint)arg1 ;
-(CGPoint)translation;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

