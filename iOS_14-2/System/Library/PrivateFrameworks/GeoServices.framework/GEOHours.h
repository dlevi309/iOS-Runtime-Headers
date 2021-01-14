/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _days;
	NSMutableArray* _timeRanges;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_days : 1;
		unsigned read_timeRanges : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)timeRangeType;
+(BOOL)isValid:(id)arg1 ;
-(int*)days;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(id)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)addDay:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addTimeRange:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)daysCount;
-(void)clearDays;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)timeRanges;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeRangesCount;
-(id)initWithPlaceDataHours:(id)arg1 ;
-(void)clearTimeRanges;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

