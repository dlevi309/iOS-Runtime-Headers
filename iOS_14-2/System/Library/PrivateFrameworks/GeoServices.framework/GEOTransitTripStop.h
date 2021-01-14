/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GEOStyleAttributes *)styleAttributes;
-(GEOLatLng *)location;
-(unsigned long long)stationIdentifier;
-(id<GEOTransitDeparture>)departure;
-(NSArray *)labelItems;
-(NSString *)displayName;

@end

