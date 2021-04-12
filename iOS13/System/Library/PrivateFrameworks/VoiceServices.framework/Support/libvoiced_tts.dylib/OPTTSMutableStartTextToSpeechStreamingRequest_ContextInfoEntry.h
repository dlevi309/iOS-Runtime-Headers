/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSStartTextToSpeechStreamingRequest_ContextInfoEntry.h>

@class NSString;

@interface OPTTSMutableStartTextToSpeechStreamingRequest_ContextInfoEntry : OPTTSStartTextToSpeechStreamingRequest_ContextInfoEntry

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * value; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

