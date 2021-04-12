/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)startDate;
-(unsigned long long)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(unsigned long long)arg1 ;
-(void)setEndDate:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearTimeRanges;
-(unsigned long long)timeRangesCount;
-(GEOPDLocalTimeRange*)timeRanges;
-(void)setTimeRanges:(GEOPDLocalTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(void)addTimeRange:(GEOPDLocalTimeRange)arg1 ;
-(GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(BOOL)hasValidStartAndEndDates;
@end

