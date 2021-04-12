/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_mapItemStorage : 1;
		unsigned wrote_place : 1;
		unsigned wrote_currentLocation : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPlace * place; 
@property (assign,nonatomic) BOOL hasCurrentLocation; 
@property (assign,nonatomic) BOOL currentLocation; 
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)currentLocation;
-(void)setCurrentLocation:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readPlace;
-(GEOPlace *)place;
-(void)setPlace:(GEOPlace *)arg1 ;
-(BOOL)hasPlace;
-(void)setMapItem:(id)arg1 ;
-(BOOL)hasMapItemStorage;
-(id)mapItem;
-(GEOMapItemStorage *)mapItemStorage;
-(void)_readMapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setHasCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasCurrentLocation;
@end

