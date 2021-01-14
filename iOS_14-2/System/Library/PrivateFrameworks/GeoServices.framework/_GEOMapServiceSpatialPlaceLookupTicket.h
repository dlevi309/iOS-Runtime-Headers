/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSpatialPlaceLookupTicket.h>

@class NSArray, GEOMapServiceTraits, NSString;

@interface _GEOMapServiceSpatialPlaceLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialPlaceLookupTicket> {

	NSArray* _parameters;

}

@property (nonatomic,readonly) NSArray * parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxParametersCount;
-(NSArray *)parameters;
-(void)createSpatialPlaceLookupResultForLookupResults:(id)arg1 mapItems:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)mapItemsForPlaceLookupResponses:(id)arg1 usingIdentifierToMapItemMap:(id)arg2 ;
-(id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3 ;
-(id)spatialPlaceLookupResultsFromResponse:(id)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)callCompletion:(/*^block*/id)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3 ;
-(void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
@end

