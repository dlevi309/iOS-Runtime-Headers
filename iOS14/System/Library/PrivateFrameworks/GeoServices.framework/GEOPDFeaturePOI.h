/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueBuilding, GEOPDVenueDirectoryGroup, NSMutableArray, GEOPDVenueContainer;

@interface GEOPDFeaturePOI : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDVenueBuilding* _building;
	GEOPDVenueDirectoryGroup* _directoryGroup;
	NSMutableArray* _levels;
	GEOPDVenueContainer* _venueContainer;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_building : 1;
		unsigned read_directoryGroup : 1;
		unsigned read_levels : 1;
		unsigned read_venueContainer : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVenueContainer; 
@property (nonatomic,retain) GEOPDVenueContainer * venueContainer; 
@property (nonatomic,readonly) BOOL hasBuilding; 
@property (nonatomic,retain) GEOPDVenueBuilding * building; 
@property (nonatomic,retain) NSMutableArray * levels; 
@property (nonatomic,readonly) BOOL hasDirectoryGroup; 
@property (nonatomic,retain) GEOPDVenueDirectoryGroup * directoryGroup; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)levelType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addLevel:(id)arg1 ;
-(GEOPDVenueBuilding *)building;
-(unsigned long long)levelsCount;
-(void)clearLevels;
-(GEOPDVenueContainer *)venueContainer;
-(void)setVenueContainer:(GEOPDVenueContainer *)arg1 ;
-(void)setBuilding:(GEOPDVenueBuilding *)arg1 ;
-(id)levelAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVenueContainer;
-(BOOL)hasBuilding;
-(GEOPDVenueDirectoryGroup *)directoryGroup;
-(void)setDirectoryGroup:(GEOPDVenueDirectoryGroup *)arg1 ;
-(BOOL)hasDirectoryGroup;
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

