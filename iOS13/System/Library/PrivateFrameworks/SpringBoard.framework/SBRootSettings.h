/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/_UISettings.h>

@class SBStatusBarStyleOverridesSettings, SBAttentionAwarenessSettings, SBProximitySettings;

@interface SBRootSettings : _UISettings {

	SBStatusBarStyleOverridesSettings* _statusBarStyleOverridesSettings;
	SBAttentionAwarenessSettings* _attentionAwarenessSettings;
	SBProximitySettings* _proximitySettings;

}

@property (retain) SBStatusBarStyleOverridesSettings * statusBarStyleOverridesSettings;              //@synthesize statusBarStyleOverridesSettings=_statusBarStyleOverridesSettings - In the implementation block
@property (retain) SBAttentionAwarenessSettings * attentionAwarenessSettings;                        //@synthesize attentionAwarenessSettings=_attentionAwarenessSettings - In the implementation block
@property (retain) SBProximitySettings * proximitySettings;                                          //@synthesize proximitySettings=_proximitySettings - In the implementation block
-(SBAttentionAwarenessSettings *)attentionAwarenessSettings;
-(SBProximitySettings *)proximitySettings;
-(SBStatusBarStyleOverridesSettings *)statusBarStyleOverridesSettings;
-(void)setStatusBarStyleOverridesSettings:(SBStatusBarStyleOverridesSettings *)arg1 ;
-(void)setAttentionAwarenessSettings:(SBAttentionAwarenessSettings *)arg1 ;
-(void)setProximitySettings:(SBProximitySettings *)arg1 ;
@end

