/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reserved;
-(void)setReserved:(unsigned)arg1 ;
-(double)sample_rate;
-(unsigned)format_id;
-(unsigned)format_flags;
-(unsigned)bytes_per_packet;
-(unsigned)frames_per_packet;
-(unsigned)bytes_per_frame;
-(unsigned)channels_per_frame;
-(unsigned)bits_per_channel;
-(void)setSample_rate:(double)arg1 ;
-(void)setFormat_id:(unsigned)arg1 ;
-(void)setFormat_flags:(unsigned)arg1 ;
-(void)setBytes_per_packet:(unsigned)arg1 ;
-(void)setFrames_per_packet:(unsigned)arg1 ;
-(void)setBytes_per_frame:(unsigned)arg1 ;
-(void)setChannels_per_frame:(unsigned)arg1 ;
-(void)setBits_per_channel:(unsigned)arg1 ;
@end

