/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@protocol MCDNowPlayingViewControllerDataSource <NSObject>
@optional
-(long long)shuffleTypeForNowPlayingViewController:(id)arg1;
-(long long)repeatTypeForNowPlayingViewController:(id)arg1;
-(BOOL)likedForNowPlayingViewController:(id)arg1;

@required
-(id)artistTextForNowPlayingController:(id)arg1;
-(id)albumTextForNowPlayingController:(id)arg1;
-(id)titleForNowPlayingController:(id)arg1;
-(id)backgroundArtForNowPlayingController:(id)arg1;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
-(SCD_Struct_MC1*)durationSnapshotForNowPlayingViewController:(id)arg1;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;

@end

