/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTraitsTransitScheduleTimeRange* _timeRange;
	unsigned _numAdditionalDepartures;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasTimeRange; 
@property (nonatomic,retain) GEOTraitsTransitScheduleTimeRange * timeRange; 
@property (assign,nonatomic) BOOL hasNumAdditionalDepartures; 
@property (assign,nonatomic) unsigned numAdditionalDepartures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)numAdditionalDepartures;
-(void)setTimeRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
-(GEOTraitsTransitScheduleTimeRange *)timeRange;
-(void)setNumAdditionalDepartures:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned)arg3 ;
-(id)description;
-(BOOL)hasNumAdditionalDepartures;
-(void)setHasNumAdditionalDepartures:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTimeRange;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

