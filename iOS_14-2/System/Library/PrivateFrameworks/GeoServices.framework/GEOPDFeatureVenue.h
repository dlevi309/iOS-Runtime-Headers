/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDVenueContainer;

@interface GEOPDFeatureVenue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _buildings;
	NSMutableArray* _levels;
	GEOPDVenueContainer* _venueContainer;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_buildings : 1;
		unsigned read_levels : 1;
		unsigned read_venueContainer : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVenueContainer; 
@property (nonatomic,retain) GEOPDVenueContainer * venueContainer; 
@property (nonatomic,retain) NSMutableArray * buildings; 
@property (nonatomic,retain) NSMutableArray * levels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)levelType;
+(Class)buildingType;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)buildings;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addLevel:(id)arg1 ;
-(unsigned long long)levelsCount;
-(void)clearLevels;
-(GEOPDVenueContainer *)venueContainer;
-(void)setVenueContainer:(GEOPDVenueContainer *)arg1 ;
-(id)levelAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVenueContainer;
-(void)addBuilding:(id)arg1 ;
-(unsigned long long)buildingsCount;
-(void)clearBuildings;
-(id)buildingAtIndex:(unsigned long long)arg1 ;
-(void)setBuildings:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)levels;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

