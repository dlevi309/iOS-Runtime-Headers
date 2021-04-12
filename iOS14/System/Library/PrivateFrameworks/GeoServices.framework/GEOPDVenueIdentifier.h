/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOPDVenueIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _containedBys;
	SCD_Struct_GE92* _sectionIds;
	unsigned long long _buildingId;
	unsigned long long _featureId;
	unsigned long long _fixtureId;
	unsigned long long _geminiId;
	unsigned long long _levelId;
	unsigned long long _unitId;
	unsigned long long _venueGeminiId;
	unsigned long long _venueId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _levelOrdinal;
	struct {
		unsigned has_buildingId : 1;
		unsigned has_featureId : 1;
		unsigned has_fixtureId : 1;
		unsigned has_geminiId : 1;
		unsigned has_levelId : 1;
		unsigned has_unitId : 1;
		unsigned has_venueGeminiId : 1;
		unsigned has_venueId : 1;
		unsigned has_levelOrdinal : 1;
		unsigned read_unknownFields : 1;
		unsigned read_containedBys : 1;
		unsigned read_sectionIds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId; 
@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId; 
@property (nonatomic,readonly) unsigned long long sectionIdsCount; 
@property (nonatomic,readonly) unsigned long long* sectionIds; 
@property (assign,nonatomic) BOOL hasUnitId; 
@property (assign,nonatomic) unsigned long long unitId; 
@property (assign,nonatomic) BOOL hasFixtureId; 
@property (assign,nonatomic) unsigned long long fixtureId; 
@property (assign,nonatomic) BOOL hasLevelOrdinal; 
@property (assign,nonatomic) int levelOrdinal; 
@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (nonatomic,readonly) unsigned long long containedBysCount; 
@property (nonatomic,readonly) unsigned long long* containedBys; 
@property (assign,nonatomic) BOOL hasGeminiId; 
@property (assign,nonatomic) unsigned long long geminiId; 
@property (assign,nonatomic) BOOL hasVenueGeminiId; 
@property (assign,nonatomic) unsigned long long venueGeminiId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)venueId;
-(unsigned long long)levelId;
-(void)readAll:(BOOL)arg1 ;
-(void)addContainedBy:(unsigned long long)arg1 ;
-(void)setVenueGeminiId:(unsigned long long)arg1 ;
-(unsigned long long)containedBysCount;
-(void)clearContainedBys;
-(unsigned long long)containedByAtIndex:(unsigned long long)arg1 ;
-(void)setSectionIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)containedBys;
-(void)setContainedBys:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasGeminiId;
-(unsigned long long)venueGeminiId;
-(void)setHasVenueGeminiId:(BOOL)arg1 ;
-(BOOL)hasVenueGeminiId;
-(BOOL)hasVenueId;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(unsigned long long)unitId;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(void)clearSectionIds;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long*)sectionIds;
-(id)initWithDictionary:(id)arg1 ;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(unsigned long long)sectionIdsCount;
-(unsigned long long)featureId;
-(id)description;
-(BOOL)hasBuildingId;
-(BOOL)hasLevelOrdinal;
-(BOOL)hasFixtureId;
-(int)levelOrdinal;
-(unsigned long long)sectionIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)geminiId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)buildingId;
-(BOOL)hasUnitId;
-(unsigned long long)fixtureId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setGeminiId:(unsigned long long)arg1 ;
-(void)setHasGeminiId:(BOOL)arg1 ;
-(id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 ;
-(void)setLevelOrdinal:(int)arg1 ;
-(void)setHasLevelOrdinal:(BOOL)arg1 ;
-(void)setHasUnitId:(BOOL)arg1 ;
-(void)setFixtureId:(unsigned long long)arg1 ;
-(void)setHasFixtureId:(BOOL)arg1 ;
-(void)addSectionId:(unsigned long long)arg1 ;
-(id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifier:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLevelId;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setUnitId:(unsigned long long)arg1 ;
@end

