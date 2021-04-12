/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol _GEODirectionsRequesterServerProxy;
@interface GEODirectionsRequester : NSObject {

	id<_GEODirectionsRequesterServerProxy> _serverProxy;

}
+(void)useProxy:(Class)arg1 ;
+(void)useRemoteProxy;
+(void)useLocalProxy;
+(id)sharedRequester;
-(id)init;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 callbackQueue:(id)arg2 finished:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 callbackQueue:(id)arg6 finished:(/*^block*/id)arg7 networkActivity:(/*^block*/id)arg8 error:(/*^block*/id)arg9 ;
-(void)finalizeRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
@end

