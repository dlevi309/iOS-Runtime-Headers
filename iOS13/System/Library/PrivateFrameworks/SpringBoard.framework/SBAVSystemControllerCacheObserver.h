/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAVSystemControllerCacheObserver <NSObject>
@optional
-(void)cacheDidRebuildAfterServerDeath:(id)arg1;
-(void)cache:(id)arg1 didUpdateRecordingPID:(int)arg2;
-(void)cache:(id)arg1 didUpdateActiveAudioRoute:(id)arg2;
-(void)cache:(id)arg1 didUpdatePickableRoutes:(id)arg2;
-(void)cache:(id)arg1 didUpdateActiveOutputDevices:(id)arg2;
-(void)cache:(id)arg1 didUpdateActiveAudioRoutingWithRoute:(id)arg2 routeAttributes:(id)arg3 activeOutputDevices:(id)arg4;
-(void)cache:(id)arg1 didUpdateAirplayDisplayActive:(BOOL)arg2;
-(void)cache:(id)arg1 didUpdateVolumeLimitEnforced:(BOOL)arg2;

@end

