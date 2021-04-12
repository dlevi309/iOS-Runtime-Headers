/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDResolvedItem;

@interface GEOPDDirectionIntent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDResolvedItem* _destination;
	GEOPDResolvedItem* _origin;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transportType;
	struct {
		unsigned has_transportType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_destination : 1;
		unsigned read_origin : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOPDResolvedItem * origin; 
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOPDResolvedItem * destination; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setOrigin:(GEOPDResolvedItem *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDestination:(GEOPDResolvedItem *)arg1 ;
-(GEOPDResolvedItem *)origin;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasDestination;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDResolvedItem *)destination;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

