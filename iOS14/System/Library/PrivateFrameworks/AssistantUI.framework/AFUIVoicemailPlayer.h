/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AFUIAudioPlayer.h>

@class VMVoicemailManager, VMVoicemail;

@interface AFUIVoicemailPlayer : AFUIAudioPlayer {

	VMVoicemailManager* _voicemailManager;
	VMVoicemail* _voicemailObject;

}

@property (setter=_setVoicemailObject:,getter=_voicemailObject,nonatomic,retain) VMVoicemail * voicemailObject;              //@synthesize voicemailObject=_voicemailObject - In the implementation block
-(id)_audioCategory;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)_audioURL;
-(void)setPlaybackCommand:(id)arg1 ;
-(void)_setVoicemailObject:(id)arg1 ;
-(id)_voicemailManager;
-(long long)_voicemailID;
-(id)_voicemailObject;
-(void)_updateVoicemailPlayedState:(id)arg1 finished:(BOOL)arg2 ;
-(unsigned long long)_audioOptions;
@end

