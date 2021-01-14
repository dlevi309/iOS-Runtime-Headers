/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVRCGameControllerEvent : NSObject <NSSecureCoding> {

	BOOL _down;
	double _timestamp;
	CGPoint _joystickLocation;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=isDown,nonatomic,readonly) BOOL down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,readonly) CGPoint joystickLocation;              //@synthesize joystickLocation=_joystickLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDown;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithTimestamp:(double)arg1 isDown:(BOOL)arg2 joystickLocation:(CGPoint)arg3 ;
-(CGPoint)joystickLocation;
@end

