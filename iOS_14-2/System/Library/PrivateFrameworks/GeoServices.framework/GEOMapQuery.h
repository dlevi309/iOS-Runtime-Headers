/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
-(BOOL)hasRequestType;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(NSString *)query;
-(GEOSessionID)sessionID;
-(void)setRequestType:(int)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)requestTypeAsString:(int)arg1 ;
-(int)requestType;
-(id)jsonRepresentation;
-(int)StringAsRequestType:(id)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(id)description;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(int)mapSpanX;
-(int)mapSpanY;
-(void)setHasSessionID:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)zoomlevel;
-(int)tilesizeX;
-(int)tilesizeY;
-(void)setMapCenterX:(int)arg1 ;
-(void)setMapCenterY:(int)arg1 ;
-(BOOL)hasMapSpanX;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)setMapSpanX:(int)arg1 ;
-(void)setMapSpanY:(int)arg1 ;
-(void)setZoomlevel:(int)arg1 ;
-(void)setClientImgFmt:(int)arg1 ;
-(void)setTilesizeX:(int)arg1 ;
-(void)setTilesizeY:(int)arg1 ;
-(void)setClientImgMaxWidth:(int)arg1 ;
-(void)setClientImgMaxHeight:(int)arg1 ;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(void)setHasMapCenterX:(BOOL)arg1 ;
-(BOOL)hasMapCenterX;
-(void)setHasMapCenterY:(BOOL)arg1 ;
-(BOOL)hasMapCenterY;
-(void)setHasMapSpanX:(BOOL)arg1 ;
-(void)setHasMapSpanY:(BOOL)arg1 ;
-(BOOL)hasMapSpanY;
-(void)setHasZoomlevel:(BOOL)arg1 ;
-(BOOL)hasZoomlevel;
-(int)clientImgFmt;
-(void)setHasClientImgFmt:(BOOL)arg1 ;
-(BOOL)hasClientImgFmt;
-(id)clientImgFmtAsString:(int)arg1 ;
-(int)StringAsClientImgFmt:(id)arg1 ;
-(void)setHasTilesizeX:(BOOL)arg1 ;
-(BOOL)hasTilesizeX;
-(void)setHasTilesizeY:(BOOL)arg1 ;
-(BOOL)hasTilesizeY;
-(int)clientImgMaxWidth;
-(void)setHasClientImgMaxWidth:(BOOL)arg1 ;
-(BOOL)hasClientImgMaxWidth;
-(int)clientImgMaxHeight;
-(void)setHasClientImgMaxHeight:(BOOL)arg1 ;
-(BOOL)hasClientImgMaxHeight;
-(BOOL)hasPlaceSearchRequest;
-(BOOL)readFrom:(id)arg1 ;
-(GEOLocation *)userLocation;
-(BOOL)hasUserLocation;
-(void)setQuery:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)mapCenterX;
-(int)mapCenterY;
@end

