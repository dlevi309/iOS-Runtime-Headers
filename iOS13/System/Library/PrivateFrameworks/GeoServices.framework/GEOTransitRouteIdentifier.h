/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, NSUUID;

@interface GEOTransitRouteIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _clientRouteHandle;
	NSData* _serverRouteHandle;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientRouteHandle : 1;
		unsigned read_serverRouteHandle : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientRouteHandle : 1;
		unsigned wrote_serverRouteHandle : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSUUID * clientRouteID; 
@property (nonatomic,readonly) BOOL hasServerRouteHandle; 
@property (nonatomic,retain) NSData * serverRouteHandle; 
@property (nonatomic,readonly) BOOL hasClientRouteHandle; 
@property (nonatomic,retain) NSData * clientRouteHandle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)routeIdentiferForComposedRoute:(id)arg1 ;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSData *)clientRouteHandle;
-(NSUUID *)clientRouteID;
-(void)_readServerRouteHandle;
-(void)_readClientRouteHandle;
-(NSData *)serverRouteHandle;
-(void)setServerRouteHandle:(NSData *)arg1 ;
-(void)setClientRouteHandle:(NSData *)arg1 ;
-(BOOL)hasServerRouteHandle;
-(BOOL)hasClientRouteHandle;
@end

