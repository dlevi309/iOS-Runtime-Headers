/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSTimeZone, NSString, NSArray, GEOLatLng, GEOStyleAttributes;


@protocol GEOTransitTripStop <NSObject>
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitDeparture> departure; 
@property (nonatomic,readonly) unsigned long long stationIdentifier; 
@property (nonatomic,readonly) GEOLatLng * location; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@required
-(NSTimeZone *)timeZone;
-(NSString *)displayName;
-(GEOLatLng *)location;
-(GEOStyleAttributes *)styleAttributes;
-(unsigned long long)stationIdentifier;
-(id<GEOTransitDeparture>)departure;
-(NSArray *)labelItems;

@end

