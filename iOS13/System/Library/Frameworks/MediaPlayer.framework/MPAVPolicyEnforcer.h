/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject {

	int _screenRecordingNotifyToken;
	BOOL _lastKnownScreenRecordingState;
	MPAVController* _controller;

}

@property (nonatomic,__weak,readonly) MPAVController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)dealloc;
-(MPAVController *)controller;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)initWithAVController:(id)arg1 ;
-(void)_isScreenRecordingDidChange:(BOOL)arg1 ;
-(void)_registerForScreenRecordingNotifications;
-(void)_updateScreenRecordingState;
-(void)_unregisterForScreenRecordingNotifications;
@end

