/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

