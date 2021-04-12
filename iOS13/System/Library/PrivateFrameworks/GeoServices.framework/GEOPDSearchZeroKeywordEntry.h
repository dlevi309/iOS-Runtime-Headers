/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _categoryIndexs;
	unsigned _dayOfWeek;
	unsigned _hourOfDay;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay; 
@property (nonatomic,readonly) unsigned long long categoryIndexsCount; 
@property (nonatomic,readonly) unsigned* categoryIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)dayOfWeek;
-(unsigned)hourOfDay;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)setHourOfDay:(unsigned)arg1 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(BOOL)hasHourOfDay;
-(unsigned long long)categoryIndexsCount;
-(void)clearCategoryIndexs;
-(unsigned)categoryIndexAtIndex:(unsigned long long)arg1 ;
-(void)addCategoryIndex:(unsigned)arg1 ;
-(unsigned*)categoryIndexs;
-(void)setCategoryIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

