/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOETATrafficUpdateRequester : NSObject
-(void)sendConditionalETATrafficUpdateRequest:(id)arg1 timeWindowDuration:(double)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(/*^block*/id)arg5 finishedHandler:(/*^block*/id)arg6 ;
-(void)sendETATrafficUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)cancelRequest:(id)arg1 ;
@end

