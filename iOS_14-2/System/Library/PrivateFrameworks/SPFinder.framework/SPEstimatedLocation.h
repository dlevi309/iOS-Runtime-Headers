/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <SPFinder/SPFinder-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber;

@interface SPEstimatedLocation : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	double _altitude;
	double _verticalAccuracy;
	double _speed;
	double _speedAccuracy;
	double _course;
	double _courseAccuracy;
	NSNumber* _floorLevel;

}

@property (nonatomic,copy) NSDate * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) double speed;                           //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double speedAccuracy;                   //@synthesize speedAccuracy=_speedAccuracy - In the implementation block
@property (assign,nonatomic) double course;                          //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) double courseAccuracy;                  //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * floorLevel;                    //@synthesize floorLevel=_floorLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(double)latitude;
-(void)setSpeed:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(double)speed;
-(double)speedAccuracy;
-(double)verticalAccuracy;
-(NSDate *)timestamp;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(void)setVerticalAccuracy:(double)arg1 ;
-(NSNumber *)floorLevel;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11 ;
-(void)setFloorLevel:(NSNumber *)arg1 ;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAcuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11 ;
-(double)courseAccuracy;
-(id)initWithCoder:(id)arg1 ;
-(double)horizontalAccuracy;
-(void)setCourseAccuracy:(double)arg1 ;
-(void)setSpeedAccuracy:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAcuracy:(double)arg4 ;
@end

