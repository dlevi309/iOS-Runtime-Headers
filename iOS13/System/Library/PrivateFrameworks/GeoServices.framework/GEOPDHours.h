/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDHoursThreshold;

@interface GEOPDHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _days;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_days : 1;
		unsigned wrote_timeRanges : 1;
		unsigned wrote_hoursThreshold : 1;
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
-(id)init;
-(void)dealloc;
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
-(void)clearTimeRanges;
-(void)_readDays;
-(void)_readTimeRanges;
-(unsigned long long)daysCount;
-(void)clearDays;
-(unsigned long long)timeRangesCount;
-(int*)days;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(GEOPDLocalTimeRange*)timeRanges;
-(void)setTimeRanges:(GEOPDLocalTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(void)_readHoursThreshold;
-(GEOPDHoursThreshold *)hoursThreshold;
-(void)setHoursThreshold:(GEOPDHoursThreshold *)arg1 ;
-(BOOL)hasHoursThreshold;
-(void)addTimeRange:(GEOPDLocalTimeRange)arg1 ;
-(void)addDay:(int)arg1 ;
-(GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)_addNoFlagsDay:(int)arg1 ;
-(void)_addNoFlagsTimeRange:(GEOPDLocalTimeRange)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
@end

