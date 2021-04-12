/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {

	int _referenceFrame;
	double _latitude;
	double _longitude;
	double _uncertainty;
	NSDate* _date;
	double _speed;

}

@property (nonatomic,readonly) double speed;                    //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double latitude;                 //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double uncertainty;              //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) NSDate * date;                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int referenceFrame;              //@synthesize referenceFrame=_referenceFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)latitude;
-(double)longitude;
-(double)speed;
-(double)uncertainty;
-(int)referenceFrame;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 speed:(double)arg6 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 ;
-(id)coordinateToString;
@end

