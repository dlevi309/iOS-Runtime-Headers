/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class TLAlert;

@interface SMSApplicationSoundHelper : NSObject {

	TLAlert* _alert;
	BOOL _bulletinSuppressed;

}

@property (assign,nonatomic) BOOL bulletinSuppressed;              //@synthesize bulletinSuppressed=_bulletinSuppressed - In the implementation block
-(BOOL)_shouldPlayTapbackSound;
-(BOOL)_isPlaySoundEnabled;
-(void)_playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(BOOL)arg2 ;
-(void)stopPlayingAlert;
-(void)playSendSoundForMessage:(id)arg1 ;
-(void)setBulletinSuppressed:(BOOL)arg1 ;
-(BOOL)shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)arg1 ;
-(BOOL)allowedByScreenTimeToPlayReceiveSoundForChat:(id)arg1 ;
-(void)playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(BOOL)arg2 ;
-(BOOL)bulletinSuppressed;
@end

