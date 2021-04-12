/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData;

@interface GEOURLRouteHandle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _directionsResponseID;
	NSData* _routeID;
	NSData* _transitData;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_directionsResponseID : 1;
		unsigned read_routeID : 1;
		unsigned read_transitData : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_directionsResponseID : 1;
		unsigned wrote_routeID : 1;
		unsigned wrote_transitData : 1;
		unsigned wrote_zilchPoints : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (nonatomic,readonly) BOOL hasTransitData; 
@property (nonatomic,retain) NSData * transitData; 
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
-(void)readAll:(BOOL)arg1 ;
-(void)_readDirectionsResponseID;
-(void)_readRouteID;
-(void)_readZilchPoints;
-(void)_readTransitData;
-(NSData *)directionsResponseID;
-(NSData *)routeID;
-(NSData *)zilchPoints;
-(NSData *)transitData;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(void)setTransitData:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(BOOL)hasRouteID;
-(BOOL)hasZilchPoints;
-(BOOL)hasTransitData;
@end

