/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>

@interface SBSUIInCallSceneClientSettings : UIApplicationSceneClientSettings

@property (nonatomic,readonly) unsigned long long preferredHardwareButtonEventTypes; 
@property (nonatomic,readonly) int preferredStatusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) BOOL supportsDeviceLockActions; 
@property (nonatomic,readonly) BOOL transientOverlayHomeIndicatorAutoHidden; 
@property (nonatomic,readonly) BOOL shouldBecomeVisibleWhenWakingDisplay; 
@property (getter=isCallConnected,nonatomic,readonly) BOOL callConnected; 
-(int)preferredStatusBarStyleOverridesToSuppress;
-(BOOL)shouldBecomeVisibleWhenWakingDisplay;
-(BOOL)isCallConnected;
-(BOOL)homeIndicatorAutoHidden;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BOOL)supportsDeviceLockActions;
-(BOOL)transientOverlayHomeIndicatorAutoHidden;
-(unsigned long long)preferredHardwareButtonEventTypes;
@end

