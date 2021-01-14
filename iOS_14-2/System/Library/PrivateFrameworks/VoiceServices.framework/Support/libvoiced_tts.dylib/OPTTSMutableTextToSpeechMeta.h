/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechMeta.h>

@class OPTTSTextToSpeechVoice, OPTTSTextToSpeechResource;

@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (nonatomic,copy) OPTTSTextToSpeechVoice * voice; 
@property (nonatomic,copy) OPTTSTextToSpeechResource * resource; 
-(OPTTSTextToSpeechVoice *)voice;
-(void)setVoice:(OPTTSTextToSpeechVoice *)arg1 ;
-(id)init;
-(void)setResource:(OPTTSTextToSpeechResource *)arg1 ;
-(OPTTSTextToSpeechResource *)resource;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

