/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class SAUIAudioDescription, SATTSSpeechSynthesisResource, SATTSSpeechSynthesisVoice, NSString;

@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming

@property (nonatomic,retain) SAUIAudioDescription * decoderStreamDescription; 
@property (nonatomic,retain) SAUIAudioDescription * playerStreamDescription; 
@property (nonatomic,retain) SATTSSpeechSynthesisResource * speechSynthesisResource; 
@property (nonatomic,retain) SATTSSpeechSynthesisVoice * speechSynthesisVoice; 
@property (assign,nonatomic) float streamingPlaybackBufferSize; 
@property (nonatomic,copy) NSString * text; 
+(id)speechSynthesisStreamingBegin;
+(id)speechSynthesisStreamingBeginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setText:(NSString *)arg1 ;
-(SAUIAudioDescription *)decoderStreamDescription;
-(void)setDecoderStreamDescription:(SAUIAudioDescription *)arg1 ;
-(SAUIAudioDescription *)playerStreamDescription;
-(void)setPlayerStreamDescription:(SAUIAudioDescription *)arg1 ;
-(SATTSSpeechSynthesisResource *)speechSynthesisResource;
-(void)setSpeechSynthesisResource:(SATTSSpeechSynthesisResource *)arg1 ;
-(SATTSSpeechSynthesisVoice *)speechSynthesisVoice;
-(void)setSpeechSynthesisVoice:(SATTSSpeechSynthesisVoice *)arg1 ;
-(float)streamingPlaybackBufferSize;
-(void)setStreamingPlaybackBufferSize:(float)arg1 ;
-(NSString *)text;
@end

