/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSData;

@interface SFSSAudioData : NSObject {

	NSData* _audioData;
	long long _packetCount;
	NSData* _packetDescriptions;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSData * audioData;                            //@synthesize audioData=_audioData - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) long long packetCount;                         //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,retain) NSData * packetDescriptions;                   //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
-(AudioStreamBasicDescription)asbd;
-(long long)packetCount;
-(void)setPacketCount:(long long)arg1 ;
-(NSData *)packetDescriptions;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(id)initWithASBD:(AudioStreamBasicDescription)arg1 rawData:(id)arg2 ;
-(double)duration;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setPacketDescriptions:(NSData *)arg1 ;
-(BOOL)populateWithPCMData:(id)arg1 ;
-(BOOL)populateWithOpusData:(id)arg1 ;
@end

