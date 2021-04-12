/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class geo_isolater, NSHashTable, NSMapTable;

@interface GEOETARequester : NSObject {

	geo_isolater* _isolater;
	NSHashTable* _pendingSimpleRequests;
	NSMapTable* _pendingRequests;

}
+(id)sharedRequester;
-(id)init;
-(void)dealloc;
-(void)cancelRequest:(id)arg1 ;
-(BOOL)_finishRequest:(id)arg1 ;
-(BOOL)_finishSimpleRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 callbackQueue:(id)arg5 willSendRequest:(/*^block*/id)arg6 finished:(/*^block*/id)arg7 networkActivity:(/*^block*/id)arg8 error:(/*^block*/id)arg9 ;
-(void)updateRequest:(id)arg1 callbackQueue:(id)arg2 finished:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 callbackQueue:(id)arg4 finished:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)cancelSimpleETARequest:(id)arg1 ;
@end

