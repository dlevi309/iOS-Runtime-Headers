/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPVolumeControllerDelegate <NSObject>
@optional
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
-(void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2;
-(void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;

@end

