/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, SALocalSearchCarRouteOptions, NSString, SALocalSearchMapItem, NSNumber, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (nonatomic,copy) NSDate * arrivalDate; 
@property (nonatomic,retain) SALocalSearchCarRouteOptions * carRouteOptions; 
@property (assign,nonatomic) BOOL chainResultSet; 
@property (nonatomic,copy) NSDate * departureDate; 
@property (nonatomic,copy) NSString * directionsType; 
@property (nonatomic,retain) SALocalSearchMapItem * itemDestination; 
@property (nonatomic,retain) SALocalSearchMapItem * itemSource; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * preferredDirectionsMode; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (assign,nonatomic) BOOL searchAlongRoute; 
@property (nonatomic,retain) SALocalSearchMapItemList * searchItems; 
@property (assign,nonatomic) BOOL showDirections; 
@property (assign,nonatomic) BOOL showTraffic; 
@property (assign,nonatomic) BOOL suppressNavigation; 
+(id)showMapPoints;
+(id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocalSearchMapItemList *)searchItems;
-(void)setSearchItems:(SALocalSearchMapItemList *)arg1 ;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSDate *)arrivalDate;
-(NSDate *)departureDate;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(NSString *)directionsType;
-(void)setDirectionsType:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setDepartureDate:(NSDate *)arg1 ;
-(BOOL)showTraffic;
-(void)setShowTraffic:(BOOL)arg1 ;
-(BOOL)requiresResponse;
-(SALocalSearchMapItem *)itemSource;
-(void)setItemSource:(SALocalSearchMapItem *)arg1 ;
-(BOOL)chainResultSet;
-(void)setChainResultSet:(BOOL)arg1 ;
-(NSNumber *)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg1 ;
-(BOOL)searchAlongRoute;
-(void)setSearchAlongRoute:(BOOL)arg1 ;
-(SALocalSearchCarRouteOptions *)carRouteOptions;
-(void)setCarRouteOptions:(SALocalSearchCarRouteOptions *)arg1 ;
-(SALocalSearchMapItem *)itemDestination;
-(void)setItemDestination:(SALocalSearchMapItem *)arg1 ;
-(NSString *)preferredDirectionsMode;
-(void)setPreferredDirectionsMode:(NSString *)arg1 ;
-(BOOL)showDirections;
-(void)setShowDirections:(BOOL)arg1 ;
-(BOOL)suppressNavigation;
-(void)setSuppressNavigation:(BOOL)arg1 ;
@end

