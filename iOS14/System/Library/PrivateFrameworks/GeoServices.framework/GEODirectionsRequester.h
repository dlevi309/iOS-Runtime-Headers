/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol _GEODirectionsRequesterServerProxy;
@interface GEODirectionsRequester : NSObject {

	id<_GEODirectionsRequesterServerProxy> _serverProxy;

}
+(void)useProxy:(Class)arg1 ;
+(id)sharedRequester;
+(void)useLocalProxy;
+(void)useRemoteProxy;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startRequest:(id)arg1 callbackQueue:(id)arg2 finished:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)finalizeRequest:(id)arg1 ;
-(id)init;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 callbackQueue:(id)arg6 finished:(/*^block*/id)arg7 networkActivity:(/*^block*/id)arg8 error:(/*^block*/id)arg9 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 finished:(/*^block*/id)arg4 networkActivity:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)cancelRequest:(id)arg1 ;
@end

