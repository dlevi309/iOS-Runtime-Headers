/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _originalDirectionsResponseID;
	NSData* _routeHandle;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _originalRoutePurpose;
	unsigned _routeIndex;
	struct {
		unsigned has_originalRoutePurpose : 1;
		unsigned has_routeIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_originalDirectionsResponseID : 1;
		unsigned read_routeHandle : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose; 
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle; 
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID; 
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasOriginalDirectionsResponseID;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasOriginalRoutePurpose;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)originalDirectionsResponseID;
-(id)description;
-(int)originalRoutePurpose;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasOriginalRoutePurpose:(BOOL)arg1 ;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(void)setRouteHandle:(NSData *)arg1 ;
-(BOOL)hasRouteHandle;
-(NSData *)routeHandle;
-(unsigned)routeIndex;
-(int)StringAsOriginalRoutePurpose:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)originalRoutePurposeAsString:(int)arg1 ;
@end

