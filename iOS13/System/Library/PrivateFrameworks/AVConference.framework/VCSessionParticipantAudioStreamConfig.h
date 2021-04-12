/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCAudioStreamConfig.h>

@class VCAudioRuleCollection;

@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig {

	VCAudioRuleCollection* _audioRules;
	VCAudioRuleCollection* _audioRulesNegotiated;

}

@property (nonatomic,retain) VCAudioRuleCollection * audioRules;                        //@synthesize audioRules=_audioRules - In the implementation block
@property (nonatomic,retain) VCAudioRuleCollection * audioRulesNegotiated;              //@synthesize audioRulesNegotiated=_audioRulesNegotiated - In the implementation block
-(void)dealloc;
-(VCAudioRuleCollection *)audioRulesNegotiated;
-(void)setAudioRulesNegotiated:(VCAudioRuleCollection *)arg1 ;
-(VCAudioRuleCollection *)audioRules;
-(void)setAudioRules:(VCAudioRuleCollection *)arg1 ;
@end

