/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _days;
	NSMutableArray* _timeRanges;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_days : 1;
		unsigned read_timeRanges : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_days : 1;
		unsigned wrote_timeRanges : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)timeRangeType;
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
-(NSMutableArray *)timeRanges;
-(void)addTimeRange:(id)arg1 ;
-(void)addDay:(int)arg1 ;
-(id)initWithPlaceDataHours:(id)arg1 ;
-(id)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)_addNoFlagsDay:(int)arg1 ;
-(void)_addNoFlagsTimeRange:(id)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
@end

