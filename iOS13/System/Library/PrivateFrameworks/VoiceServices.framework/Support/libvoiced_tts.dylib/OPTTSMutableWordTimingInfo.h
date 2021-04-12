/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSWordTimingInfo.h>

@class NSString;

@interface OPTTSMutableWordTimingInfo : OPTTSWordTimingInfo

@property (nonatomic,copy) NSString * word; 
@property (assign,nonatomic) unsigned sample_idx; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) unsigned length; 
@property (assign,nonatomic) float timestamp; 
-(id)init;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(float)timestamp;
-(void)setTimestamp:(float)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(NSString *)word;
-(void)setWord:(NSString *)arg1 ;
-(unsigned)sample_idx;
-(void)setSample_idx:(unsigned)arg1 ;
@end

