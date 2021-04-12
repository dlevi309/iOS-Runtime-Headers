/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString, CSVoiceTriggerSecondPass, CSAudioStreamHolding, CSAudioProvider;

@interface CSRemoraSecondPassRequest : NSObject {

	BOOL _isSecondPassRunning;
	NSString* _firstPassDeviceID;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	CSAudioStreamHolding* _audioStreamHolding;
	CSAudioProvider* _audioProvider;

}

@property (nonatomic,retain) NSString * firstPassDeviceID;                                   //@synthesize firstPassDeviceID=_firstPassDeviceID - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;              //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (assign,nonatomic) BOOL isSecondPassRunning;                                       //@synthesize isSecondPassRunning=_isSecondPassRunning - In the implementation block
@property (nonatomic,retain) CSAudioStreamHolding * audioStreamHolding;                      //@synthesize audioStreamHolding=_audioStreamHolding - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                //@synthesize audioProvider=_audioProvider - In the implementation block
-(void)setAsset:(id)arg1 ;
-(void)start;
-(id)initWithDeviceID:(id)arg1 ;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
-(BOOL)isSecondPassRunning;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setIsSecondPassRunning:(BOOL)arg1 ;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(void)reset;
-(CSAudioProvider *)audioProvider;
-(void)dealloc;
-(void)holdAudioStreamWithTimeout:(double)arg1 ;
-(void)cancelAudioStreamHold;
-(NSString *)firstPassDeviceID;
-(void)setFirstPassDeviceID:(NSString *)arg1 ;
-(CSAudioStreamHolding *)audioStreamHolding;
-(void)setAudioStreamHolding:(CSAudioStreamHolding *)arg1 ;
@end

