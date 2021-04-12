/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOWiFiQualityHours, NSMutableArray;

@interface GEOWiFiQualityProfile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOWiFiQualityHours* _hours;
	NSMutableArray* _qualities;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasHours; 
@property (nonatomic,retain) GEOWiFiQualityHours * hours; 
@property (nonatomic,retain) NSMutableArray * qualities; 
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasHours;
-(NSMutableArray *)qualities;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHours:(GEOWiFiQualityHours *)arg1 ;
-(void)addQualities:(id)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)setQualities:(NSMutableArray *)arg1 ;
-(GEOWiFiQualityHours *)hours;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

