/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) SCD_Struct_MK8 searchRegion; 
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
+(BOOL)isValidMapURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)label;
-(double)roll;
-(double)rotation;
-(double)altitude;
-(unsigned long long)transportType;
-(NSString *)contentProvider;
-(NSString *)addressString;
-(unsigned long long)mapType;
-(NSString *)searchQuery;
-(CLLocationCoordinate2D)centerCoordinate;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(long long)trackingMode;
-(BOOL)trackingModeSpecified;
-(BOOL)exactPositionSpecified;
-(CGSize)span;
-(float)zoomLevel;
-(NSString *)directionsSourceAddressString;
-(NSString *)directionsDestinationAddressString;
-(CLLocationCoordinate2D)searchCoordinate;
-(SCD_Struct_MK8)searchRegion;
-(int)searchProviderID;
-(unsigned long long)searchUID;
-(NSString *)contentProviderID;
-(NSString *)abRecordID;
-(NSString *)abAddressID;
-(NSString *)cnContactIdentifier;
-(NSString *)cnAddressIdentifier;
-(GEOUserSessionEntity *)userSessionEntity;
-(double)tilt;
-(unsigned long long)lineMUID;
-(NSString *)lineName;
-(long long)favoritesType;
-(BOOL)tester;
-(GEOURLCollectionStorage *)collectionStorage;
-(GEOURLExtraStorage *)extraStorage;
-(GEOMuninViewState *)muninViewState;
-(BOOL)showCarDestinations;
-(MKMapCamera *)mapCamera;
@end

