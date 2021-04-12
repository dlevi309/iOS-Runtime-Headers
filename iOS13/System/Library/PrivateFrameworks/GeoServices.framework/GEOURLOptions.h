/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_camera : 1;
		unsigned wrote_centerSpan : 1;
		unsigned wrote_referralIdentifier : 1;
		unsigned wrote_routeHandle : 1;
		unsigned wrote_timePoint : 1;
		unsigned wrote_mapType : 1;
		unsigned wrote_transportType : 1;
		unsigned wrote_userTrackingMode : 1;
		unsigned wrote_connectedToCar : 1;
		unsigned wrote_enableTraffic : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(BOOL)hasRouteHandle;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)setCenterSpan:(GEOURLCenterSpan *)arg1 ;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(void)setEnableTraffic:(BOOL)arg1 ;
-(void)setReferralIdentifier:(NSString *)arg1 ;
-(void)setTimePoint:(GEOURLTimePoint *)arg1 ;
-(void)setConnectedToCar:(BOOL)arg1 ;
-(BOOL)hasEnableTraffic;
-(BOOL)hasMapType;
-(BOOL)hasCenterSpan;
-(BOOL)hasCamera;
-(BOOL)hasReferralIdentifier;
-(BOOL)hasTimePoint;
-(int)mapType;
-(GEOURLCenterSpan *)centerSpan;
-(GEOURLCamera *)camera;
-(BOOL)enableTraffic;
-(NSString *)referralIdentifier;
-(GEOURLTimePoint *)timePoint;
-(BOOL)hasConnectedToCar;
-(BOOL)connectedToCar;
-(id)urlRepresentation;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(void)_readCenterSpan;
-(void)_readCamera;
-(void)_readReferralIdentifier;
-(void)_readTimePoint;
-(void)setHasEnableTraffic:(BOOL)arg1 ;
-(int)userTrackingMode;
-(void)setUserTrackingMode:(int)arg1 ;
-(void)setHasUserTrackingMode:(BOOL)arg1 ;
-(BOOL)hasUserTrackingMode;
-(id)userTrackingModeAsString:(int)arg1 ;
-(int)StringAsUserTrackingMode:(id)arg1 ;
-(void)setHasConnectedToCar:(BOOL)arg1 ;
@end

