/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol ANAnnounceReachabilityServiceInterfaceDelegate <NSObject>
@required
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeName:(id)arg2;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomName:(id)arg2 inHomeName:(id)arg3;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeUUID:(id)arg2;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomUUID:(id)arg2 inHomeUUID:(id)arg3;

@end

