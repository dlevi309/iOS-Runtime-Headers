/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapRegion, GEOPlaceSearchRequest, NSString, GEOLocation;

@interface GEOMapQuery : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _sessionID;
	GEOMapRegion* _mapRegion;
	GEOPlaceSearchRequest* _placeSearchRequest;
	NSString* _query;
	GEOLocation* _userLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _clientImgFmt;
	int _clientImgMaxHeight;
	int _clientImgMaxWidth;
	int _mapCenterX;
	int _mapCenterY;
	int _mapSpanX;
	int _mapSpanY;
	int _requestType;
	int _tilesizeX;
	int _tilesizeY;
	int _zoomlevel;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_clientImgFmt : 1;
		unsigned has_clientImgMaxHeight : 1;
		unsigned has_clientImgMaxWidth : 1;
		unsigned has_mapCenterX : 1;
		unsigned has_mapCenterY : 1;
		unsigned has_mapSpanX : 1;
		unsigned has_mapSpanY : 1;
		unsigned has_requestType : 1;
		unsigned has_tilesizeX : 1;
		unsigned has_tilesizeY : 1;
		unsigned has_zoomlevel : 1;
		unsigned read_mapRegion : 1;
		unsigned read_placeSearchRequest : 1;
		unsigned read_query : 1;
		unsigned read_userLocation : 1;
		unsigned wrote_sessionID : 1;
		unsigned wrote_mapRegion : 1;
		unsigned wrote_placeSearchRequest : 1;
		unsigned wrote_query : 1;
		unsigned wrote_userLocation : 1;
		unsigned wrote_clientImgFmt : 1;
		unsigned wrote_clientImgMaxHeight : 1;
		unsigned wrote_clientImgMaxWidth : 1;
		unsigned wrote_mapCenterX : 1;
		unsigned wrote_mapCenterY : 1;
		unsigned wrote_mapSpanX : 1;
		unsigned wrote_mapSpanY : 1;
		unsigned wrote_requestType : 1;
		unsigned wrote_tilesizeX : 1;
		unsigned wrote_tilesizeY : 1;
		unsigned wrote_zoomlevel : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (assign,nonatomic) BOOL hasMapCenterX; 
@property (assign,nonatomic) int mapCenterX; 
@property (assign,nonatomic) BOOL hasMapCenterY; 
@property (assign,nonatomic) int mapCenterY; 
@property (assign,nonatomic) BOOL hasMapSpanX; 
@property (assign,nonatomic) int mapSpanX; 
@property (assign,nonatomic) BOOL hasMapSpanY; 
@property (assign,nonatomic) int mapSpanY; 
@property (assign,nonatomic) BOOL hasZoomlevel; 
@property (assign,nonatomic) int zoomlevel; 
@property (assign,nonatomic) BOOL hasClientImgFmt; 
@property (assign,nonatomic) int clientImgFmt; 
@property (assign,nonatomic) BOOL hasTilesizeX; 
@property (assign,nonatomic) int tilesizeX; 
@property (assign,nonatomic) BOOL hasTilesizeY; 
@property (assign,nonatomic) int tilesizeY; 
@property (assign,nonatomic) BOOL hasClientImgMaxWidth; 
@property (assign,nonatomic) int clientImgMaxWidth; 
@property (assign,nonatomic) BOOL hasClientImgMaxHeight; 
@property (assign,nonatomic) int clientImgMaxHeight; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (nonatomic,retain) GEOLocation * userLocation; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)query;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)requestType;
-(GEOSessionID)sessionID;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readMapRegion;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(void)_readQuery;
-(void)_readUserLocation;
-(void)_readPlaceSearchRequest;
-(GEOLocation *)userLocation;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasQuery;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(int)mapCenterX;
-(void)setMapCenterX:(int)arg1 ;
-(void)setHasMapCenterX:(BOOL)arg1 ;
-(BOOL)hasMapCenterX;
-(int)mapCenterY;
-(void)setMapCenterY:(int)arg1 ;
-(void)setHasMapCenterY:(BOOL)arg1 ;
-(BOOL)hasMapCenterY;
-(int)mapSpanX;
-(void)setMapSpanX:(int)arg1 ;
-(void)setHasMapSpanX:(BOOL)arg1 ;
-(BOOL)hasMapSpanX;
-(int)mapSpanY;
-(void)setMapSpanY:(int)arg1 ;
-(void)setHasMapSpanY:(BOOL)arg1 ;
-(BOOL)hasMapSpanY;
-(int)zoomlevel;
-(void)setZoomlevel:(int)arg1 ;
-(void)setHasZoomlevel:(BOOL)arg1 ;
-(BOOL)hasZoomlevel;
-(int)clientImgFmt;
-(void)setClientImgFmt:(int)arg1 ;
-(void)setHasClientImgFmt:(BOOL)arg1 ;
-(BOOL)hasClientImgFmt;
-(id)clientImgFmtAsString:(int)arg1 ;
-(int)StringAsClientImgFmt:(id)arg1 ;
-(int)tilesizeX;
-(void)setTilesizeX:(int)arg1 ;
-(void)setHasTilesizeX:(BOOL)arg1 ;
-(BOOL)hasTilesizeX;
-(int)tilesizeY;
-(void)setTilesizeY:(int)arg1 ;
-(void)setHasTilesizeY:(BOOL)arg1 ;
-(BOOL)hasTilesizeY;
-(int)clientImgMaxWidth;
-(void)setClientImgMaxWidth:(int)arg1 ;
-(void)setHasClientImgMaxWidth:(BOOL)arg1 ;
-(BOOL)hasClientImgMaxWidth;
-(int)clientImgMaxHeight;
-(void)setClientImgMaxHeight:(int)arg1 ;
-(void)setHasClientImgMaxHeight:(BOOL)arg1 ;
-(BOOL)hasClientImgMaxHeight;
-(BOOL)hasUserLocation;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(BOOL)hasPlaceSearchRequest;
@end

