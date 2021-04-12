/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOLPRTimeCondition : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _dayOfMonths;
	SCD_Struct_GE90* _dayOfWeeks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) unsigned long long dayOfWeeksCount; 
@property (nonatomic,readonly) int* dayOfWeeks; 
@property (nonatomic,readonly) unsigned long long dayOfMonthsCount; 
@property (nonatomic,readonly) unsigned* dayOfMonths; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned*)dayOfMonths;
-(void)addDayOfWeek:(int)arg1 ;
-(void)addDayOfMonth:(unsigned)arg1 ;
-(unsigned long long)dayOfWeeksCount;
-(void)clearDayOfWeeks;
-(int)dayOfWeekAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dayOfMonthsCount;
-(void)clearDayOfMonths;
-(unsigned)dayOfMonthAtIndex:(unsigned long long)arg1 ;
-(void)setDayOfWeeks:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)dayOfWeeksAsString:(int)arg1 ;
-(int)StringAsDayOfWeeks:(id)arg1 ;
-(void)setDayOfMonths:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int*)dayOfWeeks;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

