/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol ANLocalPlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>
@required
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)stopPlayingAnnouncementsWithCompletionHandler:(/*^block*/id)arg1;
-(void)nextAnnouncementWithCompletionHandler:(/*^block*/id)arg1;
-(void)previousAnnouncementWithCompletionHandler:(/*^block*/id)arg1;

@end

