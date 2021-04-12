/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_destination : 1;
		unsigned wrote_origin : 1;
		unsigned wrote_transportType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOPDResolvedItem *)destination;
-(void)setDestination:(GEOPDResolvedItem *)arg1 ;
-(GEOPDResolvedItem *)origin;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOrigin:(GEOPDResolvedItem *)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)_readDestination;
-(void)_readOrigin;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
@end

