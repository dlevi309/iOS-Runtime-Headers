/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoVolumeObserving <NSObject>
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volume; 
@property (setter=onVolumeChange:,nonatomic,copy) id volumeChangeBlock; 
@property (setter=onMuteStateChange:,nonatomic,copy) id muteStateChangeBlock; 
@required
-(float)volume;
-(BOOL)muted;
-(id)volumeChangeBlock;
-(id)muteStateChangeBlock;
-(void)onVolumeChange:(/*^block*/id)arg1;
-(void)onMuteStateChange:(/*^block*/id)arg1;

@end

