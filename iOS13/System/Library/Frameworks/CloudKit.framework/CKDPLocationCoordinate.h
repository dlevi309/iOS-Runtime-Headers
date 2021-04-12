/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _course;
	double _horizontalAccuracy;
	double _latitude;
	double _longitude;
	double _speed;
	double _verticalAccuracy;
	CKDPDate* _timestamp;
	SCD_Struct_CK9 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                        //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) BOOL hasTimestamp; 
@property (nonatomic,retain) CKDPDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPDate *)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(CKDPDate *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)hasCourse;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
@end

