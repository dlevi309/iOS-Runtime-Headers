/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOStyleAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	unsigned long long _customIconId;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,retain) NSMutableArray * attributes; 
@property (assign,nonatomic) BOOL hasCustomIconId; 
@property (assign,nonatomic) unsigned long long customIconId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(id)attributesForTransitLine:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(id)attributesForTransitSystem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearAttributes;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)attributes;
-(id)description;
-(void)addAttribute:(id)arg1 ;
-(id)initWithGEOFeatureStyleAttributes:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)attributesCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCustomIconId:(unsigned long long)arg1 ;
-(BOOL)hasCustomIconId;
-(unsigned long long)customIconId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasCustomIconId:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

