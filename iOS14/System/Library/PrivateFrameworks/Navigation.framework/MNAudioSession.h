/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNAudioSession <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic) unsigned long long voiceGuidanceLevel; 
@required
-(void)prepareToAnnounce;
-(void)beginSession;
-(id)delegate;
-(void)stop;
-(BOOL)isSpeaking;
-(void)setDelegate:(id)arg1;
-(void)endSession;
-(void)setVoiceGuidanceLevel:(unsigned long long)arg1;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/id)arg4;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1;
-(void)clearAllAnnouncements;
-(unsigned long long)voiceGuidanceLevel;

@end

