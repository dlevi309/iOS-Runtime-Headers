/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject {

	NSDictionary* _voiceTriggerInfo;
	NSDictionary* _rtsTriggerInfo;
	unsigned long long _triggerNotifiedMachTime;

}

@property (nonatomic,copy) NSDictionary * voiceTriggerInfo;                           //@synthesize voiceTriggerInfo=_voiceTriggerInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * rtsTriggerInfo;                             //@synthesize rtsTriggerInfo=_rtsTriggerInfo - In the implementation block
@property (assign,nonatomic) unsigned long long triggerNotifiedMachTime;              //@synthesize triggerNotifiedMachTime=_triggerNotifiedMachTime - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)voiceTriggerInfo;
-(void)setVoiceTriggerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)rtsTriggerInfo;
-(void)setRtsTriggerInfo:(NSDictionary *)arg1 ;
-(unsigned long long)triggerNotifiedMachTime;
-(void)setTriggerNotifiedMachTime:(unsigned long long)arg1 ;
@end

