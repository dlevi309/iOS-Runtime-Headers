/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSString;

@interface SFSSInstrumentMetrics : NSObject {

	BOOL _isSpeechRequest;
	NSString* _text;
	NSString* _voiceAssetKey;
	NSString* _resourceAssetKey;
	NSString* _audioOutputRoute;
	NSString* _clientBundleIdentifier;
	long long _requestCreatedTimestamp;
	long long _synthesisBeginTimestamp;
	long long _synthesisEndTimestamp;
	long long _speakBeginTimestamp;
	long long _speakEndTimestamp;
	double _audioDuration;
	long long _errorCode;
	long long _sourceOfTTS;

}

@property (copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (copy) NSString * voiceAssetKey;                         //@synthesize voiceAssetKey=_voiceAssetKey - In the implementation block
@property (copy) NSString * resourceAssetKey;                      //@synthesize resourceAssetKey=_resourceAssetKey - In the implementation block
@property (copy) NSString * audioOutputRoute;                      //@synthesize audioOutputRoute=_audioOutputRoute - In the implementation block
@property (copy) NSString * clientBundleIdentifier;                //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign) long long requestCreatedTimestamp;              //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
@property (assign) long long synthesisBeginTimestamp;              //@synthesize synthesisBeginTimestamp=_synthesisBeginTimestamp - In the implementation block
@property (assign) long long synthesisEndTimestamp;                //@synthesize synthesisEndTimestamp=_synthesisEndTimestamp - In the implementation block
@property (assign) long long speakBeginTimestamp;                  //@synthesize speakBeginTimestamp=_speakBeginTimestamp - In the implementation block
@property (assign) long long speakEndTimestamp;                    //@synthesize speakEndTimestamp=_speakEndTimestamp - In the implementation block
@property (assign) double audioDuration;                           //@synthesize audioDuration=_audioDuration - In the implementation block
@property (assign) long long errorCode;                            //@synthesize errorCode=_errorCode - In the implementation block
@property (assign) long long sourceOfTTS;                          //@synthesize sourceOfTTS=_sourceOfTTS - In the implementation block
@property (assign) BOOL isSpeechRequest;                           //@synthesize isSpeechRequest=_isSpeechRequest - In the implementation block
-(double)playbackDuration;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)errorCode;
-(id)dictionaryMetrics;
-(NSString *)voiceAssetKey;
-(void)setVoiceAssetKey:(NSString *)arg1 ;
-(NSString *)audioOutputRoute;
-(void)setAudioOutputRoute:(NSString *)arg1 ;
-(long long)requestCreatedTimestamp;
-(void)setRequestCreatedTimestamp:(long long)arg1 ;
-(long long)synthesisBeginTimestamp;
-(void)setSynthesisBeginTimestamp:(long long)arg1 ;
-(long long)synthesisEndTimestamp;
-(void)setSynthesisEndTimestamp:(long long)arg1 ;
-(double)audioDuration;
-(void)setAudioDuration:(double)arg1 ;
-(id)description;
-(long long)sourceOfTTS;
-(void)setSourceOfTTS:(long long)arg1 ;
-(void)setIsSpeechRequest:(BOOL)arg1 ;
-(NSString *)text;
-(BOOL)isSpeechRequest;
-(void)setErrorCode:(long long)arg1 ;
-(void)setResourceAssetKey:(NSString *)arg1 ;
-(void)setSpeakBeginTimestamp:(long long)arg1 ;
-(void)setSpeakEndTimestamp:(long long)arg1 ;
-(double)clockFactor;
-(double)speakLatency;
-(double)synthesisLatency;
-(NSString *)resourceAssetKey;
-(long long)speakBeginTimestamp;
-(long long)speakEndTimestamp;
@end

