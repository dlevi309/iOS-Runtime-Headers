/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSError;

@interface W5SpeedTestResult : NSObject <NSCopying, NSSecureCoding> {

	long long _direction;
	long long _size;
	CLLocation* _location;
	NSError* _error;
	double _speed;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double speed;                     //@synthesize speed=_speed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)size;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(CLLocation *)location;
-(void)setSize:(long long)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
@end

