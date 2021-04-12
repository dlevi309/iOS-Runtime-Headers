/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitLeg : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _restrictedToSectionIndexs;
	int _sectionOptionIndex;
	struct {
		unsigned has_sectionOptionIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSectionOptionIndex; 
@property (assign,nonatomic) int sectionOptionIndex; 
@property (nonatomic,readonly) unsigned long long restrictedToSectionIndexsCount; 
@property (nonatomic,readonly) int* restrictedToSectionIndexs; 
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
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSectionOptionIndex:(int)arg1 ;
-(void)addRestrictedToSectionIndex:(int)arg1 ;
-(unsigned long long)restrictedToSectionIndexsCount;
-(void)clearRestrictedToSectionIndexs;
-(int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1 ;
-(int)sectionOptionIndex;
-(void)setHasSectionOptionIndex:(BOOL)arg1 ;
-(BOOL)hasSectionOptionIndex;
-(int*)restrictedToSectionIndexs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRestrictedToSectionIndexs:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

