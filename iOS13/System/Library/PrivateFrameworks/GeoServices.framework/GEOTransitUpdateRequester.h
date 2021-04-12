/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class geo_isolater, NSHashTable;

@interface GEOTransitUpdateRequester : NSObject {

	geo_isolater* _isolater;
	NSHashTable* _pendingRequests;

}
+(id)sharedRequester;
-(id)init;
-(void)cancelTransitRouteUpdateRequest:(id)arg1 ;
-(void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_finishRequest:(id)arg1 ;
@end

