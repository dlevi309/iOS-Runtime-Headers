/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _timeRoundedToHour;
	float _timezoneOffsetFromGmtInHours;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTimeRoundedToHour; 
@property (assign,nonatomic) unsigned long long timeRoundedToHour; 
@property (assign,nonatomic) BOOL hasTimezoneOffsetFromGmtInHours; 
@property (assign,nonatomic) float timezoneOffsetFromGmtInHours; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setTimeRoundedToHour:(unsigned long long)arg1 ;
-(void)setTimezoneOffsetFromGmtInHours:(float)arg1 ;
-(id)initWithCFAbsoluteTime:(double)arg1 ;
-(unsigned long long)timeRoundedToHour;
-(void)setHasTimeRoundedToHour:(BOOL)arg1 ;
-(BOOL)hasTimeRoundedToHour;
-(float)timezoneOffsetFromGmtInHours;
-(void)setHasTimezoneOffsetFromGmtInHours:(BOOL)arg1 ;
-(BOOL)hasTimezoneOffsetFromGmtInHours;
@end

