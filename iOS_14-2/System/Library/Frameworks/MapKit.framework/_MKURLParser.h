/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class GEOMapURLParser, NSString, GEOUserSessionEntity, MKMapCamera, GEOURLCollectionStorage, GEOURLExtraStorage, GEOMuninViewState;

@interface _MKURLParser : NSObject {

	GEOMapURLParser* parser;

}

@property (nonatomic,readonly) unsigned long long mapType; 
@property (nonatomic,readonly) unsigned long long transportType; 
@property (nonatomic,readonly) BOOL trackingModeSpecified; 
@property (nonatomic,readonly) long long trackingMode; 
@property (nonatomic,readonly) BOOL exactPositionSpecified; 
@property (nonatomic,readonly) CLLocationCoordinate2D centerCoordinate; 
@property (nonatomic,readonly) CGSize span; 
@property (nonatomic,readonly) float zoomLevel; 
@property (readonly) NSString * addressString; 
@property (readonly) NSString * directionsSourceAddressString; 
@property (readonly) NSString * directionsDestinationAddressString; 
@property (readonly) NSString * searchQuery; 
@property (readonly) NSString * label; 
@property (nonatomic,readonly) CLLocationCoordinate2D searchCoordinate; 
@property (nonatomic,readonly) SCD_Struct_MK9 searchRegion; 
@property (nonatomic,readonly) int searchProviderID; 
@property (nonatomic,readonly) unsigned long long searchUID; 
@property (nonatomic,readonly) NSString * contentProvider; 
@property (nonatomic,readonly) NSString * contentProviderID; 
@property (nonatomic,readonly) NSString * abRecordID; 
@property (nonatomic,readonly) NSString * abAddressID; 
@property (nonatomic,readonly) NSString * cnContactIdentifier; 
@property (nonatomic,readonly) NSString * cnAddressIdentifier; 
@property (readonly) GEOUserSessionEntity * userSessionEntity; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double rotation; 
@property (nonatomic,readonly) double tilt; 
@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) MKMapCamera * mapCamera; 
@property (nonatomic,readonly) unsigned long long lineMUID; 
@property (copy,readonly) NSString * lineName; 
@property (nonatomic,readonly) long long favoritesType; 
@property (nonatomic,readonly) BOOL tester; 
@property (nonatomic,readonly) GEOURLCollectionStorage * collectionStorage; 
@property (nonatomic,readonly) GEOURLExtraStorage * extraStorage; 
@property (nonatomic,readonly) GEOMuninViewState * muninViewState; 
@property (readonly) BOOL showCarDestinations; 
@property (nonatomic,readonly) unsigned long long curatedCollectionMUID; 
@property (nonatomic,readonly) unsigned long long publisherMUID; 
@property (readonly) BOOL showAllCuratedCollections; 
+(BOOL)isAppleMapsGuidesURL:(id)arg1 ;
+(BOOL)isValidMapURL:(id)arg1 ;
-(CGSize)span;
-(double)tilt;
-(double)roll;
-(CLLocationCoordinate2D)searchCoordinate;
-(float)zoomLevel;
-(double)altitude;
-(CLLocationCoordinate2D)centerCoordinate;
-(id)initWithURL:(id)arg1 ;
-(BOOL)tester;
-(double)rotation;
-(MKMapCamera *)mapCamera;
-(unsigned long long)mapType;
-(unsigned long long)transportType;
-(NSString *)contentProvider;
-(NSString *)searchQuery;
-(unsigned long long)lineMUID;
-(NSString *)lineName;
-(NSString *)abRecordID;
-(NSString *)abAddressID;
-(unsigned long long)searchUID;
-(long long)trackingMode;
-(SCD_Struct_MK9)searchRegion;
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

