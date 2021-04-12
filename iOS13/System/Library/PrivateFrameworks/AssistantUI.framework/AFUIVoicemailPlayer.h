/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AFUIAudioPlayer.h>

@class VMVoicemailManager, VMVoicemail;

@interface AFUIVoicemailPlayer : AFUIAudioPlayer {

	VMVoicemailManager* _voicemailManager;
	VMVoicemail* _voicemailObject;

}

@property (setter=_setVoicemailObject:,getter=_voicemailObject,nonatomic,retain) VMVoicemail * voicemailObject;              //@synthesize voicemailObject=_voicemailObject - In the implementation block
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)_audioCategory;
-(id)_audioURL;
-(void)setPlaybackCommand:(id)arg1 ;
-(id)_voicemailManager;
-(void)_setVoicemailObject:(id)arg1 ;
-(long long)_voicemailID;
-(id)_voicemailObject;
-(void)_updateVoicemailPlayedState:(id)arg1 finished:(BOOL)arg2 ;
-(unsigned long long)_audioOptions;
@end

