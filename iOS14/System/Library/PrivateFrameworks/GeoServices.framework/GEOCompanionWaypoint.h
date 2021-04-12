/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapItemStorage, NSString, GEOWaypointTyped, GEOLocation;

@interface GEOCompanionWaypoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapItemStorage* _mapItem;
	NSString* _searchString;
	GEOWaypointTyped* _waypointTyped;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isCurrentLocation;
	struct {
		unsigned has_isCurrentLocation : 1;
		unsigned read_mapItem : 1;
		unsigned read_searchString : 1;
		unsigned read_waypointTyped : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) GEOLocation * location; 
@property (nonatomic,readonly) BOOL hasMapItem; 
@property (nonatomic,retain) GEOMapItemStorage * mapItem; 
@property (nonatomic,readonly) BOOL hasWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * waypointTyped; 
@property (assign,nonatomic) BOOL hasIsCurrentLocation; 
@property (assign,nonatomic) BOOL isCurrentLocation; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOMapItemStorage *)mapItem;
-(id)initWithDictionary:(id)arg1 ;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasIsCurrentLocation;
-(BOOL)isCurrentLocation;
-(void)setMapItem:(GEOMapItemStorage *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSearchString;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithComposedWaypoint:(id)arg1 ;
-(void)setHasIsCurrentLocation:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMapItem;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOWaypointTyped *)waypointTyped;
-(void)setWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(BOOL)hasWaypointTyped;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

