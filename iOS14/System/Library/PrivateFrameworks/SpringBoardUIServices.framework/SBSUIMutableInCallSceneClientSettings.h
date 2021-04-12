/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>

@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings {

	BOOL _supportsDeviceLockActions;
	BOOL _transientOverlayHomeIndicatorAutoHidden;
	BOOL _shouldBecomeVisibleWhenWakingDisplay;
	BOOL _callConnected;
	int _preferredStatusBarStyleOverridesToSuppress;
	unsigned long long _preferredHardwareButtonEventTypes;

}

@property (assign,nonatomic) unsigned long long preferredHardwareButtonEventTypes;              //@synthesize preferredHardwareButtonEventTypes=_preferredHardwareButtonEventTypes - In the implementation block
@property (assign,nonatomic) int preferredStatusBarStyleOverridesToSuppress;                    //@synthesize preferredStatusBarStyleOverridesToSuppress=_preferredStatusBarStyleOverridesToSuppress - In the implementation block
@property (assign,nonatomic) BOOL supportsDeviceLockActions;                                    //@synthesize supportsDeviceLockActions=_supportsDeviceLockActions - In the implementation block
@property (assign,nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden;                      //@synthesize transientOverlayHomeIndicatorAutoHidden=_transientOverlayHomeIndicatorAutoHidden - In the implementation block
@property (assign,nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;                         //@synthesize shouldBecomeVisibleWhenWakingDisplay=_shouldBecomeVisibleWhenWakingDisplay - In the implementation block
@property (assign,getter=isCallConnected,nonatomic) BOOL callConnected;                         //@synthesize callConnected=_callConnected - In the implementation block
-(void)setPreferredHardwareButtonEventTypes:(unsigned long long)arg1 ;
-(void)setPreferredStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setShouldBecomeVisibleWhenWakingDisplay:(BOOL)arg1 ;
-(void)setCallConnected:(BOOL)arg1 ;
-(void)setSupportsDeviceLockActions:(BOOL)arg1 ;
-(int)preferredStatusBarStyleOverridesToSuppress;
-(BOOL)shouldBecomeVisibleWhenWakingDisplay;
-(BOOL)isCallConnected;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BOOL)supportsDeviceLockActions;
-(BOOL)transientOverlayHomeIndicatorAutoHidden;
-(void)setTransientOverlayHomeIndicatorAutoHidden:(BOOL)arg1 ;
-(unsigned long long)preferredHardwareButtonEventTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHomeIndicatorAutoHidden:(BOOL)arg1 ;
@end

