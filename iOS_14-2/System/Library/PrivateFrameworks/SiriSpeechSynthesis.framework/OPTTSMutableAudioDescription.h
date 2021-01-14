/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libvoiced_tts.dylib/OPTTSAudioDescription.h>

@interface OPTTSMutableAudioDescription : OPTTSAudioDescription

@property (assign,nonatomic) double sample_rate; 
@property (assign,nonatomic) unsigned format_id; 
@property (assign,nonatomic) unsigned format_flags; 
@property (assign,nonatomic) unsigned bytes_per_packet; 
@property (assign,nonatomic) unsigned frames_per_packet; 
@property (assign,nonatomic) unsigned bytes_per_frame; 
@property (assign,nonatomic) unsigned channels_per_frame; 
@property (assign,nonatomic) unsigned bits_per_channel; 
@property (assign,nonatomic) unsigned reserved; 
-(id)init;
-(unsigned)reserved;
-(void)setReserved:(unsigned)arg1 ;
-(unsigned)format_id;
-(double)sample_rate;
-(void)setSample_rate:(double)arg1 ;
-(void)setFormat_id:(unsigned)arg1 ;
-(unsigned)format_flags;
-(void)setFormat_flags:(unsigned)arg1 ;
-(unsigned)bytes_per_packet;
-(void)setBytes_per_packet:(unsigned)arg1 ;
-(unsigned)frames_per_packet;
-(void)setFrames_per_packet:(unsigned)arg1 ;
-(unsigned)bytes_per_frame;
-(void)setBytes_per_frame:(unsigned)arg1 ;
-(unsigned)channels_per_frame;
-(void)setChannels_per_frame:(unsigned)arg1 ;
-(unsigned)bits_per_channel;
-(void)setBits_per_channel:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

