/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVideoVolumeObserving <NSObject>
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

