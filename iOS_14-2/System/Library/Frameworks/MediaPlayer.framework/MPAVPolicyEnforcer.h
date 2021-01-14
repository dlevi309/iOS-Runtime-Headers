/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject {

	int _screenRecordingNotifyToken;
	BOOL _lastKnownScreenRecordingState;
	MPAVController* _controller;

}

@property (nonatomic,__weak,readonly) MPAVController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)_registerForScreenRecordingNotifications;
-(void)_unregisterForScreenRecordingNotifications;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_isScreenRecordingDidChange:(BOOL)arg1 ;
-(void)_updateScreenRecordingState;
-(MPAVController *)controller;
-(id)initWithAVController:(id)arg1 ;
-(void)dealloc;
@end

