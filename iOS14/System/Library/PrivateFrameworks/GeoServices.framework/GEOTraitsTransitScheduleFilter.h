/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTraitsTransitScheduleModeFilter* _highFrequencyFilter;
	GEOTraitsTransitScheduleModeFilter* _lowFrequencyFilter;
	GEOTraitsTransitScheduleTimeRange* _operatingHoursRange;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_highFrequencyFilter : 1;
		unsigned read_lowFrequencyFilter : 1;
		unsigned read_operatingHoursRange : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHighFrequencyFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleModeFilter * highFrequencyFilter; 
@property (nonatomic,readonly) BOOL hasLowFrequencyFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleModeFilter * lowFrequencyFilter; 
@property (nonatomic,readonly) BOOL hasOperatingHoursRange; 
@property (nonatomic,retain) GEOTraitsTransitScheduleTimeRange * operatingHoursRange; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOTraitsTransitScheduleModeFilter *)highFrequencyFilter;
-(BOOL)hasLowFrequencyFilter;
-(void)mergeFrom:(id)arg1 ;
-(void)setOperatingHoursRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasHighFrequencyFilter;
-(id)description;
-(GEOTraitsTransitScheduleModeFilter *)lowFrequencyFilter;
-(GEOTraitsTransitScheduleTimeRange *)operatingHoursRange;
-(BOOL)hasOperatingHoursRange;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLowFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
-(void)setHighFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

