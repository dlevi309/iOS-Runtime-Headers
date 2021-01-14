/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIWindowScene.h>

@interface SBSUIInCallWindowScene : UIWindowScene {

	BOOL _supportsDeviceLockEvents;
	BOOL _idleTimerDisabled;
	BOOL _shouldBecomeVisibleWhenWakingDisplay;
	BOOL _callConnected;
	BOOL _deviceAttachedToWindowedAccessory;
	int _preferredStatusBarStyleOverridesToSuppress;
	unsigned long long _preferredHardwareButtonEventTypes;
	long long _presentationMode;
	CGRect _windowedAccessoryCutoutFrameInScreen;

}

@property (assign,nonatomic) unsigned long long preferredHardwareButtonEventTypes;                                             //@synthesize preferredHardwareButtonEventTypes=_preferredHardwareButtonEventTypes - In the implementation block
@property (assign,nonatomic) int preferredStatusBarStyleOverridesToSuppress;                                                   //@synthesize preferredStatusBarStyleOverridesToSuppress=_preferredStatusBarStyleOverridesToSuppress - In the implementation block
@property (assign,nonatomic) BOOL supportsDeviceLockEvents;                                                                    //@synthesize supportsDeviceLockEvents=_supportsDeviceLockEvents - In the implementation block
@property (assign,getter=isIdleTimerDisabled,nonatomic) BOOL idleTimerDisabled;                                                //@synthesize idleTimerDisabled=_idleTimerDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;                                                        //@synthesize shouldBecomeVisibleWhenWakingDisplay=_shouldBecomeVisibleWhenWakingDisplay - In the implementation block
@property (assign,getter=isCallConnected,nonatomic) BOOL callConnected;                                                        //@synthesize callConnected=_callConnected - In the implementation block
@property (nonatomic,readonly) long long presentationMode;                                                                     //@synthesize presentationMode=_presentationMode - In the implementation block
@property (getter=isDeviceAttachedToWindowedAccessory,nonatomic,readonly) BOOL deviceAttachedToWindowedAccessory;              //@synthesize deviceAttachedToWindowedAccessory=_deviceAttachedToWindowedAccessory - In the implementation block
@property (nonatomic,readonly) CGRect windowedAccessoryCutoutFrameInScreen;                                                    //@synthesize windowedAccessoryCutoutFrameInScreen=_windowedAccessoryCutoutFrameInScreen - In the implementation block
-(id)initWithSession:(id)arg1 connectionOptions:(id)arg2 ;
-(CGRect)windowedAccessoryCutoutFrameInScreen;
-(void)setPreferredHardwareButtonEventTypes:(unsigned long long)arg1 ;
-(void)setPreferredStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setShouldBecomeVisibleWhenWakingDisplay:(BOOL)arg1 ;
-(void)setCallConnected:(BOOL)arg1 ;
-(void)requestTransitionToPresentationMode:(long long)arg1 isUserInitiated:(BOOL)arg2 ;
-(void)requestTransitionToPresentationMode:(long long)arg1 isUserInitiated:(BOOL)arg2 analyticsSource:(id)arg3 ;
-(void)_handleFrameChanged;
-(void)setSupportsDeviceLockEvents:(BOOL)arg1 ;
-(BOOL)supportsDeviceLockEvents;
-(void)requestTransitionToPresentationMode:(long long)arg1 ;
-(void)_updatePresentationMode:(long long)arg1 analyticsSource:(id)arg2 ;
-(void)_setAttachedToWindowedAccessory:(BOOL)arg1 windowedAccessoryCutoutFrameInScreen:(CGRect)arg2 ;
-(int)preferredStatusBarStyleOverridesToSuppress;
-(BOOL)shouldBecomeVisibleWhenWakingDisplay;
-(BOOL)isCallConnected;
-(BOOL)isDeviceAttachedToWindowedAccessory;
-(long long)presentationMode;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(unsigned long long)preferredHardwareButtonEventTypes;
-(void)_handleHardwareButtonEventSceneActions:(id)arg1 ;
-(void)_handleDeviceLockAction:(id)arg1 ;
-(BOOL)isIdleTimerDisabled;
@end

