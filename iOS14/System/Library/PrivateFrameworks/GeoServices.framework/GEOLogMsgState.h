/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLogMsgStateApplicationIdentifier, GEOLogMsgStateCarPlay, GEOLogMsgStateCuratedCollection, GEOLogMsgStateDetailLookAroundLog, GEOLogMsgStateDeviceBase, GEOLogMsgStateDeviceConnection, GEOLogMsgStateDeviceIdentifier, GEOLogMsgStateDeviceLocale, GEOLogMsgStateDeviceSettings, GEOLogMsgStateDirectionsDetail, GEOLogMsgStateExperiments, GEOLogMsgStateExtension, GEOLogMsgStateLookAroundView, GEOLogMsgStateMapLaunch, GEOLogMsgStateMapRestore, GEOLogMsgStateMapSettings, GEOLogMsgStateMapUIShown, GEOLogMsgStateMapUI, GEOLogMsgStateMapViewLocation, GEOLogMsgStateMapView, GEOLogMsgStateMapsFeatures, GEOLogMsgStateMapsServer, GEOLogMsgStateMapsUserSettings, GEOLogMsgStateMarket, GEOLogMsgStateMuninResource, GEOLogMsgStateNavigation, GEOLogMsgStatePairedDevice, GEOLogMsgStatePlaceCard, GEOLogMsgStatePlaceRequest, GEOLogMsgStateRealtimeTrafficProbe, GEOLogMsgStateRoute, GEOLogMsgStateRoutingSettings, NSString, GEOLogMsgStateSuggestions, GEOLogMsgStateSummaryLookAroundLog, GEOLogMsgStateTileSet, GEOLogMsgStateTransit, GEOLogMsgStateUGCPhoto, GEOLogMsgStateUserSession, GEOLogMsgStateUser;

