/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNAudioSession.h>

@protocol MNNavigationAudioSessionDelegate;
@class NSString;

@interface MNNavigationAudioSession : NSObject <MNAudioSession> {

	unsigned long long _sessionType;
	NSString* _language;
	id<MNNavigationAudioSessionDelegate> _delegate;
	BOOL _speechEnabled;
	BOOL _muteSpeechOverride;
	unsigned long long _voiceGuidanceLevel;
	unsigned long long _appContext;

}

@property (assign,nonatomic) unsigned long long sessionType;                     //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,readonly) NSString * language;                              //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) unsigned long long appContext;                      //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic) BOOL speechEnabled;                                 //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (assign,nonatomic) BOOL muteSpeechOverride;                            //@synthesize muteSpeechOverride=_muteSpeechOverride - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long voiceGuidanceLevel;              //@synthesize voiceGuidanceLevel=_voiceGuidanceLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(BOOL)speechEnabled;
-(void)prepareToAnnounce;
-(BOOL)muteSpeechOverride;
-(id)init;
-(void)beginSession;
-(id)delegate;
-(unsigned long long)sessionType;
-(void)stop;
-(BOOL)isSpeaking;
-(void)setDelegate:(id)arg1 ;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)setMuteSpeechOverride:(BOOL)arg1 ;
-(unsigned long long)appContext;
-(void)endSession;
-(void)setAppContext:(unsigned long long)arg1 ;
-(NSString *)language;
-(void)setSessionType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setVoiceGuidanceLevel:(unsigned long long)arg1 ;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1 ;
-(void)clearAllAnnouncements;
-(unsigned long long)voiceGuidanceLevel;
-(BOOL)_deviceSettingsAllowSpeech;
-(BOOL)_isVoiceGuidanceEnabled;
-(BOOL)_beepIfNecessaryWithShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2 ;
-(void)_speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

