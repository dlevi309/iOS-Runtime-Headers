/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOCarInfo, GEOMapRegion, GEOPlaceActionDetails, NSString, GEORouteDetails, GEOMapsServerMetadata;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _sessionID;
	GEOCarInfo* _carInfo;
	GEOMapRegion* _mapRegion;
	GEOPlaceActionDetails* _placeActionDetails;
	NSString* _providerId;
	GEORouteDetails* _routeDetails;
	GEOMapsServerMetadata* _serverMetadata;
	double _sessionRelativeTimestamp;
	double _zoomLevel;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _actionType;
	int _locationBucket;
	int _sequenceNumber;
	int _uiTarget;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_zoomLevel : 1;
		unsigned has_actionType : 1;
		unsigned has_locationBucket : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_uiTarget : 1;
		unsigned read_carInfo : 1;
		unsigned read_mapRegion : 1;
		unsigned read_placeActionDetails : 1;
		unsigned read_providerId : 1;
		unsigned read_routeDetails : 1;
		unsigned read_serverMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (nonatomic,readonly) BOOL hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails; 
@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber; 
@property (nonatomic,readonly) BOOL hasRouteDetails; 
@property (nonatomic,retain) GEORouteDetails * routeDetails; 
@property (nonatomic,readonly) BOOL hasProviderId; 
@property (nonatomic,retain) NSString * providerId; 
@property (nonatomic,readonly) BOOL hasServerMetadata; 
@property (nonatomic,retain) GEOMapsServerMetadata * serverMetadata; 
@property (assign,nonatomic) BOOL hasLocationBucket; 
@property (assign,nonatomic) int locationBucket; 
@property (assign,nonatomic) BOOL hasUiTarget; 
@property (assign,nonatomic) int uiTarget; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(GEOCarInfo *)carInfo;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(double)zoomLevel;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(GEOMapRegion *)mapRegion;
-(int)sequenceNumber;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasCarInfo;
-(BOOL)hasLocationBucket;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(double)sessionRelativeTimestamp;
-(id)description;
-(BOOL)hasSessionRelativeTimestamp;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(int)uiTarget;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(int)locationBucket;
-(void)setHasSessionID:(BOOL)arg1 ;
-(int)StringAsLocationBucket:(id)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(BOOL)hasUiTarget;
-(GEOPlaceActionDetails *)placeActionDetails;
-(GEORouteDetails *)routeDetails;
-(GEOMapsServerMetadata *)serverMetadata;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(void)setRouteDetails:(GEORouteDetails *)arg1 ;
-(void)setProviderId:(NSString *)arg1 ;
-(void)setServerMetadata:(GEOMapsServerMetadata *)arg1 ;
-(void)setUiTarget:(int)arg1 ;
-(BOOL)hasPlaceActionDetails;
-(BOOL)hasRouteDetails;
-(BOOL)hasProviderId;
-(BOOL)hasServerMetadata;
-(void)setHasUiTarget:(BOOL)arg1 ;
-(id)uiTargetAsString:(int)arg1 ;
-(int)StringAsUiTarget:(id)arg1 ;
-(unsigned long long)hash;
-(id)locationBucketAsString:(int)arg1 ;
-(void)setHasLocationBucket:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocationBucket:(int)arg1 ;
-(BOOL)hasZoomLevel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)providerId;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSequenceNumber;
@end

