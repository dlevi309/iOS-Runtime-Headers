/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapItemStorage, GEOSharedNavETAInfo, NSString, GEOSharedNavRouteInfo, GEOSharedNavSenderInfo;

@interface GEOSharedNavState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapItemStorage* _destinationInfo;
	GEOSharedNavETAInfo* _etaInfo;
	NSString* _groupIdentifier;
	double _localUpdatedTimestamp;
	GEOSharedNavRouteInfo* _routeInfo;
	GEOSharedNavSenderInfo* _senderInfo;
	double _updatedTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _protocolVersion;
	int _referenceFrame;
	unsigned _transportType;
	BOOL _arrived;
	BOOL _closed;
	BOOL _muted;
	struct {
		unsigned has_localUpdatedTimestamp : 1;
		unsigned has_updatedTimestamp : 1;
		unsigned has_protocolVersion : 1;
		unsigned has_referenceFrame : 1;
		unsigned has_transportType : 1;
		unsigned has_arrived : 1;
		unsigned has_closed : 1;
		unsigned has_muted : 1;
		unsigned read_unknownFields : 1;
		unsigned read_destinationInfo : 1;
		unsigned read_etaInfo : 1;
		unsigned read_groupIdentifier : 1;
		unsigned read_routeInfo : 1;
		unsigned read_senderInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_destinationInfo : 1;
		unsigned wrote_etaInfo : 1;
		unsigned wrote_groupIdentifier : 1;
		unsigned wrote_localUpdatedTimestamp : 1;
		unsigned wrote_routeInfo : 1;
		unsigned wrote_senderInfo : 1;
		unsigned wrote_updatedTimestamp : 1;
		unsigned wrote_protocolVersion : 1;
		unsigned wrote_referenceFrame : 1;
		unsigned wrote_transportType : 1;
		unsigned wrote_arrived : 1;
		unsigned wrote_closed : 1;
		unsigned wrote_muted : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDestinationInfo; 
@property (nonatomic,retain) GEOMapItemStorage * destinationInfo; 
@property (nonatomic,readonly) BOOL hasEtaInfo; 
@property (nonatomic,retain) GEOSharedNavETAInfo * etaInfo; 
@property (nonatomic,readonly) BOOL hasRouteInfo; 
@property (nonatomic,retain) GEOSharedNavRouteInfo * routeInfo; 
@property (nonatomic,readonly) BOOL hasSenderInfo; 
@property (nonatomic,retain) GEOSharedNavSenderInfo * senderInfo; 
@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,retain) NSString * groupIdentifier; 
@property (assign,nonatomic) BOOL hasArrived; 
@property (assign,nonatomic) BOOL arrived; 
@property (assign,nonatomic) BOOL hasClosed; 
@property (assign,nonatomic) BOOL closed; 
@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (assign,nonatomic) BOOL hasMuted; 
@property (assign,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL hasUpdatedTimestamp; 
@property (assign,nonatomic) double updatedTimestamp; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType; 
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion; 
@property (assign,nonatomic) BOOL hasLocalUpdatedTimestamp; 
@property (assign,nonatomic) double localUpdatedTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(BOOL)closed;
-(void)writeTo:(id)arg1 ;
-(unsigned)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setClosed:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(BOOL)hasReferenceFrame;
-(BOOL)hasTransportType;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(id)referenceFrameAsString:(int)arg1 ;
-(int)StringAsReferenceFrame:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasGroupIdentifier;
-(unsigned)protocolVersion;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(BOOL)hasArrived;
-(void)_readDestinationInfo;
-(GEOMapItemStorage *)destinationInfo;
-(void)setDestinationInfo:(GEOMapItemStorage *)arg1 ;
-(BOOL)hasDestinationInfo;
-(void)_readEtaInfo;
-(void)_readRouteInfo;
-(void)_readSenderInfo;
-(void)_readGroupIdentifier;
-(GEOSharedNavETAInfo *)etaInfo;
-(GEOSharedNavRouteInfo *)routeInfo;
-(GEOSharedNavSenderInfo *)senderInfo;
-(void)setEtaInfo:(GEOSharedNavETAInfo *)arg1 ;
-(void)setRouteInfo:(GEOSharedNavRouteInfo *)arg1 ;
-(void)setSenderInfo:(GEOSharedNavSenderInfo *)arg1 ;
-(BOOL)hasEtaInfo;
-(BOOL)hasRouteInfo;
-(BOOL)hasSenderInfo;
-(BOOL)arrived;
-(void)setArrived:(BOOL)arg1 ;
-(void)setHasArrived:(BOOL)arg1 ;
-(void)setHasClosed:(BOOL)arg1 ;
-(BOOL)hasClosed;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setHasMuted:(BOOL)arg1 ;
-(BOOL)hasMuted;
-(double)updatedTimestamp;
-(void)setUpdatedTimestamp:(double)arg1 ;
-(void)setHasUpdatedTimestamp:(BOOL)arg1 ;
-(BOOL)hasUpdatedTimestamp;
-(double)localUpdatedTimestamp;
-(void)setLocalUpdatedTimestamp:(double)arg1 ;
-(void)setHasLocalUpdatedTimestamp:(BOOL)arg1 ;
-(BOOL)hasLocalUpdatedTimestamp;
@end

