/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class TLAlert;

@interface SMSApplicationSoundHelper : NSObject {

	TLAlert* _alert;
	BOOL _bulletinSuppressed;

}

@property (assign,nonatomic) BOOL bulletinSuppressed;              //@synthesize bulletinSuppressed=_bulletinSuppressed - In the implementation block
-(BOOL)_shouldPlayTapbackSound;
-(void)stopPlayingAlert;
-(void)playSendSoundForMessage:(id)arg1 ;
-(BOOL)shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)arg1 ;
-(BOOL)allowedByScreenTimeToPlayReceiveSoundForChat:(id)arg1 ;
-(void)playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(BOOL)arg2 ;
-(BOOL)bulletinSuppressed;
-(void)setBulletinSuppressed:(BOOL)arg1 ;
@end

