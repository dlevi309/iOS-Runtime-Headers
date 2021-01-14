/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAVSystemControllerCacheObserver <NSObject>
@optional
-(void)cache:(id)arg1 didUpdateAirplayDisplayActive:(BOOL)arg2;
-(void)cache:(id)arg1 didUpdateVolumeLimit:(float)arg2;
-(void)cache:(id)arg1 didUpdatePickableRoutes:(id)arg2;
-(void)cache:(id)arg1 didUpdateVolumeLimitEnforced:(BOOL)arg2;
-(void)cache:(id)arg1 didUpdateActiveAudioRoute:(id)arg2;
-(void)cache:(id)arg1 didUpdateActiveAudioRoutingWithRoute:(id)arg2 routeAttributes:(id)arg3 activeOutputDevices:(id)arg4;
-(void)cacheDidRebuildAfterServerDeath:(id)arg1;
-(void)cache:(id)arg1 didUpdateActiveOutputDevices:(id)arg2;

@end

