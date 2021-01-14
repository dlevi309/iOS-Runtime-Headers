/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTMultilingualStreamingRequest.h>

@class FTStartMultilingualSpeechRequest, FTUpdateAudioInfo, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTAudioPacket, FTFinishAudio, FTLanguageDetected;

@interface FTMutableMultilingualStreamingRequest : FTMultilingualStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartMultilingualSpeechRequest * contentAsFTStartMultilingualSpeechRequest; 
@property (nonatomic,copy) FTUpdateAudioInfo * contentAsFTUpdateAudioInfo; 
@property (nonatomic,copy) FTSetRequestOrigin * contentAsFTSetRequestOrigin; 
@property (nonatomic,copy) FTSetSpeechContext * contentAsFTSetSpeechContext; 
@property (nonatomic,copy) FTSetSpeechProfile * contentAsFTSetSpeechProfile; 
@property (nonatomic,copy) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,copy) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,copy) FTLanguageDetected * contentAsFTLanguageDetected; 
-(void)setContentAsFTUpdateAudioInfo:(FTUpdateAudioInfo *)arg1 ;
-(FTSetRequestOrigin *)contentAsFTSetRequestOrigin;
-(void)setContentAsFTSetRequestOrigin:(FTSetRequestOrigin *)arg1 ;
-(FTSetSpeechContext *)contentAsFTSetSpeechContext;
-(void)setContentAsFTSetSpeechContext:(FTSetSpeechContext *)arg1 ;
-(FTSetSpeechProfile *)contentAsFTSetSpeechProfile;
-(void)setContentAsFTSetSpeechProfile:(FTSetSpeechProfile *)arg1 ;
-(id)init;
-(FTStartMultilingualSpeechRequest *)contentAsFTStartMultilingualSpeechRequest;
-(void)setContentAsFTStartMultilingualSpeechRequest:(FTStartMultilingualSpeechRequest *)arg1 ;
-(FTLanguageDetected *)contentAsFTLanguageDetected;
-(void)setContentAsFTLanguageDetected:(FTLanguageDetected *)arg1 ;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(void)setContentAsFTAudioPacket:(FTAudioPacket *)arg1 ;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(void)setContentAsFTFinishAudio:(FTFinishAudio *)arg1 ;
-(FTUpdateAudioInfo *)contentAsFTUpdateAudioInfo;
@end

