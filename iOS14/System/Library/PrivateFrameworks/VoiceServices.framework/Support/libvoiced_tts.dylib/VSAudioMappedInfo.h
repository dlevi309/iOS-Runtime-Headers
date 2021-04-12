/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@interface VSAudioMappedInfo : NSObject {

	unsigned long long _packetCount;
	NSRange _audioBytesRange;
	NSRange _packetDescriptionsRange;

}

@property (assign,nonatomic) NSRange audioBytesRange;                      //@synthesize audioBytesRange=_audioBytesRange - In the implementation block
@property (assign,nonatomic) unsigned long long packetCount;               //@synthesize packetCount=_packetCount - In the implementation block
@property (assign,nonatomic) NSRange packetDescriptionsRange;              //@synthesize packetDescriptionsRange=_packetDescriptionsRange - In the implementation block
-(unsigned long long)packetCount;
-(void)setPacketCount:(unsigned long long)arg1 ;
-(NSRange)audioBytesRange;
-(void)setAudioBytesRange:(NSRange)arg1 ;
-(NSRange)packetDescriptionsRange;
-(void)setPacketDescriptionsRange:(NSRange)arg1 ;
@end

