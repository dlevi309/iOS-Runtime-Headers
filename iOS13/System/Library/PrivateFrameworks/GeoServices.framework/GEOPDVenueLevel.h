/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId; 
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) int ordinal; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(GEOPDVenueLabel *)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)levelId;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(BOOL)hasLevelId;
-(int)ordinal;
-(void)setOrdinal:(int)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(BOOL)hasOrdinal;
@end

