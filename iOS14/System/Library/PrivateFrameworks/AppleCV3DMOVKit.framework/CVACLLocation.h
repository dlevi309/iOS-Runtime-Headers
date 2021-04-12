/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@interface CVACLLocation : NSObject {

	double _timestamp;
	double _timestampSince1970;
	double _latitude;
	double _longitude;
	double _altitude;
	double _horizontalAccuracy;
	double _verticalAccuracy;
	double _speed;
	double _course;

}

@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double timestampSince1970;              //@synthesize timestampSince1970=_timestampSince1970 - In the implementation block
@property (assign,nonatomic) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) double speed;                           //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double course;                          //@synthesize course=_course - In the implementation block
-(void)setCourse:(double)arg1 ;
-(double)course;
-(double)latitude;
-(void)setSpeed:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(double)speed;
-(double)verticalAccuracy;
-(double)timestamp;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)dictionary;
-(void)setVerticalAccuracy:(double)arg1 ;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setTimestampSince1970:(double)arg1 ;
-(double)timestampSince1970;
-(id)initWithCLLocation:(id)arg1 timestamp:(double)arg2 ;
@end

