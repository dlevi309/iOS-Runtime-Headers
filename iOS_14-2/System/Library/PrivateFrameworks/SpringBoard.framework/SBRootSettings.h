/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/_UISettings.h>

@class SBAttentionAwarenessSettings, SBProximitySettings;

@interface SBRootSettings : _UISettings {

	SBAttentionAwarenessSettings* _attentionAwarenessSettings;
	SBProximitySettings* _proximitySettings;

}

@property (retain) SBAttentionAwarenessSettings * attentionAwarenessSettings;              //@synthesize attentionAwarenessSettings=_attentionAwarenessSettings - In the implementation block
@property (retain) SBProximitySettings * proximitySettings;                                //@synthesize proximitySettings=_proximitySettings - In the implementation block
-(SBProximitySettings *)proximitySettings;
-(void)setAttentionAwarenessSettings:(SBAttentionAwarenessSettings *)arg1 ;
-(void)setProximitySettings:(SBProximitySettings *)arg1 ;
-(SBAttentionAwarenessSettings *)attentionAwarenessSettings;
@end

