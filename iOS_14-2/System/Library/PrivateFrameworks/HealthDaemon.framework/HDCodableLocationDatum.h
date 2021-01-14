/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableLocationDatum : PBCodable <NSCopying> {

	double _altitude;
	double _course;
	double _horizontalAccuracy;
	double _latitude;
	double _longitude;
	double _speed;
	double _timestamp;
	double _verticalAccuracy;
	SCD_Struct_HD8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                        //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
-(void)setCourse:(double)arg1 ;
-(double)course;
-(id)dictionaryRepresentation;
-(double)latitude;
-(void)setSpeed:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(double)altitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(double)speed;
-(double)verticalAccuracy;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(double)timestamp;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(BOOL)hasSpeed;
-(BOOL)hasVerticalAccuracy;
-(void)setHasSpeed:(BOOL)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasHorizontalAccuracy;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(double)horizontalAccuracy;
-(BOOL)hasCourse;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

