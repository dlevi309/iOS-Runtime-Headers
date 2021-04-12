/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMPhysicalCaptureNotifierDelegate, BSInvalidatable;
@class UIView;

@interface CAMPhysicalCaptureNotifier : NSObject {

	BOOL _enabled;
	id<CAMPhysicalCaptureNotifierDelegate> _delegate;
	long long _state;
	long long __volumeUpButtonState;
	long long __volumeDownButtonState;
	UIView* __view;
	id<BSInvalidatable> __cameraButtonRequest;

}

@property (assign,setter=_setState:,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,setter=_setVolumeUpButtonState:,nonatomic) long long _volumeUpButtonState;                  //@synthesize _volumeUpButtonState=__volumeUpButtonState - In the implementation block
@property (assign,setter=_setVolumeDownButtonState:,nonatomic) long long _volumeDownButtonState;              //@synthesize _volumeDownButtonState=__volumeDownButtonState - In the implementation block
@property (nonatomic,readonly) UIView * _view;                                                                //@synthesize _view=__view - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> _cameraButtonRequest;                                        //@synthesize _cameraButtonRequest=__cameraButtonRequest - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPhysicalCaptureNotifierDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CAMPhysicalCaptureNotifierDelegate>)delegate;
-(void)setDelegate:(id<CAMPhysicalCaptureNotifierDelegate>)arg1 ;
-(long long)state;
-(BOOL)isEnabled;
-(void)_setState:(long long)arg1 ;
-(UIView *)_view;
-(id)initWithView:(id)arg1 ;
-(void)_updateCaptureButtonNotifications;
-(void)_handleVolumeUpButtonUpNotification:(id)arg1 ;
-(void)_handleVolumeUpButtonDownNotification:(id)arg1 ;
-(void)_handleVolumeDownButtonUpNotification:(id)arg1 ;
-(void)_handleVolumeDownButtonDownNotification:(id)arg1 ;
-(void)set_cameraButtonRequest:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)_cameraButtonRequest;
-(void)_setVolumeUpButtonState:(long long)arg1 ;
-(void)_setVolumeDownButtonState:(long long)arg1 ;
-(long long)_volumeDownButtonState;
-(void)_updateStateAndNotifyDelegateIfNeeded;
-(long long)_volumeUpButtonState;
@end

