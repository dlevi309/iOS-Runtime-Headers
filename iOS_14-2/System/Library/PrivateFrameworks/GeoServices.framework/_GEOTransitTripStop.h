/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitTripStop.h>

@protocol GEOTransitDeparture;
@class NSTimeZone, NSString, NSArray, GEOLatLng, GEOStyleAttributes;

@interface _GEOTransitTripStop : NSObject <GEOTransitTripStop> {

	NSTimeZone* _timeZone;
	unsigned long long _stationIdentifier;
	NSString* _transitName;
	NSArray* _labelItems;
	GEOLatLng* _location;
	GEOStyleAttributes* _styleAttributes;
	id<GEOTransitDeparture> _departure;

}

@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitDeparture> departure;                 //@synthesize departure=_departure - In the implementation block
@property (nonatomic,readonly) unsigned long long stationIdentifier; 
@property (nonatomic,readonly) GEOLatLng * location; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitTripStopsForPlaceData:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(GEOStyleAttributes *)styleAttributes;
-(GEOLatLng *)location;
-(unsigned long long)stationIdentifier;
-(NSString *)debugDescription;
-(id<GEOTransitDeparture>)departure;
-(NSArray *)labelItems;
-(id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2 ;
-(NSString *)displayName;
@end

