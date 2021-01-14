/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol AFUIAudioPlayerDelegate;
@class AceObject, NSUUID, AVAudioPlayer, NSString;

@interface AFUIAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	BOOL _deactivateAudioSessionOnPlaybackFinished;
	id<AFUIAudioPlayerDelegate> _delegate;
	AceObject* _playbackCommand;
	NSUUID* _conversationItemIdentifier;
	AVAudioPlayer* _player;

}

@property (setter=_setPlayer:,getter=_player,nonatomic,retain) AVAudioPlayer * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<AFUIAudioPlayerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AceObject * playbackCommand;                                           //@synthesize playbackCommand=_playbackCommand - In the implementation block
@property (assign,nonatomic) BOOL deactivateAudioSessionOnPlaybackFinished;                         //@synthesize deactivateAudioSessionOnPlaybackFinished=_deactivateAudioSessionOnPlaybackFinished - In the implementation block
@property (assign,nonatomic,__weak) NSUUID * conversationItemIdentifier;                            //@synthesize conversationItemIdentifier=_conversationItemIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)voicemailPlayer;
+(id)audioMessagePlayer;
-(id)_audioCategory;
-(id<AFUIAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<AFUIAudioPlayerDelegate>)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)_setPlayer:(id)arg1 ;
-(void)startPlaying;
-(void)stopPlaying;
-(id)_audioURL;
-(AceObject *)playbackCommand;
-(void)setPlaybackCommand:(AceObject *)arg1 ;
-(id)_player;
-(unsigned long long)_audioOptions;
-(BOOL)deactivateAudioSessionOnPlaybackFinished;
-(void)setDeactivateAudioSessionOnPlaybackFinished:(BOOL)arg1 ;
-(NSUUID *)conversationItemIdentifier;
-(void)setConversationItemIdentifier:(NSUUID *)arg1 ;
@end

