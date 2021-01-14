/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationStreamingRequest.h>

@class FTStartSpeechTranslationRequest, FTLanguageDetected, FTAudioPacket, FTSpeechTranslationAudioPacket, FTFinishAudio, FTSetEndpointerState, FTResetServerEndpointer, FTStartSpeechTranslationLoggingRequest;

@interface FTMutableSpeechTranslationStreamingRequest : FTSpeechTranslationStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartSpeechTranslationRequest * contentAsFTStartSpeechTranslationRequest; 
@property (nonatomic,copy) FTLanguageDetected * contentAsFTLanguageDetected; 
@property (nonatomic,copy) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,copy) FTSpeechTranslationAudioPacket * contentAsFTSpeechTranslationAudioPacket; 
@property (nonatomic,copy) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,copy) FTSetEndpointerState * contentAsFTSetEndpointerState; 
@property (nonatomic,copy) FTResetServerEndpointer * contentAsFTResetServerEndpointer; 
@property (nonatomic,copy) FTStartSpeechTranslationLoggingRequest * contentAsFTStartSpeechTranslationLoggingRequest; 
-(FTSetEndpointerState *)contentAsFTSetEndpointerState;
-(void)setContentAsFTSetEndpointerState:(FTSetEndpointerState *)arg1 ;
-(FTResetServerEndpointer *)contentAsFTResetServerEndpointer;
-(void)setContentAsFTResetServerEndpointer:(FTResetServerEndpointer *)arg1 ;
-(id)init;
-(FTLanguageDetected *)contentAsFTLanguageDetected;
-(void)setContentAsFTLanguageDetected:(FTLanguageDetected *)arg1 ;
-(FTStartSpeechTranslationRequest *)contentAsFTStartSpeechTranslationRequest;
-(void)setContentAsFTStartSpeechTranslationRequest:(FTStartSpeechTranslationRequest *)arg1 ;
-(FTSpeechTranslationAudioPacket *)contentAsFTSpeechTranslationAudioPacket;
-(void)setContentAsFTSpeechTranslationAudioPacket:(FTSpeechTranslationAudioPacket *)arg1 ;
-(FTStartSpeechTranslationLoggingRequest *)contentAsFTStartSpeechTranslationLoggingRequest;
-(void)setContentAsFTStartSpeechTranslationLoggingRequest:(FTStartSpeechTranslationLoggingRequest *)arg1 ;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(void)setContentAsFTAudioPacket:(FTAudioPacket *)arg1 ;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(void)setContentAsFTFinishAudio:(FTFinishAudio *)arg1 ;
@end

