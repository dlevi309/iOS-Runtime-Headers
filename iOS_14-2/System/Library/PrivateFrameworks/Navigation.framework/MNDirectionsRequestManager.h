/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSMutableDictionary, geo_isolater, GEODirectionService;

@interface MNDirectionsRequestManager : NSObject {

	NSMutableDictionary* _pendingRequests;
	geo_isolater* _pendingRequestsIsolater;
	GEODirectionService* _directionsService;

}
-(id)init;
-(void)cancelDirectionsRequestWithIdentifier:(id)arg1 ;
-(void)_requestDirectionsFromTraceWithPath:(id)arg1 feedback:(id)arg2 auditToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)_requestServerDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)requestDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
@end

