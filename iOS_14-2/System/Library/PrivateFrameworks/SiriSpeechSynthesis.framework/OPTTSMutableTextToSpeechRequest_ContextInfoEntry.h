/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequest_ContextInfoEntry.h>

@class NSString;

@interface OPTTSMutableTextToSpeechRequest_ContextInfoEntry : OPTTSTextToSpeechRequest_ContextInfoEntry

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * value; 
-(id)init;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)value;
@end

