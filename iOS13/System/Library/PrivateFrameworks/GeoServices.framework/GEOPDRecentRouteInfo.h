/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _routeId;
	NSData* _sessionState;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_routeId : 1;
		unsigned read_sessionState : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_routeId : 1;
		unsigned wrote_sessionState : 1;
		unsigned wrote_zilchPoints : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasRouteId; 
@property (nonatomic,retain) NSData * routeId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readZilchPoints;
-(NSData *)zilchPoints;
-(void)setZilchPoints:(NSData *)arg1 ;
-(BOOL)hasZilchPoints;
-(void)_readSessionState;
-(BOOL)hasSessionState;
-(void)_readRouteId;
-(NSData *)routeId;
-(void)setRouteId:(NSData *)arg1 ;
-(BOOL)hasRouteId;
@end

