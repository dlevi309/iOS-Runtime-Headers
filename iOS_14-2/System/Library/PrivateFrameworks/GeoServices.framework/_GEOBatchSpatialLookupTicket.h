/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceBatchSpatialLookupTicket.h>

@class GEOMapServiceTraits, GEOSpatialLookupBatchRequest, GEOSpatialLookupBatchResponse, NSArray, NSMapTable, NSString;

@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket <GEOMapServiceBatchSpatialLookupTicket> {

	GEOSpatialLookupBatchRequest* _request;
	GEOSpatialLookupBatchResponse* _response;
	NSArray* _parameters;
	NSMapTable* _parametersToMapItems;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)mapItemsForParameters:(id)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(id)initWithRequest:(id)arg1 forParameters:(id)arg2 traits:(id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4 ;
-(SCD_Struct_GE91)dataRequestKind;
@end

