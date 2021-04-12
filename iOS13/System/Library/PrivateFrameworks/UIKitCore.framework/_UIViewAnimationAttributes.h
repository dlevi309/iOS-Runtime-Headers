/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

	double _duration;
	double _delay;
	unsigned long long _options;
	BOOL _hasSpringAttributes;
	double _springDamping;
	double _springVelocity;
	double _springMass;
	double _springStiffness;
	long long _curve;

}

@property (getter=_duration,nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (getter=_delay,nonatomic,readonly) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (getter=_curve,nonatomic,readonly) long long curve;                                     //@synthesize curve=_curve - In the implementation block
@property (getter=_hasSpringAttributes,nonatomic,readonly) BOOL hasSpringAttributes;              //@synthesize hasSpringAttributes=_hasSpringAttributes - In the implementation block
@property (getter=_springDamping,nonatomic,readonly) double springDamping;                        //@synthesize springDamping=_springDamping - In the implementation block
@property (getter=_springVelocity,nonatomic,readonly) double springVelocity;                      //@synthesize springVelocity=_springVelocity - In the implementation block
@property (getter=_springMass,nonatomic,readonly) double springMass;                              //@synthesize springMass=_springMass - In the implementation block
@property (getter=_springStiffness,nonatomic,readonly) double springStiffness;                    //@synthesize springStiffness=_springStiffness - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_delay;
-(double)_duration;
-(long long)curve;
-(long long)_curve;
-(BOOL)_hasSpringAttributes;
-(double)_springDamping;
-(double)_springVelocity;
-(double)_springMass;
-(double)_springStiffness;
@end

