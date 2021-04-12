/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class AUAudioUnitBus, AUAudioUnitBusArray, NSData, AUPasscodeCodecConfiguration, NSObject, NSMutableDictionary;

@interface AUPasscodeEncoder : AUAudioUnit {

	unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase> >* _kernel;
	BufferedInputBus* _inputBus;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AUAudioUnitBusArray* _outputBusArray;
	map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > >* _apcEncoderConfig;
	long long _assetSampleCount;
	BOOL _outputIsSilenced;
	unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage> >* _eofMessage;
	unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger> >* _rtMessenger;
	unsigned _fadeOutNumSamples;
	unsigned _fadeOutSampleIndex;
	unsigned long long _loopNumber;
	unsigned long long _beginningTime;
	BOOL _silenceOutputOnNextAssetEnding;
	BOOL _triggerFadeOut;
	BOOL _embedPasscode;
	float _fadeOutTimeSeconds;
	NSData* _payload;
	AUPasscodeCodecConfiguration* _codecConfig;
	long long _assetLength;
	unsigned long long _numLoopsToStopAfter;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _assetEndedAndSilencedHandler;
	NSMutableDictionary* _passcodeEmbedInfo;

}

@property (nonatomic,copy) NSData * payload;                                          //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) AUPasscodeCodecConfiguration * codecConfig;              //@synthesize codecConfig=_codecConfig - In the implementation block
@property (assign,nonatomic) long long assetLength;                                   //@synthesize assetLength=_assetLength - In the implementation block
@property (assign,nonatomic) BOOL silenceOutputOnNextAssetEnding;                     //@synthesize silenceOutputOnNextAssetEnding=_silenceOutputOnNextAssetEnding - In the implementation block
@property (assign,nonatomic) unsigned long long numLoopsToStopAfter;                  //@synthesize numLoopsToStopAfter=_numLoopsToStopAfter - In the implementation block
@property (assign,nonatomic) float fadeOutTimeSeconds;                                //@synthesize fadeOutTimeSeconds=_fadeOutTimeSeconds - In the implementation block
@property (assign,nonatomic) BOOL triggerFadeOut;                                     //@synthesize triggerFadeOut=_triggerFadeOut - In the implementation block
@property (assign,nonatomic) BOOL embedPasscode;                                      //@synthesize embedPasscode=_embedPasscode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id assetEndedAndSilencedHandler;                           //@synthesize assetEndedAndSilencedHandler=_assetEndedAndSilencedHandler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passcodeEmbedInfo;                 //@synthesize passcodeEmbedInfo=_passcodeEmbedInfo - In the implementation block
+(void)registerAU;
+(AudioComponentDescription)getAUDesc;
+(id)supportedEncoders;
-(void)dealloc;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)deallocateRenderResources;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(BOOL)canProcessInPlace;
-(/*^block*/id)internalRenderBlock;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)setCodecConfig:(AUPasscodeCodecConfiguration *)arg1 ;
-(void)setAssetLength:(long long)arg1 ;
-(void)setAssetEndedAndSilencedHandler:(id)arg1 ;
-(AUPasscodeCodecConfiguration *)codecConfig;
-(void)setPasscodeEmbedInfo:(NSMutableDictionary *)arg1 ;
-(long long)assetLength;
-(void)setEmbedPasscode:(BOOL)arg1 ;
-(void)setSilenceOutputOnNextAssetEnding:(BOOL)arg1 ;
-(void)setFadeOutTimeSeconds:(float)arg1 ;
-(void)setTriggerFadeOut:(BOOL)arg1 ;
-(void)setNumLoopsToStopAfter:(unsigned long long)arg1 ;
-(NSMutableDictionary *)passcodeEmbedInfo;
-(void)handleEOFReachedForAsset;
-(BOOL)silenceOutputOnNextAssetEnding;
-(unsigned long long)numLoopsToStopAfter;
-(float)fadeOutTimeSeconds;
-(BOOL)triggerFadeOut;
-(BOOL)embedPasscode;
-(id)assetEndedAndSilencedHandler;
@end

