/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class geo_isolater, NSHashTable;

@interface GEOTransitUpdateRequester : NSObject {

	geo_isolater* _isolater;
	NSHashTable* _pendingRequests;

}
+(id)sharedRequester;
-(void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)init;
-(BOOL)_finishRequest:(id)arg1 ;
-(void)cancelTransitRouteUpdateRequest:(id)arg1 ;
@end