@interface GEOLogMsgState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLogMsgStateApplicationIdentifier* _applicationIdentifier;
	GEOLogMsgStateCarPlay* _carPlay;
	GEOLogMsgStateCuratedCollection* _curatedCollection;
	GEOLogMsgStateDetailLookAroundLog* _detailLookAroundLog;
	GEOLogMsgStateDeviceBase* _deviceBase;
	GEOLogMsgStateDeviceConnection* _deviceConnection;
	GEOLogMsgStateDeviceIdentifier* _deviceIdentifier;
	GEOLogMsgStateDeviceLocale* _deviceLocale;
	GEOLogMsgStateDeviceSettings* _deviceSettings;
	GEOLogMsgStateDirectionsDetail* _directionsDetail;
	GEOLogMsgStateExperiments* _experiments;
	GEOLogMsgStateExtension* _extension;
	GEOLogMsgStateLookAroundView* _lookAroundView;
	GEOLogMsgStateMapLaunch* _mapLaunch;
	GEOLogMsgStateMapRestore* _mapRestore;
	GEOLogMsgStateMapSettings* _mapSettings;
	GEOLogMsgStateMapUIShown* _mapUiShown;
	GEOLogMsgStateMapUI* _mapUi;
	GEOLogMsgStateMapViewLocation* _mapViewLocation;
	GEOLogMsgStateMapView* _mapView;
	GEOLogMsgStateMapsFeatures* _mapsFeatures;
	GEOLogMsgStateMapsServer* _mapsServer;
	GEOLogMsgStateMapsUserSettings* _mapsUserSettings;
	GEOLogMsgStateMarket* _market;
	GEOLogMsgStateMuninResource* _muninResource;
	GEOLogMsgStateNavigation* _navigation;
	GEOLogMsgStatePairedDevice* _pairedDevice;
	GEOLogMsgStatePlaceCard* _placeCard;
	GEOLogMsgStatePlaceRequest* _placeRequest;
	GEOLogMsgStateRealtimeTrafficProbe* _realtimeTrafficProbe;
	GEOLogMsgStateRoute* _route;
	GEOLogMsgStateRoutingSettings* _routingSettings;
	NSString* _stateOrigin;
	GEOLogMsgStateSuggestions* _suggestions;
	GEOLogMsgStateSummaryLookAroundLog* _summaryLookAroundLog;
	GEOLogMsgStateTileSet* _tileSet;
	GEOLogMsgStateTransit* _transit;
	GEOLogMsgStateUGCPhoto* _ugcPhoto;
	GEOLogMsgStateUserSession* _userSession;
	GEOLogMsgStateUser* _user;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _stateType;
	struct {
		unsigned has_stateType : 1;
		unsigned read_applicationIdentifier : 1;
		unsigned read_carPlay : 1;
		unsigned read_curatedCollection : 1;
		unsigned read_detailLookAroundLog : 1;
		unsigned read_deviceBase : 1;
		unsigned read_deviceConnection : 1;
		unsigned read_deviceIdentifier : 1;
		unsigned read_deviceLocale : 1;
		unsigned read_deviceSettings : 1;
		unsigned read_directionsDetail : 1;
		unsigned read_experiments : 1;
		unsigned read_extension : 1;
		unsigned read_lookAroundView : 1;
		unsigned read_mapLaunch : 1;
		unsigned read_mapRestore : 1;
		unsigned read_mapSettings : 1;
		unsigned read_mapUiShown : 1;
		unsigned read_mapUi : 1;
		unsigned read_mapViewLocation : 1;
		unsigned read_mapView : 1;
		unsigned read_mapsFeatures : 1;
		unsigned read_mapsServer : 1;
		unsigned read_mapsUserSettings : 1;
		unsigned read_market : 1;
		unsigned read_muninResource : 1;
		unsigned read_navigation : 1;
		unsigned read_pairedDevice : 1;
		unsigned read_placeCard : 1;
		unsigned read_placeRequest : 1;
		unsigned read_realtimeTrafficProbe : 1;
		unsigned read_route : 1;
		unsigned read_routingSettings : 1;
		unsigned read_stateOrigin : 1;
		unsigned read_suggestions : 1;
		unsigned read_summaryLookAroundLog : 1;
		unsigned read_tileSet : 1;
		unsigned read_transit : 1;
		unsigned read_ugcPhoto : 1;
		unsigned read_userSession : 1;
		unsigned read_user : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasStateOrigin; 
@property (nonatomic,retain) NSString * stateOrigin; 
@property (nonatomic,readonly) BOOL hasUser; 
@property (nonatomic,retain) GEOLogMsgStateUser * user; 
@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType; 
@property (nonatomic,readonly) BOOL hasDeviceIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateDeviceIdentifier * deviceIdentifier; 
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateApplicationIdentifier * applicationIdentifier; 
@property (nonatomic,readonly) BOOL hasDeviceBase; 
@property (nonatomic,retain) GEOLogMsgStateDeviceBase * deviceBase; 
@property (nonatomic,readonly) BOOL hasDeviceLocale; 
@property (nonatomic,retain) GEOLogMsgStateDeviceLocale * deviceLocale; 
@property (nonatomic,readonly) BOOL hasDeviceConnection; 
@property (nonatomic,retain) GEOLogMsgStateDeviceConnection * deviceConnection; 
@property (nonatomic,readonly) BOOL hasCarPlay; 
@property (nonatomic,retain) GEOLogMsgStateCarPlay * carPlay; 
@property (nonatomic,readonly) BOOL hasPairedDevice; 
@property (nonatomic,retain) GEOLogMsgStatePairedDevice * pairedDevice; 
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) GEOLogMsgStateExtension * extension; 
@property (nonatomic,readonly) BOOL hasDeviceSettings; 
@property (nonatomic,retain) GEOLogMsgStateDeviceSettings * deviceSettings; 
@property (nonatomic,readonly) BOOL hasMapView; 
@property (nonatomic,retain) GEOLogMsgStateMapView * mapView; 
@property (nonatomic,readonly) BOOL hasMapViewLocation; 
@property (nonatomic,retain) GEOLogMsgStateMapViewLocation * mapViewLocation; 
@property (nonatomic,readonly) BOOL hasTransit; 
@property (nonatomic,retain) GEOLogMsgStateTransit * transit; 
@property (nonatomic,readonly) BOOL hasMapSettings; 
@property (nonatomic,retain) GEOLogMsgStateMapSettings * mapSettings; 
@property (nonatomic,readonly) BOOL hasMapUi; 
@property (nonatomic,retain) GEOLogMsgStateMapUI * mapUi; 
@property (nonatomic,readonly) BOOL hasMapUiShown; 
@property (nonatomic,retain) GEOLogMsgStateMapUIShown * mapUiShown; 
@property (nonatomic,readonly) BOOL hasUserSession; 
@property (nonatomic,retain) GEOLogMsgStateUserSession * userSession; 
@property (nonatomic,readonly) BOOL hasExperiments; 
@property (nonatomic,retain) GEOLogMsgStateExperiments * experiments; 
@property (nonatomic,readonly) BOOL hasPlaceCard; 
@property (nonatomic,retain) GEOLogMsgStatePlaceCard * placeCard; 
@property (nonatomic,readonly) BOOL hasRoute; 
@property (nonatomic,retain) GEOLogMsgStateRoute * route; 
@property (nonatomic,readonly) BOOL hasMapsServer; 
@property (nonatomic,retain) GEOLogMsgStateMapsServer * mapsServer; 
@property (nonatomic,readonly) BOOL hasTileSet; 
@property (nonatomic,retain) GEOLogMsgStateTileSet * tileSet; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOLogMsgStatePlaceRequest * placeRequest; 
@property (nonatomic,readonly) BOOL hasNavigation; 
@property (nonatomic,retain) GEOLogMsgStateNavigation * navigation; 
@property (nonatomic,readonly) BOOL hasMapRestore; 
@property (nonatomic,retain) GEOLogMsgStateMapRestore * mapRestore; 
@property (nonatomic,readonly) BOOL hasSuggestions; 
@property (nonatomic,retain) GEOLogMsgStateSuggestions * suggestions; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbe; 
@property (nonatomic,retain) GEOLogMsgStateRealtimeTrafficProbe * realtimeTrafficProbe; 
@property (nonatomic,readonly) BOOL hasSummaryLookAroundLog; 
@property (nonatomic,retain) GEOLogMsgStateSummaryLookAroundLog * summaryLookAroundLog; 
@property (nonatomic,readonly) BOOL hasDetailLookAroundLog; 
@property (nonatomic,retain) GEOLogMsgStateDetailLookAroundLog * detailLookAroundLog; 
@property (nonatomic,readonly) BOOL hasLookAroundView; 
@property (nonatomic,retain) GEOLogMsgStateLookAroundView * lookAroundView; 
@property (nonatomic,readonly) BOOL hasMuninResource; 
@property (nonatomic,retain) GEOLogMsgStateMuninResource * muninResource; 
@property (nonatomic,readonly) BOOL hasMapLaunch; 
@property (nonatomic,retain) GEOLogMsgStateMapLaunch * mapLaunch; 
@property (nonatomic,readonly) BOOL hasCuratedCollection; 
@property (nonatomic,retain) GEOLogMsgStateCuratedCollection * curatedCollection; 
@property (nonatomic,readonly) BOOL hasUgcPhoto; 
@property (nonatomic,retain) GEOLogMsgStateUGCPhoto * ugcPhoto; 
@property (nonatomic,readonly) BOOL hasDirectionsDetail; 
@property (nonatomic,retain) GEOLogMsgStateDirectionsDetail * directionsDetail; 
@property (nonatomic,readonly) BOOL hasMarket; 
@property (nonatomic,retain) GEOLogMsgStateMarket * market; 
@property (nonatomic,readonly) BOOL hasRoutingSettings; 
@property (nonatomic,retain) GEOLogMsgStateRoutingSettings * routingSettings; 
@property (nonatomic,readonly) BOOL hasMapsFeatures; 
@property (nonatomic,retain) GEOLogMsgStateMapsFeatures * mapsFeatures; 
@property (nonatomic,readonly) BOOL hasMapsUserSettings; 
@property (nonatomic,retain) GEOLogMsgStateMapsUserSettings * mapsUserSettings; 
+(BOOL)isValid:(id)arg1 ;
-(GEOLogMsgStateMapSettings *)mapSettings;
-(GEOLogMsgStateCarPlay *)carPlay;
-(GEOLogMsgStateTransit *)transit;
-(GEOLogMsgStateTileSet *)tileSet;
-(GEOLogMsgStateMapLaunch *)mapLaunch;
-(GEOLogMsgStatePairedDevice *)pairedDevice;
-(BOOL)hasRealtimeTrafficProbe;
-(GEOLogMsgStateDeviceIdentifier *)deviceIdentifier;
-(void)setDeviceIdentifier:(GEOLogMsgStateDeviceIdentifier *)arg1 ;
-(BOOL)hasLookAroundView;
-(id)dictionaryRepresentation;
-(GEOLogMsgStateSummaryLookAroundLog *)summaryLookAroundLog;
-(void)setRoute:(GEOLogMsgStateRoute *)arg1 ;
-(GEOLogMsgStateSuggestions *)suggestions;
-(void)setSuggestions:(GEOLogMsgStateSuggestions *)arg1 ;
-(void)setApplicationIdentifier:(GEOLogMsgStateApplicationIdentifier *)arg1 ;
-(void)setDeviceLocale:(GEOLogMsgStateDeviceLocale *)arg1 ;
-(void)setSummaryLookAroundLog:(GEOLogMsgStateSummaryLookAroundLog *)arg1 ;
-(void)setDetailLookAroundLog:(GEOLogMsgStateDetailLookAroundLog *)arg1 ;
-(GEOLogMsgStateMarket *)market;
-(BOOL)hasMapRestore;
-(GEOLogMsgStateMapUIShown *)mapUiShown;
-(BOOL)hasPlaceRequest;
-(BOOL)hasDeviceLocale;
-(void)setMapLaunch:(GEOLogMsgStateMapLaunch *)arg1 ;
-(void)setCuratedCollection:(GEOLogMsgStateCuratedCollection *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)stateOrigin;
-(GEOLogMsgStateRoute *)route;
-(void)setMapsFeatures:(GEOLogMsgStateMapsFeatures *)arg1 ;
-(id)init;
-(BOOL)hasDeviceBase;
-(BOOL)hasMapsFeatures;
-(void)setMapsServer:(GEOLogMsgStateMapsServer *)arg1 ;
-(BOOL)hasDetailLookAroundLog;
-(BOOL)hasRoute;
-(id)jsonRepresentation;
-(void)setTileSet:(GEOLogMsgStateTileSet *)arg1 ;
-(void)setUser:(GEOLogMsgStateUser *)arg1 ;
-(void)setRoutingSettings:(GEOLogMsgStateRoutingSettings *)arg1 ;
-(void)setStateOrigin:(NSString *)arg1 ;
-(void)setMapView:(GEOLogMsgStateMapView *)arg1 ;
-(BOOL)hasCarPlay;
-(BOOL)hasTileSet;
-(BOOL)hasStateOrigin;
-(void)setUgcPhoto:(GEOLogMsgStateUGCPhoto *)arg1 ;
-(void)setExtension:(GEOLogMsgStateExtension *)arg1 ;
-(GEOLogMsgStateMapViewLocation *)mapViewLocation;
-(GEOLogMsgStateCuratedCollection *)curatedCollection;
-(BOOL)hasNavigation;
-(GEOLogMsgStateDeviceBase *)deviceBase;
-(GEOLogMsgStatePlaceRequest *)placeRequest;
-(void)setDeviceSettings:(GEOLogMsgStateDeviceSettings *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuninResource:(GEOLogMsgStateMuninResource *)arg1 ;
-(void)setPlaceCard:(GEOLogMsgStatePlaceCard *)arg1 ;
-(BOOL)hasCuratedCollection;
-(BOOL)hasMapLaunch;
-(BOOL)hasUserSession;
-(void)setHasStateType:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setUserSession:(GEOLogMsgStateUserSession *)arg1 ;
-(void)setMapSettings:(GEOLogMsgStateMapSettings *)arg1 ;
-(GEOLogMsgStateMapsUserSettings *)mapsUserSettings;
-(int)StringAsStateType:(id)arg1 ;
-(GEOLogMsgStateMapsServer *)mapsServer;
-(BOOL)hasDeviceIdentifier;
-(BOOL)hasDeviceSettings;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLogMsgStateApplicationIdentifier *)applicationIdentifier;
-(BOOL)hasMapsUserSettings;
-(void)setRealtimeTrafficProbe:(GEOLogMsgStateRealtimeTrafficProbe *)arg1 ;
-(GEOLogMsgStateUserSession *)userSession;
-(void)setDeviceBase:(GEOLogMsgStateDeviceBase *)arg1 ;
-(id)description;
-(void)setMapsUserSettings:(GEOLogMsgStateMapsUserSettings *)arg1 ;
-(GEOLogMsgStateLookAroundView *)lookAroundView;
-(GEOLogMsgStateDeviceSettings *)deviceSettings;
-(BOOL)hasMapView;
-(void)setDirectionsDetail:(GEOLogMsgStateDirectionsDetail *)arg1 ;
-(GEOLogMsgStateDetailLookAroundLog *)detailLookAroundLog;
-(void)setDeviceConnection:(GEOLogMsgStateDeviceConnection *)arg1 ;
-(GEOLogMsgStateRealtimeTrafficProbe *)realtimeTrafficProbe;
-(void)setTransit:(GEOLogMsgStateTransit *)arg1 ;
-(void)setExperiments:(GEOLogMsgStateExperiments *)arg1 ;
-(void)setMarket:(GEOLogMsgStateMarket *)arg1 ;
-(void)setPairedDevice:(GEOLogMsgStatePairedDevice *)arg1 ;
-(void)setMapUiShown:(GEOLogMsgStateMapUIShown *)arg1 ;
-(void)setMapViewLocation:(GEOLogMsgStateMapViewLocation *)arg1 ;
-(GEOLogMsgStateExtension *)extension;
-(void)setLookAroundView:(GEOLogMsgStateLookAroundView *)arg1 ;
-(GEOLogMsgStateUser *)user;
-(GEOLogMsgStateExperiments *)experiments;
-(int)stateType;
-(GEOLogMsgStatePlaceCard *)placeCard;
-(unsigned long long)hash;
-(GEOLogMsgStateMuninResource *)muninResource;
-(BOOL)hasMapViewLocation;
-(void)setStateType:(int)arg1 ;
-(BOOL)hasMarket;
-(GEOLogMsgStateNavigation *)navigation;
-(BOOL)hasRoutingSettings;
-(BOOL)hasUser;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDirectionsDetail;
-(BOOL)hasStateType;
-(BOOL)hasMapsServer;
-(GEOLogMsgStateMapRestore *)mapRestore;
-(void)setCarPlay:(GEOLogMsgStateCarPlay *)arg1 ;
-(GEOLogMsgStateDeviceConnection *)deviceConnection;
-(id)stateTypeAsString:(int)arg1 ;
-(BOOL)hasMuninResource;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExperiments;
-(void)writeTo:(id)arg1 ;
-(void)setMapUi:(GEOLogMsgStateMapUI *)arg1 ;
-(GEOLogMsgStateDeviceLocale *)deviceLocale;
-(GEOLogMsgStateDirectionsDetail *)directionsDetail;
-(GEOLogMsgStateMapUI *)mapUi;
-(BOOL)hasSuggestions;
-(BOOL)hasApplicationIdentifier;
-(BOOL)hasSummaryLookAroundLog;
-(GEOLogMsgStateRoutingSettings *)routingSettings;
-(BOOL)hasMapUi;
-(BOOL)hasMapUiShown;
-(GEOLogMsgStateUGCPhoto *)ugcPhoto;
-(BOOL)hasMapSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasExtension;
-(BOOL)hasPlaceCard;
-(void)setMapRestore:(GEOLogMsgStateMapRestore *)arg1 ;
-(void)setPlaceRequest:(GEOLogMsgStatePlaceRequest *)arg1 ;
-(GEOLogMsgStateMapsFeatures *)mapsFeatures;
-(BOOL)hasPairedDevice;
-(GEOLogMsgStateMapView *)mapView;
-(BOOL)hasUgcPhoto;
-(id)initWithJSON:(id)arg1 ;
-(void)setNavigation:(GEOLogMsgStateNavigation *)arg1 ;
-(BOOL)hasTransit;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDeviceConnection;
@end
