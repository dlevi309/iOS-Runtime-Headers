/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequestMeta.h>

@class NSString;

@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (assign,nonatomic) long long channel_type; 
@property (nonatomic,copy) NSString * app_id; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)channel_type;
-(NSString *)app_id;
-(void)setChannel_type:(long long)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
@end

