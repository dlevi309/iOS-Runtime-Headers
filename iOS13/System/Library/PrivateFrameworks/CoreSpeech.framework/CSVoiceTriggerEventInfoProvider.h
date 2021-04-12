/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject {

	NSDictionary* _voiceTriggerInfo;
	NSDictionary* _rtsTriggerInfo;

}

@property (nonatomic,copy) NSDictionary * voiceTriggerInfo;              //@synthesize voiceTriggerInfo=_voiceTriggerInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * rtsTriggerInfo;                //@synthesize rtsTriggerInfo=_rtsTriggerInfo - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)voiceTriggerInfo;
-(void)setVoiceTriggerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)rtsTriggerInfo;
-(void)setRtsTriggerInfo:(NSDictionary *)arg1 ;
@end

