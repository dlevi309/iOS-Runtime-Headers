/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/VSSpeechCacheItem.h>

@class NSArray, VSAudioData, NSString, NSData;

@interface VSSpeechCacheAudio : NSObject <VSSpeechCacheItem> {

	long long _magicVersion;
	NSArray* _timingInfos;
	VSAudioData* _audio;
	NSString* _key;
	NSData* _audioData;
	long long _packetCount;
	NSData* _packetDescriptions;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * audioData;                            //@synthesize audioData=_audioData - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) long long packetCount;                         //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,retain) NSData * packetDescriptions;                   //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
@property (nonatomic,readonly) long long magicVersion;                      //@synthesize magicVersion=_magicVersion - In the implementation block
@property (nonatomic,readonly) NSArray * timingInfos;                       //@synthesize timingInfos=_timingInfos - In the implementation block
@property (nonatomic,readonly) VSAudioData * audio;                         //@synthesize audio=_audio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serializedData;
-(AudioStreamBasicDescription)asbd;
-(VSAudioData *)audio;
-(long long)packetCount;
-(void)setPacketCount:(long long)arg1 ;
-(NSData *)packetDescriptions;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 data:(id)arg2 ;
-(NSArray *)timingInfos;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setPacketDescriptions:(NSData *)arg1 ;
-(id)initWithKey:(id)arg1 audio:(id)arg2 wordTimingInfo:(id)arg3 ;
-(long long)magicVersion;
@end

