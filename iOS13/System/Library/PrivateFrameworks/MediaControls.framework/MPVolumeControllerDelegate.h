/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MPVolumeControllerDelegate <NSObject>
@optional
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned)arg2;
-(void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;

@end

