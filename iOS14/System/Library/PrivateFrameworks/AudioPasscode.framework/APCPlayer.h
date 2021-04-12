/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@protocol OS_dispatch_queue;
@class AVPlayer, APCEncoderProcessor, APCPlayerEngine, AUPasscodeCodecConfiguration, NSData, NSObject, APCPlayerEmbedInfo;

@interface APCPlayer : NSObject {

	AVPlayer* _player;
	APCEncoderProcessor* _encodeProcessor;
	APCPlayerEngine* _playerEngine;
	AUPasscodeCodecConfiguration* _codecConfig;
	BOOL _isPlaying;
	NSData* _payload;
	NSData* _configurationData;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _callbackTimingMSec;

}

@property (nonatomic,copy,readonly) NSData * payload;                                 //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) NSData * configurationData;                       //@synthesize configurationData=_configurationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) BOOL isPlaying;                                                  //@synthesize isPlaying=_isPlaying - In the implementation block
@property (nonatomic,readonly) APCPlayerEmbedInfo * embeddingInfo; 
@property (assign,nonatomic) unsigned long long callbackTimingMSec;                   //@synthesize callbackTimingMSec=_callbackTimingMSec - In the implementation block
+(id)fileNameForCarrierAsset:(unsigned long long)arg1 ;
+(id)carrierAssetIdentifiers;
+(id)urlForCarrierAsset:(unsigned long long)arg1 ;
+(unsigned long long)assetIDFromIdentifier:(id)arg1 ;
-(BOOL)isPlaying;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSData *)payload;
-(NSData *)configurationData;
-(void)stopSend:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithListenerCapabilityData:(id)arg1 payloadLength:(unsigned long long)arg2 ;
-(float)preparePayload:(id)arg1 usingCarrierAtURL:(id)arg2 error:(id*)arg3 ;
-(float)preparePayload:(id)arg1 usingCarrierAsset:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)startSend;
-(void)endPasscodeEmbedding;
-(APCPlayerEmbedInfo *)embeddingInfo;
-(id)initWithCodecConfiguration:(id)arg1 ;
-(id)createCompatibleConfigForCapabilites:(id)arg1 ;
-(BOOL)startSendAtTime:(unsigned long long)arg1 withBeginning:(/*^block*/id)arg2 ;
-(id)initWithListenerCapabilityData:(id)arg1 ;
-(void)setCallbackTimingMSec:(unsigned long long)arg1 ;
-(void)stopSendAfterMinimumLoops:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stopSendWithFadeOut:(float)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)callbackTimingMSec;
@end

