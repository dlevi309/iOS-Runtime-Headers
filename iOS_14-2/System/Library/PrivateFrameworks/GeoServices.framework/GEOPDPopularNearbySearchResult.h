/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion, NSString;

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	NSString* _sectionHeader;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isChainResultSet;
	struct {
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_sectionHeader : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)isChainResultSet;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOMapRegion *)displayMapRegion;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIsChainResultSet;
-(id)description;
-(void)setSectionHeader:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSectionHeader;
-(NSString *)sectionHeader;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

