/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOETATrafficUpdateRequester : NSObject
-(void)cancelRequest:(id)arg1 ;
-(void)sendETATrafficUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)sendConditionalETATrafficUpdateRequest:(id)arg1 timeWindowDuration:(double)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(/*^block*/id)arg5 finishedHandler:(/*^block*/id)arg6 ;
@end

