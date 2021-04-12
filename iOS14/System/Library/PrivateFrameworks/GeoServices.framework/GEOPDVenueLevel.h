/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueLevel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDVenueLabel* _label;
	unsigned long long _levelId;
	int _ordinal;
	struct {
		unsigned has_levelId : 1;
		unsigned has_ordinal : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId; 
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) int ordinal; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)levelId;
-(void)readAll:(BOOL)arg1 ;
-(int)ordinal;
-(BOOL)hasLabel;
-(id)jsonRepresentation;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setOrdinal:(int)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLevelId;
-(BOOL)hasOrdinal;
-(GEOPDVenueLabel *)label;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

