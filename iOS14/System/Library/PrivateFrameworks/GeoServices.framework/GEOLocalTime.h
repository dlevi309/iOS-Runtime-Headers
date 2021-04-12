/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasTimeRoundedToHour; 
@property (assign,nonatomic) unsigned long long timeRoundedToHour; 
@property (assign,nonatomic) BOOL hasTimezoneOffsetFromGmtInHours; 
@property (assign,nonatomic) float timezoneOffsetFromGmtInHours; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(float)timezoneOffsetFromGmtInHours;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasTimezoneOffsetFromGmtInHours;
-(void)setTimeRoundedToHour:(unsigned long long)arg1 ;
-(id)description;
-(void)setHasTimezoneOffsetFromGmtInHours:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)timeRoundedToHour;
-(BOOL)hasTimeRoundedToHour;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTimezoneOffsetFromGmtInHours:(float)arg1 ;
-(id)initWithCFAbsoluteTime:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTimeRoundedToHour:(BOOL)arg1 ;
@end

