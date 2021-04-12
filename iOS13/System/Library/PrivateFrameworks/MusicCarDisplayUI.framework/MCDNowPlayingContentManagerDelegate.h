/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@protocol MCDNowPlayingContentManagerDelegate <NSObject>
@optional
-(void)contentManager:(id)arg1 shouldShowPlaybackQueue:(BOOL)arg2;
-(void)contentManager:(id)arg1 processResponse:(id)arg2 error:(id)arg3;
-(void)contentManagerReloadData:(id)arg1;
-(void)contentManager:(id)arg1 presentViewController:(id)arg2;
-(void)contentManager:(id)arg1 bufferingItem:(BOOL)arg2;
-(void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg1;
-(void)contentManager:(id)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
-(void)contentManagerCompletedAllPlayback:(id)arg1;
-(void)contentManager:(id)arg1 sectionName:(id)arg2;
-(void)contentManager:(id)arg1 itemDidChange:(id)arg2 response:(id)arg3;

@end

