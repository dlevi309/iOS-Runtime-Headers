/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSURL, NSString, GEOUserSessionEntity, GEOURLCollectionStorage, GEOURLExtraStorage, GEOMuninViewState;

@interface GEOMapURLParser : NSObject {

	NSURL* _url;
	int _mapType;
	int _transportType;
	int _trackingMode;
	BOOL _trackingModeSpecified;
	BOOL _exactPositionSpecified;
	GEOCoarseLocationLatLng _centerCoordinate;
	GEOCoarseLocationLatLng _span;
	float _zoomLevel;
	NSString* _addressString;
	NSString* _directionsSourceAddressString;
	NSString* _directionsDestinationAddressString;
	NSString* _searchQuery;
	GEOCoarseLocationLatLng _searchCoordinate;
	SCD_Struct_GE36 _searchRegion;
	int _searchProviderID;
	unsigned long long _searchUID;
	NSString* _contentProvider;
	NSString* _contentProviderID;
	NSString* _abRecordID;
	NSString* _abAddressID;
	NSString* _cnContactIdentifier;
	NSString* _cnAddressIdentifier;
	GEOUserSessionEntity* _userSessionEntity;
	double _altitude;
	double _rotation;
	double _tilt;
	double _roll;
	unsigned long long _lineMUID;
	NSString* _lineName;
	long long _favoritesType;
	BOOL _tester;
	GEOURLCollectionStorage* _collectionStorage;
	GEOURLExtraStorage* _extraStorage;
	GEOMuninViewState* _muninViewState;
	NSString* _label;
	BOOL _showCarDestinations;
	unsigned long long _curatedCollectionMUID;
	unsigned long long _publisherMUID;
	BOOL _showAllCuratedCollections;

}

