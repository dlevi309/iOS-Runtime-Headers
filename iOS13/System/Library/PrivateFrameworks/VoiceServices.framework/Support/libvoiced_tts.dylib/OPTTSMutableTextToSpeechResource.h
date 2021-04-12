/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechResource.h>

@class NSString;

@interface OPTTSMutableTextToSpeechResource : OPTTSTextToSpeechResource

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * version; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

