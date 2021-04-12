/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol ADWebProcessDelegate <NSObject>
@optional
-(void)webProcessPlugInDidCreateBrowserContextController;
-(void)webProcessPlugInWillDestroyBrowserContextController;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
-(void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg1;
-(void)webProcessVideoAdJSOGetVideoInfo:(/*^block*/id)arg1;
-(void)webProcessVideoAdJSOCreativeViewLoaded;
-(void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1;
-(void)webProcessVideoAdJSODidCallViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3;
-(void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2;
-(void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1;
-(void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2;
-(void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2;

@end

