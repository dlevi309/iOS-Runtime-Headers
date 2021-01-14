/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNAudioSession.h>

@class MNTraceRouteSimulator, NSString;

@interface MNSimulatorAudioSession : NSObject <MNAudioSession> {

	id _delegate;
	BOOL _isSpeaking;
	unsigned long long _voiceGuidanceLevel;
	MNTraceRouteSimulator* _simulator;

}

@property (nonatomic,retain) MNTraceRouteSimulator * simulator;                  //@synthesize simulator=_simulator - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long voiceGuidanceLevel;              //@synthesize voiceGuidanceLevel=_voiceGuidanceLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToAnnounce;
-(void)beginSession;
-(id)delegate;
-(void)stop;
-(BOOL)isSpeaking;
-(void)setDelegate:(id)arg1 ;
-(void)endSession;
-(void)setSimulator:(MNTraceRouteSimulator *)arg1 ;
-(void)setVoiceGuidanceLevel:(unsigned long long)arg1 ;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(MNTraceRouteSimulator *)simulator;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1 ;
-(void)clearAllAnnouncements;
-(unsigned long long)voiceGuidanceLevel;
-(id)initWithSimulator:(id)arg1 ;
@end

