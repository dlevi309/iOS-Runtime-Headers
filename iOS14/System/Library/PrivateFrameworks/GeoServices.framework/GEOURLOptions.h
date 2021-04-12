/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOURLCamera, GEOURLCenterSpan, NSString, GEOURLRouteHandle, GEOURLTimePoint;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {

	PBDataReader* _reader;
	GEOURLCamera* _camera;
	GEOURLCenterSpan* _centerSpan;
	NSString* _referralIdentifier;
	GEOURLRouteHandle* _routeHandle;
	GEOURLTimePoint* _timePoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _mapType;
	int _transportType;
	int _userTrackingMode;
	BOOL _connectedToCar;
	BOOL _enableTraffic;
	struct {
		unsigned has_mapType : 1;
		unsigned has_transportType : 1;
		unsigned has_userTrackingMode : 1;
		unsigned has_connectedToCar : 1;
		unsigned has_enableTraffic : 1;
		unsigned read_camera : 1;
		unsigned read_centerSpan : 1;
		unsigned read_referralIdentifier : 1;
		unsigned read_routeHandle : 1;
		unsigned read_timePoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasEnableTraffic; 
@property (assign,nonatomic) BOOL enableTraffic; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasCenterSpan; 
@property (nonatomic,retain) GEOURLCenterSpan * centerSpan; 
@property (nonatomic,readonly) BOOL hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera; 
@property (nonatomic,readonly) BOOL hasReferralIdentifier; 
@property (nonatomic,retain) NSString * referralIdentifier; 
@property (assign,nonatomic) BOOL hasUserTrackingMode; 
@property (assign,nonatomic) int userTrackingMode; 
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) BOOL hasTimePoint; 
@property (nonatomic,retain) GEOURLTimePoint * timePoint; 
@property (assign,nonatomic) BOOL hasConnectedToCar; 
@property (assign,nonatomic) BOOL connectedToCar; 
+(BOOL)isValid:(id)arg1 ;
-(GEOURLCamera *)camera;
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(int)mapType;
-(int)StringAsMapType:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(id)urlRepresentation;
-(void)setMapType:(int)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(NSString *)description;
-(BOOL)hasMapType;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(BOOL)hasCamera;
-(unsigned long long)hash;
-(GEOURLTimePoint *)timePoint;
-(void)setUserTrackingMode:(int)arg1 ;
-(void)setHasEnableTraffic:(BOOL)arg1 ;
-(int)userTrackingMode;
-(void)setHasUserTrackingMode:(BOOL)arg1 ;
-(BOOL)hasUserTrackingMode;
-(id)userTrackingModeAsString:(int)arg1 ;
-(int)StringAsUserTrackingMode:(id)arg1 ;
-(void)setHasConnectedToCar:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMapType:(BOOL)arg1 ;
-(GEOURLCenterSpan *)centerSpan;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(void)setCenterSpan:(GEOURLCenterSpan *)arg1 ;
-(void)setEnableTraffic:(BOOL)arg1 ;
-(void)setReferralIdentifier:(NSString *)arg1 ;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(void)setTimePoint:(GEOURLTimePoint *)arg1 ;
-(BOOL)hasTimePoint;
-(void)setConnectedToCar:(BOOL)arg1 ;
-(BOOL)hasEnableTraffic;
-(BOOL)hasCenterSpan;
-(BOOL)hasReferralIdentifier;
-(BOOL)hasRouteHandle;
-(BOOL)enableTraffic;
-(NSString *)referralIdentifier;
-(GEOURLRouteHandle *)routeHandle;
-(BOOL)hasConnectedToCar;
-(BOOL)connectedToCar;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

