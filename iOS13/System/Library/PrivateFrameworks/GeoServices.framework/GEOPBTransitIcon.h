/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@property (assign,nonatomic) BOOL hasCartoId; 
@property (assign,nonatomic) unsigned cartoId; 
@property (assign,nonatomic) BOOL hasTransitTypeEnumValue; 
@property (assign,nonatomic) unsigned transitTypeEnumValue; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasStyleAttributes;
-(int)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(unsigned)cartoId;
-(unsigned)transitTypeEnumValue;
-(void)setCartoId:(unsigned)arg1 ;
-(void)setHasCartoId:(BOOL)arg1 ;
-(BOOL)hasCartoId;
-(void)setTransitTypeEnumValue:(unsigned)arg1 ;
-(void)setHasTransitTypeEnumValue:(BOOL)arg1 ;
-(BOOL)hasTransitTypeEnumValue;
@end

