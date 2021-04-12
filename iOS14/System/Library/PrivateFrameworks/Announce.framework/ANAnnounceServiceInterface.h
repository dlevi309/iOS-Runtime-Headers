/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol ANAnnounceServiceInterface <NSObject>
@required
-(void)prewarm:(/*^block*/id)arg1;
-(void)sendRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)localParticipant:(/*^block*/id)arg1;
-(void)sendRequestLegacy:(id)arg1 completion:(/*^block*/id)arg2;
-(void)mockAnnouncement:(id)arg1 forHomeWithName:(id)arg2 playbackDeadline:(id)arg3 completion:(/*^block*/id)arg4;
-(void)receivedAnnouncementIDs:(/*^block*/id)arg1;
-(void)announcementForID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getReceivedAnnouncementsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getUnplayedAnnouncementsWithCompletionHandler:(/*^block*/id)arg1;
-(void)lastPlayedAnnouncementInfo:(/*^block*/id)arg1;
-(void)getScanningDeviceCandidates:(/*^block*/id)arg1;
-(void)contextFromAnnouncement:(id)arg1 reply:(/*^block*/id)arg2;
-(void)homeNamesForContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)isLocalDeviceInRoom:(id)arg1 reply:(/*^block*/id)arg2;
-(void)isAnnounceEnabledForAnyAccessoryInHome:(id)arg1 reply:(/*^block*/id)arg2;
-(void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg1 reply:(/*^block*/id)arg2;

@end

