/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPVolumeControllerDataSourceDelegate <NSObject>
@required
-(void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeMuted:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned)arg2;

@end

