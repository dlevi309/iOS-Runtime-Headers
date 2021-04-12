/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOWiFiQualityHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _days;
	GEOWiFiQualityTimeRange* _timeRanges;
	unsigned long long _timeRangesCount;
	unsigned long long _timeRangesSpace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_days : 1;
		unsigned read_timeRanges : 1;
		unsigned wrote_days : 1;
		unsigned wrote_timeRanges : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,readonly) unsigned long long timeRangesCount; 
@property (nonatomic,readonly) GEOWiFiQualityTimeRange* timeRanges; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)clearTimeRanges;
-(void)_readDays;
-(void)_addNoFlagsDays:(int)arg1 ;
-(void)_readTimeRanges;
-(void)_addNoFlagsTimeRanges:(GEOWiFiQualityTimeRange)arg1 ;
-(unsigned long long)daysCount;
-(void)clearDays;
-(int)daysAtIndex:(unsigned long long)arg1 ;
-(void)addDays:(int)arg1 ;
-(unsigned long long)timeRangesCount;
-(GEOWiFiQualityTimeRange)timeRangesAtIndex:(unsigned long long)arg1 ;
-(void)addTimeRanges:(GEOWiFiQualityTimeRange)arg1 ;
-(int*)days;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(GEOWiFiQualityTimeRange*)timeRanges;
-(void)setTimeRanges:(GEOWiFiQualityTimeRange*)arg1 count:(unsigned long long)arg2 ;
@end

