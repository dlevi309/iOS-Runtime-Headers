/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)latitude;
-(id)initFromECEFCoordinate:(id)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(id)init;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 andAltitude:(double)arg3 ;
-(void)setFromECEFCoordinate:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setFromLatitude:(double)arg1 longitude:(double)arg2 andAltitude:(double)arg3 ;
@end

