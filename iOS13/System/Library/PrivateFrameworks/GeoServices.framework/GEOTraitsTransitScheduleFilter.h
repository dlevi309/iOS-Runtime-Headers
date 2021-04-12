/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_highFrequencyFilter : 1;
		unsigned wrote_lowFrequencyFilter : 1;
		unsigned wrote_operatingHoursRange : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOTraitsTransitScheduleTimeRange *)operatingHoursRange;
-(void)setOperatingHoursRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(void)_readHighFrequencyFilter;
-(void)_readLowFrequencyFilter;
-(void)_readOperatingHoursRange;
-(GEOTraitsTransitScheduleModeFilter *)highFrequencyFilter;
-(GEOTraitsTransitScheduleModeFilter *)lowFrequencyFilter;
-(void)setHighFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
-(void)setLowFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
-(BOOL)hasHighFrequencyFilter;
-(BOOL)hasLowFrequencyFilter;
@end

