/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@protocol CPUINowPlayingViewControllerDataSource <NSObject>
@optional
-(long long)placeholderTypeForNowPlayingViewController:(id)arg1;
-(long long)shuffleTypeForNowPlayingViewController:(id)arg1;
-(long long)repeatTypeForNowPlayingViewController:(id)arg1;

@required
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;
-(id)artistTextForNowPlayingController:(id)arg1;
-(id)albumTextForNowPlayingController:(id)arg1;
-(id)titleForNowPlayingController:(id)arg1;
-(id)backgroundArtForNowPlayingController:(id)arg1;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
-(SCD_Struct_MC2*)durationSnapshotForNowPlayingViewController:(id)arg1;

@end

