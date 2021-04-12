/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(double)horizontalAccuracy;
-(void)setAltitude:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setCourse:(double)arg1 ;
-(double)verticalAccuracy;
-(double)speedAccuracy;
-(double)course;
-(double)courseAccuracy;
-(void)setCourseAccuracy:(double)arg1 ;
-(void)setSpeedAccuracy:(double)arg1 ;
-(NSNumber *)floorLevel;
-(void)setFloorLevel:(NSNumber *)arg1 ;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11 ;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAcuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11 ;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAcuracy:(double)arg4 ;
@end

