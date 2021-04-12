/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechMeta.h>

@class OPTTSTextToSpeechVoice, OPTTSTextToSpeechResource;

@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (nonatomic,copy) OPTTSTextToSpeechVoice * voice; 
@property (nonatomic,copy) OPTTSTextToSpeechResource * resource; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(OPTTSTextToSpeechVoice *)voice;
-(void)setVoice:(OPTTSTextToSpeechVoice *)arg1 ;
-(OPTTSTextToSpeechResource *)resource;
-(void)setResource:(OPTTSTextToSpeechResource *)arg1 ;
@end

