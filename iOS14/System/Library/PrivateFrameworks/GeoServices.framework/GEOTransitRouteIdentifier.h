/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSUUID * clientRouteID; 
@property (nonatomic,readonly) BOOL hasServerRouteHandle; 
@property (nonatomic,retain) NSData * serverRouteHandle; 
@property (nonatomic,readonly) BOOL hasClientRouteHandle; 
@property (nonatomic,retain) NSData * clientRouteHandle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)routeIdentiferForComposedRoute:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)clientRouteHandle;
-(void)setServerRouteHandle:(NSData *)arg1 ;
-(NSData *)serverRouteHandle;
-(void)setClientRouteHandle:(NSData *)arg1 ;
-(BOOL)hasServerRouteHandle;
-(BOOL)hasClientRouteHandle;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSUUID *)clientRouteID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

