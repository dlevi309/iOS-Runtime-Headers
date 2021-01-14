/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)routeID;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasTransitData;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZilchPoints;
-(BOOL)hasDirectionsResponseID;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(void)setTransitData:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(NSData *)transitData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasRouteID;
-(BOOL)isEqual:(id)arg1 ;
@end

