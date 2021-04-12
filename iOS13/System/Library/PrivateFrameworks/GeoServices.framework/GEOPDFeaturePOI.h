/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_building : 1;
		unsigned wrote_directoryGroup : 1;
		unsigned wrote_levels : 1;
		unsigned wrote_venueContainer : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)levelType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)levels;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readVenueContainer;
-(void)_readBuilding;
-(void)_readLevels;
-(void)_addNoFlagsLevel:(id)arg1 ;
-(GEOPDVenueContainer *)venueContainer;
-(GEOPDVenueBuilding *)building;
-(void)setVenueContainer:(GEOPDVenueContainer *)arg1 ;
-(void)setBuilding:(GEOPDVenueBuilding *)arg1 ;
-(unsigned long long)levelsCount;
-(void)clearLevels;
-(id)levelAtIndex:(unsigned long long)arg1 ;
-(void)addLevel:(id)arg1 ;
-(BOOL)hasVenueContainer;
-(BOOL)hasBuilding;
-(void)_readDirectoryGroup;
-(GEOPDVenueDirectoryGroup *)directoryGroup;
-(void)setDirectoryGroup:(GEOPDVenueDirectoryGroup *)arg1 ;
-(BOOL)hasDirectoryGroup;
@end

