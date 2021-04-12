/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MediaControlsVolumeControllerObserver <NSObject>
@optional
-(void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4;
-(void)mediaControlsVolumeController:(id)arg1 didChangeUserInteractionEnabled:(BOOL)arg2 forRoute:(unsigned long long)arg3;

@required
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2;

@end

