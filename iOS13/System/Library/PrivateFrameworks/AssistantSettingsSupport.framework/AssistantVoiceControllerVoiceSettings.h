/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setInProgressVoice:(AFVoiceInfo *)arg1 ;
-(void)setCurrentVoice:(AFVoiceInfo *)arg1 ;
-(AFVoiceInfo *)inProgressVoice;
-(AFVoiceInfo *)currentVoice;
@end

