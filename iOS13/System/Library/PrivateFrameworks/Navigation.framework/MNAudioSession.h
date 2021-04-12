/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNAudioSession <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic) unsigned long long voiceGuidanceLevel; 
@required
-(id)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)endSession;
-(BOOL)isSpeaking;
-(void)beginSession;
-(void)setVoiceGuidanceLevel:(unsigned long long)arg1;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5;
-(void)prepareToAnnounce;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/id)arg4;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1;
-(void)clearAllAnnouncements;
-(unsigned long long)voiceGuidanceLevel;

@end

