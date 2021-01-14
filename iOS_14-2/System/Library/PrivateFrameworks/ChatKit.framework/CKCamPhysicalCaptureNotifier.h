/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setState:(long long)arg1 ;
-(id)init;
-(void)_updateCaptureButtonNotifications;
-(void)_handleVolumeUpButtonUpNotification:(id)arg1 ;
-(SBSHardwareButtonService *)_cameraButtonRequest;
-(void)_handleVolumeUpButtonDownNotification:(id)arg1 ;
-(void)_handleVolumeDownButtonUpNotification:(id)arg1 ;
-(void)set_cameraButtonRequest:(SBSHardwareButtonService *)arg1 ;
-(void)_handleVolumeDownButtonDownNotification:(id)arg1 ;
-(void)_setVolumeUpButtonState:(long long)arg1 ;
-(void)_setVolumeDownButtonState:(long long)arg1 ;
-(long long)_volumeDownButtonState;
-(void)_updateStateAndNotifyDelegateIfNeeded;
-(long long)_volumeUpButtonState;
-(id<CKCamPhysicalCaptureNotifierDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<CKCamPhysicalCaptureNotifierDelegate>)arg1 ;
-(long long)state;
-(BOOL)isEnabled;
-(void)dealloc;
@end

