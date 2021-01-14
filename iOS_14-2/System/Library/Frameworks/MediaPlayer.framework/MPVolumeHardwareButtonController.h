/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPVolumeControllerDataSource;
@interface MPVolumeHardwareButtonController : NSObject {

	double _pendingVolumeChange;
	BOOL _debounceVolumeRepeat;
	BOOL _didRegisterForButtonNotifications;
	id<MPVolumeControllerDataSource> _activeDataSource;

}

@property (nonatomic,retain) id<MPVolumeControllerDataSource> activeDataSource;              //@synthesize activeDataSource=_activeDataSource - In the implementation block
+(id)sharedController;
-(void)handleVolumeUpButton;
-(void)_changeVolumeBy:(double)arg1 ;
-(void)setActiveDataSource:(id<MPVolumeControllerDataSource>)arg1 ;
-(void)handleVolumeDownButton;
-(void)_volumeDownButtonTouchUp:(id)arg1 ;
-(void)_applicationWillResignActiveNotification;
-(void)_unregisterForButtonNotificationsIfNeeded;
-(id<MPVolumeControllerDataSource>)activeDataSource;
-(void)_registerForButtonNotificationsIfNeeded;
-(void)_volumeUpButtonTouchUp:(id)arg1 ;
-(void)_volumeDownButtonTouchDown:(id)arg1 ;
-(double)_calculateButtonRepeatDelay;
-(void)cancelVolumeEvent;
-(id)_init;
-(void)_commitVolumeChange;
-(void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2 ;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)_applicationDidBecomeActiveNotification;
-(void)_volumeUpButtonTouchDown:(id)arg1 ;
@end

