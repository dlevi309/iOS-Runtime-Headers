/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

