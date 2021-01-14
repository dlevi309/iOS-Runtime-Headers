/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MediaControlsVolumeControllerObserver <NSObject>
@optional
-(void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(long long)arg4;
-(void)mediaControlsVolumeController:(id)arg1 didChangeUserInteractionEnabled:(BOOL)arg2 forRoute:(long long)arg3;
-(void)mediaControlsVolumeController:(id)arg1 didChangeHeadTrackedSpatialAudioEnabled:(BOOL)arg2;

@required
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2;

@end