@property (nonatomic,readonly) int mapType;                                                //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,readonly) int transportType;                                          //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) int trackingMode;                                           //@synthesize trackingMode=_trackingMode - In the implementation block
@property (nonatomic,readonly) BOOL trackingModeSpecified;                                 //@synthesize trackingModeSpecified=_trackingModeSpecified - In the implementation block
@property (nonatomic,readonly) BOOL exactPositionSpecified;                                //@synthesize exactPositionSpecified=_exactPositionSpecified - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng centerCoordinate;                   //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng span;                               //@synthesize span=_span - In the implementation block
@property (nonatomic,readonly) float zoomLevel;                                            //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) NSString * addressString;                                   //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,readonly) NSString * directionsSourceAddressString;                   //@synthesize directionsSourceAddressString=_directionsSourceAddressString - In the implementation block
@property (nonatomic,readonly) NSString * directionsDestinationAddressString;              //@synthesize directionsDestinationAddressString=_directionsDestinationAddressString - In the implementation block
@property (nonatomic,readonly) NSString * searchQuery;                                     //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng searchCoordinate;                   //@synthesize searchCoordinate=_searchCoordinate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE36 searchRegion;                               //@synthesize searchRegion=_searchRegion - In the implementation block
@property (nonatomic,readonly) int searchProviderID;                                       //@synthesize searchProviderID=_searchProviderID - In the implementation block
@property (nonatomic,readonly) unsigned long long searchUID;                               //@synthesize searchUID=_searchUID - In the implementation block
@property (nonatomic,readonly) NSString * contentProvider;                                 //@synthesize contentProvider=_contentProvider - In the implementation block
@property (nonatomic,readonly) NSString * contentProviderID;                               //@synthesize contentProviderID=_contentProviderID - In the implementation block
@property (nonatomic,readonly) NSString * abRecordID;                                      //@synthesize abRecordID=_abRecordID - In the implementation block
@property (nonatomic,readonly) NSString * abAddressID;                                     //@synthesize abAddressID=_abAddressID - In the implementation block
@property (nonatomic,readonly) NSString * cnContactIdentifier;                             //@synthesize cnContactIdentifier=_cnContactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * cnAddressIdentifier;                             //@synthesize cnAddressIdentifier=_cnAddressIdentifier - In the implementation block
@property (nonatomic,readonly) GEOUserSessionEntity * userSessionEntity;                   //@synthesize userSessionEntity=_userSessionEntity - In the implementation block
@property (nonatomic,readonly) double altitude;                                            //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double rotation;                                            //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) double tilt;                                                //@synthesize tilt=_tilt - In the implementation block
@property (nonatomic,readonly) double roll;                                                //@synthesize roll=_roll - In the implementation block
@property (nonatomic,readonly) unsigned long long lineMUID;                                //@synthesize lineMUID=_lineMUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * lineName;                                   //@synthesize lineName=_lineName - In the implementation block
@property (nonatomic,readonly) long long favoritesType;                                    //@synthesize favoritesType=_favoritesType - In the implementation block
@property (nonatomic,readonly) BOOL tester;                                                //@synthesize tester=_tester - In the implementation block
@property (nonatomic,readonly) GEOURLCollectionStorage * collectionStorage;                //@synthesize collectionStorage=_collectionStorage - In the implementation block
@property (nonatomic,readonly) GEOURLExtraStorage * extraStorage;                          //@synthesize extraStorage=_extraStorage - In the implementation block
@property (nonatomic,readonly) GEOMuninViewState * muninViewState;                         //@synthesize muninViewState=_muninViewState - In the implementation block
@property (nonatomic,readonly) BOOL showCarDestinations;                                   //@synthesize showCarDestinations=_showCarDestinations - In the implementation block
@property (nonatomic,readonly) unsigned long long curatedCollectionMUID;                   //@synthesize curatedCollectionMUID=_curatedCollectionMUID - In the implementation block
@property (nonatomic,readonly) unsigned long long publisherMUID;                           //@synthesize publisherMUID=_publisherMUID - In the implementation block
@property (nonatomic,readonly) BOOL showAllCuratedCollections;                             //@synthesize showAllCuratedCollections=_showAllCuratedCollections - In the implementation block
+(BOOL)isValidMapURL:(id)arg1 ;
+(BOOL)isValidMapsCategoryURL:(id)arg1 ;
+(BOOL)isValidMapsURLForAppendingSharedSessionID:(id)arg1 ;
-(GEOCoarseLocationLatLng)span;
-(double)tilt;
-(double)roll;
-(GEOCoarseLocationLatLng)searchCoordinate;
-(float)zoomLevel;
-(double)altitude;
-(GEOCoarseLocationLatLng)centerCoordinate;
-(id)initWithURL:(id)arg1 ;
-(BOOL)tester;
-(double)rotation;
-(int)mapType;
-(int)transportType;
-(NSString *)contentProvider;
-(NSString *)searchQuery;
-(unsigned long long)lineMUID;
-(NSString *)lineName;
-(NSString *)abRecordID;
-(NSString *)abAddressID;
-(unsigned long long)searchUID;
-(int)trackingMode;
-(SCD_Struct_GE36)searchRegion;
-(id)restoreCodableOfClass:(Class)arg1 queryItem:(id)arg2 key:(id)arg3 compressedKey:(id)arg4 ;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(BOOL)trackingModeSpecified;
-(BOOL)exactPositionSpecified;
-(NSString *)directionsSourceAddressString;
-(NSString *)directionsDestinationAddressString;
-(int)searchProviderID;
-(NSString *)contentProviderID;
-(NSString *)cnContactIdentifier;
-(NSString *)cnAddressIdentifier;
-(GEOUserSessionEntity *)userSessionEntity;
-(GEOURLExtraStorage *)extraStorage;
-(long long)favoritesType;
-(GEOURLCollectionStorage *)collectionStorage;
-(GEOMuninViewState *)muninViewState;
-(BOOL)showCarDestinations;
-(unsigned long long)curatedCollectionMUID;
-(unsigned long long)publisherMUID;
-(BOOL)showAllCuratedCollections;
-(NSString *)addressString;
-(NSString *)label;
@end

