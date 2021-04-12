/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VCCapabilities;

@interface AVConferenceCallState : NSObject {

	BOOL _audioIsPaused;
	VCCapabilities* _capabilities;
	BOOL _isVideoPaused;
	BOOL _isAudioSending;

}

@property (assign,getter=isAudioPaused,nonatomic) BOOL audioIsPaused;                //@synthesize audioIsPaused=_audioIsPaused - In the implementation block
@property (assign,getter=isVideoPaused,nonatomic) BOOL isVideoPaused;                //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,getter=isAudioSending,nonatomic) BOOL isAudioSending;              //@synthesize isAudioSending=_isAudioSending - In the implementation block
@property (nonatomic,retain) VCCapabilities * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
-(VCCapabilities *)capabilities;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(void)dealloc;
-(BOOL)isVideoPaused;
-(BOOL)isAudioPaused;
-(void)setAudioIsPaused:(BOOL)arg1 ;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(BOOL)isAudioSending;
-(void)setIsAudioSending:(BOOL)arg1 ;
@end

