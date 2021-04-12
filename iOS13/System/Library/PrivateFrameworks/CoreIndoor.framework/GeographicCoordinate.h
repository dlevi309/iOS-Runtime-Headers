/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


@interface GeographicCoordinate : NSObject {

	double _latitude;
	double _longitude;
	double _altitude;

}

@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double altitude;               //@synthesize altitude=_altitude - In the implementation block
+(id)fromECEFCoordinate:(id)arg1 ;
-(id)init;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 andAltitude:(double)arg3 ;
-(id)initFromECEFCoordinate:(id)arg1 ;
@end

