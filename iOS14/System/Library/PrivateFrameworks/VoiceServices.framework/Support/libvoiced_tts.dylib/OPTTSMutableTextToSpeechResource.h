/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechResource.h>

@class NSString;

@interface OPTTSMutableTextToSpeechResource : OPTTSTextToSpeechResource

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * version; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

