/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSSearchStructureIntentRequestType : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _intentType;
	int _structureType;
	struct {
		unsigned has_intentType : 1;
		unsigned has_structureType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStructureType; 
@property (assign,nonatomic) int structureType; 
@property (assign,nonatomic) BOOL hasIntentType; 
@property (assign,nonatomic) int intentType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setStructureType:(int)arg1 ;
-(int)structureType;
-(void)setHasStructureType:(BOOL)arg1 ;
-(BOOL)hasStructureType;
-(void)setHasIntentType:(BOOL)arg1 ;
-(id)structureTypeAsString:(int)arg1 ;
-(int)StringAsStructureType:(id)arg1 ;
-(BOOL)hasIntentType;
-(id)intentTypeAsString:(int)arg1 ;
-(int)StringAsIntentType:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setIntentType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)intentType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

