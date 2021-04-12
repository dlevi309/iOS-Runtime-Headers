/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKCamPhysicalCaptureNotifierDelegate;
@class SBSHardwareButtonService;

@interface CKCamPhysicalCaptureNotifier : NSObject {

	BOOL _enabled;
	id<CKCamPhysicalCaptureNotifierDelegate> _delegate;
	long long _state;
	long long __volumeUpButtonState;
	long long __volumeDownButtonState;
	SBSHardwareButtonService* __cameraButtonRequest;

}

@property (assign,setter=_setState:,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,setter=_setVolumeUpButtonState:,nonatomic) long long _volumeUpButtonState;                  //@synthesize _volumeUpButtonState=__volumeUpButtonState - In the implementation block
@property (assign,setter=_setVolumeDownButtonState:,nonatomic) long long _volumeDownButtonState;              //@synthesize _volumeDownButtonState=__volumeDownButtonState - In the implementation block
@property (nonatomic,retain) SBSHardwareButtonService * _cameraButtonRequest;                                 //@synthesize _cameraButtonRequest=__cameraButtonRequest - In the implementation block
@property (assign,nonatomic,__weak) id<CKCamPhysicalCaptureNotifierDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CKCamPhysicalCaptureNotifierDelegate>)delegate;
-(void)setDelegate:(id<CKCamPhysicalCaptureNotifierDelegate>)arg1 ;
-(long long)state;
-(BOOL)isEnabled;
-(void)_setState:(long long)arg1 ;
-(void)_updateCaptureButtonNotifications;
-(void)_handleVolumeUpButtonUpNotification:(id)arg1 ;
-(void)_handleVolumeUpButtonDownNotification:(id)arg1 ;
-(void)_handleVolumeDownButtonUpNotification:(id)arg1 ;
-(void)_handleVolumeDownButtonDownNotification:(id)arg1 ;
-(void)set_cameraButtonRequest:(SBSHardwareButtonService *)arg1 ;
-(SBSHardwareButtonService *)_cameraButtonRequest;
-(void)_setVolumeUpButtonState:(long long)arg1 ;
-(void)_setVolumeDownButtonState:(long long)arg1 ;
-(long long)_volumeDownButtonState;
-(void)_updateStateAndNotifyDelegateIfNeeded;
-(long long)_volumeUpButtonState;
@end

