/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapItemStorage* _mapItemStorage;
	GEOPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _currentLocation;
	struct {
		unsigned has_currentLocation : 1;
		unsigned read_mapItemStorage : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPlace * place; 
@property (assign,nonatomic) BOOL hasCurrentLocation; 
@property (assign,nonatomic) BOOL currentLocation; 
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)currentLocation;
-(id)dictionaryRepresentation;
-(GEOPlace *)place;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasMapItemStorage;
-(id)init;
-(id)jsonRepresentation;
-(void)setCurrentLocation:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)mapItem;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasPlace;
-(void)setMapItem:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setHasCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasCurrentLocation;
-(void)setPlace:(GEOPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

