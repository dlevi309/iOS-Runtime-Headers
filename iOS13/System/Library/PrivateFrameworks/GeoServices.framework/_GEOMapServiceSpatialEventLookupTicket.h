/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSpatialEventLookupTicket.h>

@class NSArray, GEOMapServiceTraits, NSString;

@interface _GEOMapServiceSpatialEventLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialEventLookupTicket> {

	NSArray* _parameters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
+(unsigned long long)maxParametersCount;
-(NSArray *)parameters;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4 ;
-(void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3 ;
-(id)spatialEventLookupResultsFromResponse:(id)arg1 ;
-(void)createSpatialEventLookupResultForLookupResults:(id)arg1 usingPlaces:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)mapItemIdentifiersToPOIEventsMapForPlaces:(id)arg1 ;
-(id)eventsForEventLookupResponses:(id)arg1 usingIdentifierToEventMap:(id)arg2 ;
@end

