/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequestContext.h>

@class NSArray, NSString;

@interface OPTTSMutableTextToSpeechRequestContext : OPTTSTextToSpeechRequestContext

@property (nonatomic,copy) NSArray * context_info; 
@property (nonatomic,copy) NSString * dialog_identifier; 
-(id)init;
-(NSArray *)context_info;
-(void)setContext_info:(NSArray *)arg1 ;
-(NSString *)dialog_identifier;
-(void)setDialog_identifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

