/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPVolumeControllerDataSourceDelegate <NSObject>
@required
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeMuted:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2;

@end

