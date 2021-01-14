/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol ANAnnounceReachabilityServiceInterface <NSObject>
@required
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1;
-(void)announceReachabilityForHomeName:(id)arg1 reply:(/*^block*/id)arg2;
-(void)announceReachabilityForRoomName:(id)arg1 inHomeName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)announceReachabilityForHomeUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)announceReachabilityForRoomUUID:(id)arg1 inHomeUUID:(id)arg2 reply:(/*^block*/id)arg3;

@end

