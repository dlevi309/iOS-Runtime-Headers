/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSPolicy.h>

@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyIOS : CSPolicy {

	CSPolicy* _voiceTriggerEnabledPolicy;

}

@property (nonatomic,retain) CSPolicy * voiceTriggerEnabledPolicy;              //@synthesize voiceTriggerEnabledPolicy=_voiceTriggerEnabledPolicy - In the implementation block
-(id)init;
-(void)_subscribeEventMonitors;
-(void)_addSelfTriggerDetectorEnabledConditions;
-(CSPolicy *)voiceTriggerEnabledPolicy;
-(void)setVoiceTriggerEnabledPolicy:(CSPolicy *)arg1 ;
@end

