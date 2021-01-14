/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSStartTextToSpeechStreamingRequest_ContextInfoEntry.h>

@class NSString;

@interface OPTTSMutableStartTextToSpeechStreamingRequest_ContextInfoEntry : OPTTSStartTextToSpeechStreamingRequest_ContextInfoEntry

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * value; 
-(id)init;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)value;
@end

