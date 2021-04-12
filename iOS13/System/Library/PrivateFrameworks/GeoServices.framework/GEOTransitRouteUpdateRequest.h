/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, NSData, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEORouteAttributes, NSMutableArray, NSString, NSUUID, NSArray;

@interface GEOTransitRouteUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	NSData* _directionsResponseId;
	GEOAdditionalEnabledMarkets* _originalAdditionalEnabledMarkets;
	GEOClientCapabilities* _originalClientCapabilities;
	GEORouteAttributes* _originalRouteAttributes;
	NSMutableArray* _originalWaypoints;
	NSString* _requestingAppId;
	NSMutableArray* _routeIdentifiers;
	NSMutableArray* _serviceTags;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_directionsResponseId : 1;
		unsigned read_originalAdditionalEnabledMarkets : 1;
		unsigned read_originalClientCapabilities : 1;
		unsigned read_originalRouteAttributes : 1;
		unsigned read_originalWaypoints : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_routeIdentifiers : 1;
		unsigned read_serviceTags : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_abClientMetadata : 1;
		unsigned wrote_directionsResponseId : 1;
		unsigned wrote_originalAdditionalEnabledMarkets : 1;
		unsigned wrote_originalClientCapabilities : 1;
		unsigned wrote_originalRouteAttributes : 1;
		unsigned wrote_originalWaypoints : 1;
		unsigned wrote_requestingAppId : 1;
		unsigned wrote_routeIdentifiers : 1;
		unsigned wrote_serviceTags : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSUUID * clientRouteID; 
@property (nonatomic,readonly) NSArray * allClientRouteIDs; 
@property (nonatomic,retain) NSMutableArray * routeIdentifiers; 
@property (nonatomic,readonly) BOOL hasOriginalClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * originalClientCapabilities; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (nonatomic,retain) NSMutableArray * originalWaypoints; 
@property (nonatomic,readonly) BOOL hasOriginalRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * originalRouteAttributes; 
@property (nonatomic,readonly) BOOL hasOriginalAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * originalAdditionalEnabledMarkets; 
@property (nonatomic,readonly) BOOL hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(id)mergedTransitRouteUpdateRequests:(id)arg1 ;
+(id)splitTransitRouteUpdateRequests:(id)arg1 ;
+(Class)routeIdentifierType;
+(Class)originalWaypointType;
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 ;
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 composedRoutes:(id)arg3 ;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readAbClientMetadata;
-(void)_readServiceTags;
-(void)_addNoFlagsServiceTag:(id)arg1 ;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(NSMutableArray *)serviceTags;
-(BOOL)hasAbClientMetadata;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)routeIdentifiers;
-(NSArray *)allClientRouteIDs;
-(NSUUID *)clientRouteID;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)clearRouteIdentifiers;
-(void)addRouteIdentifier:(id)arg1 ;
-(void)_readRouteIdentifiers;
-(void)_addNoFlagsRouteIdentifier:(id)arg1 ;
-(void)_readOriginalClientCapabilities;
-(void)_readOriginalWaypoints;
-(void)_addNoFlagsOriginalWaypoint:(id)arg1 ;
-(void)_readOriginalRouteAttributes;
-(void)_readOriginalAdditionalEnabledMarkets;
-(void)_readDirectionsResponseId;
-(void)_readRequestingAppId;
-(GEOClientCapabilities *)originalClientCapabilities;
-(GEORouteAttributes *)originalRouteAttributes;
-(GEOAdditionalEnabledMarkets *)originalAdditionalEnabledMarkets;
-(NSData *)directionsResponseId;
-(NSString *)requestingAppId;
-(NSMutableArray *)originalWaypoints;
-(unsigned long long)routeIdentifiersCount;
-(id)routeIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)setOriginalClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(unsigned long long)originalWaypointsCount;
-(void)clearOriginalWaypoints;
-(id)originalWaypointAtIndex:(unsigned long long)arg1 ;
-(void)addOriginalWaypoint:(id)arg1 ;
-(void)setOriginalRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setOriginalAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(void)setRouteIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)hasOriginalClientCapabilities;
-(void)setOriginalWaypoints:(NSMutableArray *)arg1 ;
-(BOOL)hasOriginalRouteAttributes;
-(BOOL)hasOriginalAdditionalEnabledMarkets;
-(BOOL)hasDirectionsResponseId;
-(BOOL)hasRequestingAppId;
@end

