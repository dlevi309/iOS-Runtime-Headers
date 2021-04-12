/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double timestampSince1970;              //@synthesize timestampSince1970=_timestampSince1970 - In the implementation block
@property (assign) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (assign) double altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (assign) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign) double verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign) double speed;                           //@synthesize speed=_speed - In the implementation block
@property (assign) double course;                          //@synthesize course=_course - In the implementation block
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
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
-(double)course;
-(void)setTimestampSince1970:(double)arg1 ;
-(double)timestampSince1970;
-(id)initWithCLLocation:(id)arg1 timestamp:(double)arg2 ;
@end

