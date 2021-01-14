/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData, NSData;

@interface VSAudioData : NSObject <NSCopying> {

	long long _packetCount;
	NSMutableData* _mutableAudioData;
	NSMutableData* _mutableDescription;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSMutableData * mutableAudioData;                //@synthesize mutableAudioData=_mutableAudioData - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableDescription;              //@synthesize mutableDescription=_mutableDescription - In the implementation block
@property (nonatomic,retain) NSData * audioData; 
@property (assign,nonatomic) AudioStreamBasicDescription asbd;                //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) long long packetCount;                           //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,retain) NSData * packetDescriptions; 
+(id)audioDataFromPresynthesisRequest:(id)arg1 ;
+(id)audioDataFromFile:(id)arg1 error:(id*)arg2 ;
+(AudioStreamBasicDescription)asbdFromDescription:(id)arg1 ;
+(id)audioDataWithASBD:(AudioStreamBasicDescription)arg1 rawData:(id)arg2 ;
+(id)audioDataFromSAUIAudioData:(id)arg1 ;
+(id)pcmAudioDataFromOpusAudio:(id)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(id)init;
-(long long)packetCount;
-(void)setPacketCount:(long long)arg1 ;
-(NSData *)packetDescriptions;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)concatenateWithAudio:(id)arg1 ;
-(void)setPacketDescriptions:(NSData *)arg1 ;
-(BOOL)writeToFilePath:(id)arg1 ;
-(NSMutableData *)mutableAudioData;
-(NSMutableData *)mutableDescription;
-(unsigned)totalFrames;
-(void)setMutableAudioData:(NSMutableData *)arg1 ;
-(void)setMutableDescription:(NSMutableData *)arg1 ;
-(BOOL)populateWithPCMData:(id)arg1 ;
-(BOOL)populateWithOpusData:(id)arg1 ;
-(BOOL)populatePCMDataWithSiriOpusSData:(id)arg1 withOpusASBD:(AudioStreamBasicDescription)arg2 ;
@end

