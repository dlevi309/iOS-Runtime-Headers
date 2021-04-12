/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasMaxItemsPerRow; 
@property (assign,nonatomic) unsigned maxItemsPerRow; 
@property (assign,nonatomic) BOOL hasMaxRowCount; 
@property (assign,nonatomic) unsigned maxRowCount; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setMaxItemsPerRow:(unsigned)arg1 ;
-(void)setMaxRowCount:(unsigned)arg1 ;
-(unsigned)maxRowCount;
-(unsigned)maxItemsPerRow;
-(void)setHasMaxItemsPerRow:(BOOL)arg1 ;
-(BOOL)hasMaxItemsPerRow;
-(void)setHasMaxRowCount:(BOOL)arg1 ;
-(BOOL)hasMaxRowCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

