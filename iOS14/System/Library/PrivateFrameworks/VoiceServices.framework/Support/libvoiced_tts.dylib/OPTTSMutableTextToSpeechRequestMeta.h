/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequestMeta.h>

@class NSString;

@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (assign,nonatomic) long long channel_type; 
@property (nonatomic,copy) NSString * app_id; 
-(id)init;
-(NSString *)app_id;
-(void)setApp_id:(NSString *)arg1 ;
-(long long)channel_type;
-(void)setChannel_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

