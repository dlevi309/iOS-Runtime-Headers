/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitSectionOption : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _sections;
	unsigned _defaultSectionIndex;
	struct {
		unsigned has_defaultSectionIndex : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long sectionsCount; 
@property (nonatomic,readonly) unsigned* sections; 
@property (assign,nonatomic) BOOL hasDefaultSectionIndex; 
@property (assign,nonatomic) unsigned defaultSectionIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)sectionAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned*)sections;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addSection:(unsigned)arg1 ;
-(void)setDefaultSectionIndex:(unsigned)arg1 ;
-(void)setSections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)defaultSectionIndex;
-(void)setHasDefaultSectionIndex:(BOOL)arg1 ;
-(BOOL)hasDefaultSectionIndex;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

