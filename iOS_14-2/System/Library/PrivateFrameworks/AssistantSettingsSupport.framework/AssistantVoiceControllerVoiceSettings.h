/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/


@class AFVoiceInfo;

@interface AssistantVoiceControllerVoiceSettings : NSObject {

	AFVoiceInfo* _inProgressVoice;
	AFVoiceInfo* _currentVoice;

}

@property (nonatomic,retain) AFVoiceInfo * inProgressVoice;              //@synthesize inProgressVoice=_inProgressVoice - In the implementation block
@property (nonatomic,retain) AFVoiceInfo * currentVoice;                 //@synthesize currentVoice=_currentVoice - In the implementation block
+(id)settingsWithInProgressVoice:(id)arg1 currentVoice:(id)arg2 ;
-(AFVoiceInfo *)inProgressVoice;
-(void)setInProgressVoice:(AFVoiceInfo *)arg1 ;
-(AFVoiceInfo *)currentVoice;
-(void)setCurrentVoice:(AFVoiceInfo *)arg1 ;
@end

