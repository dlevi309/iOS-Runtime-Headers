/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDHoursThreshold;

@interface GEOPDHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _days;
	GEOPDLocalTimeRange* _timeRanges;
	unsigned long long _timeRangesCount;
	unsigned long long _timeRangesSpace;
	GEOPDHoursThreshold* _hoursThreshold;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_days : 1;
		unsigned read_timeRanges : 1;
		unsigned read_hoursThreshold : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,readonly) unsigned long long timeRangesCount; 
@property (nonatomic,readonly) GEOPDLocalTimeRange* timeRanges; 
@property (nonatomic,readonly) BOOL hasHoursThreshold; 
@property (nonatomic,retain) GEOPDHoursThreshold * hoursThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)_allHoursForPlaceData:(id)arg1 ;
+(BOOL)operatingHoursAvailableForPlaceData:(id)arg1 ;
+(BOOL)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
+(id)completeOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
-(int*)days;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOPDHoursThreshold *)hoursThreshold;
-(BOOL)hasHoursThreshold;
-(GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)addDay:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addTimeRange:(GEOPDLocalTimeRange)arg1 ;
-(void)setHoursThreshold:(GEOPDHoursThreshold *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)daysCount;
-(void)clearDays;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDLocalTimeRange*)timeRanges;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeRangesCount;
-(void)clearTimeRanges;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(void)setTimeRanges:(GEOPDLocalTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

