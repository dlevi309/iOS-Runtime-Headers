/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIconDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOStyleAttributes, NSString;

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOStyleAttributes* _styleAttributes;
	unsigned _cartoId;
	unsigned _transitTypeEnumValue;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasCartoId; 
@property (assign,nonatomic) unsigned cartoId; 
@property (assign,nonatomic) BOOL hasTransitTypeEnumValue; 
@property (assign,nonatomic) unsigned transitTypeEnumValue; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasStyleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(unsigned)cartoID;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)cartoId;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(int)iconType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCartoId:(unsigned)arg1 ;
-(void)setTransitTypeEnumValue:(unsigned)arg1 ;
-(void)setHasCartoId:(BOOL)arg1 ;
-(unsigned)transitTypeEnumValue;
-(void)setHasTransitTypeEnumValue:(BOOL)arg1 ;
-(BOOL)hasTransitTypeEnumValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCartoId;
@end

