/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasStructureType; 
@property (assign,nonatomic) int structureType; 
@property (assign,nonatomic) BOOL hasIntentType; 
@property (assign,nonatomic) int intentType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)intentType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasStructureType;
-(int)structureType;
-(void)setStructureType:(int)arg1 ;
-(void)setHasStructureType:(BOOL)arg1 ;
-(id)structureTypeAsString:(int)arg1 ;
-(int)StringAsStructureType:(id)arg1 ;
-(void)setIntentType:(int)arg1 ;
-(void)setHasIntentType:(BOOL)arg1 ;
-(BOOL)hasIntentType;
-(id)intentTypeAsString:(int)arg1 ;
-(int)StringAsIntentType:(id)arg1 ;
@end

