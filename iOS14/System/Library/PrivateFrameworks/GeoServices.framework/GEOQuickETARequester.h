/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOQuickETARequest, GEOETARequest, GEODirectionsRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOETARequest* _simpleETARequest;
	GEODirectionsRequest* _directionsETARequest;
	NSString* _loggingFacility;

}
+(BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)requestETAFromOrigin:(id)arg1 toDestinations:(id)arg2 transportType:(int)arg3 timepoint:(GEOTimepoint)arg4 includeDistance:(BOOL)arg5 commonOptions:(id)arg6 automobileOptions:(id)arg7 walkingOptions:(id)arg8 transitOptions:(id)arg9 cyclingOptions:(id)arg10 auditToken:(id)arg11 handler:(/*^block*/id)arg12 callbackQueue:(id)arg13 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithHandler:(/*^block*/id)arg3 ;
-(void)_calculateRoutingETAWithSummary:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)calculateETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithResponseHandler:(/*^block*/id)arg3 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 WithHandler:(/*^block*/id)arg2 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/id)arg1 ;
-(void)calculateETAWithResponseHandler:(/*^block*/id)arg1 ;
-(void)calculateETAFromAPI:(BOOL)arg1 WithResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cancel;
@end

