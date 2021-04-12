/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setPacketCount:(long long)arg1 ;
-(NSData *)packetDescriptions;
-(id)serializedData;
-(long long)packetCount;
-(VSAudioData *)audio;
-(void)setPacketDescriptions:(NSData *)arg1 ;
-(id)initWithKey:(id)arg1 data:(id)arg2 ;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(NSArray *)timingInfos;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(id)initWithKey:(id)arg1 audio:(id)arg2 wordTimingInfo:(id)arg3 ;
-(long long)magicVersion;
@end
