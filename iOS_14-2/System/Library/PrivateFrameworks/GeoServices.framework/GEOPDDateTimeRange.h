/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDDateTimeRange : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDLocalTimeRange* _timeRanges;
	unsigned long long _timeRangesCount;
	unsigned long long _timeRangesSpace;
	unsigned long long _endDate;
	unsigned long long _startDate;
	struct {
		unsigned has_endDate : 1;
		unsigned has_startDate : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasValidStartAndEndDates; 
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) unsigned long long startDate; 
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) unsigned long long endDate; 
@property (nonatomic,readonly) unsigned long long timeRangesCount; 
@property (nonatomic,readonly) GEOPDLocalTimeRange* timeRanges; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)endDate;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setStartDate:(unsigned long long)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)startDate;
-(GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addTimeRange:(GEOPDLocalTimeRange)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDLocalTimeRange*)timeRanges;
-(unsigned long long)timeRangesCount;
-(void)clearTimeRanges;
-(void)setTimeRanges:(GEOPDLocalTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasEndDate;
-(BOOL)hasValidStartAndEndDates;
@end

