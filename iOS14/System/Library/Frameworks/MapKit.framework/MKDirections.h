/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKLocationManagerOperation, OS_dispatch_group;
@class MKDirectionsRequest, GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, NSObject, GEORouteAttributes, NSError;

@interface MKDirections : NSObject {

	MKDirectionsRequest* _request;
	GEODirectionsRequest* _geoRequest;
	GEOQuickETARequest* _etaRequest;
	GEOQuickETARequester* _etaRequester;
	id<MKLocationManagerOperation> _locationOperation;
	NSObject*<OS_dispatch_group> _waypointsDispatchGroup;
	GEORouteAttributes* _routeAttributes;
	NSError* _previousError;

}

@property (getter=isCalculating,nonatomic,readonly) BOOL calculating; 
-(id)init;
-(BOOL)isCalculating;
-(void)_cleanupLocationOperation;
-(void)_calculateDirectionsWithTraits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_establishCurrentLocationAndThen:(/*^block*/id)arg1 ;
-(void)_issueDirectionsRequestForOrigin:(id)arg1 destination:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(BOOL)arg1 traits:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_issueETARequestForOrigin:(id)arg1 destination:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_calculateETAWithTraits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)calculateDirectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)calculateETAWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

