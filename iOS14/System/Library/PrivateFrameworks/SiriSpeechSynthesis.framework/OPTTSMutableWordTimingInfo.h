/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libvoiced_tts.dylib/OPTTSWordTimingInfo.h>

@class NSString;

@interface OPTTSMutableWordTimingInfo : OPTTSWordTimingInfo

@property (nonatomic,copy) NSString * word; 
@property (assign,nonatomic) unsigned sample_idx; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) unsigned length; 
@property (assign,nonatomic) float timestamp; 
-(void)setLength:(unsigned)arg1 ;
-(NSString *)word;
-(id)init;
-(float)timestamp;
-(unsigned)length;
-(unsigned)offset;
-(void)setOffset:(unsigned)arg1 ;
-(void)setWord:(NSString *)arg1 ;
-(unsigned)sample_idx;
-(void)setSample_idx:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(float)arg1 ;
@end

