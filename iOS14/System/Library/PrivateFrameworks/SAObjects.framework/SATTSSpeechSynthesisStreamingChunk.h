/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSData, SATTSSpeechSynthesisAudioInfo;

@interface SATTSSpeechSynthesisStreamingChunk : SATTSSpeechSynthesisStreaming

@property (nonatomic,copy) NSData * audioData; 
@property (nonatomic,retain) SATTSSpeechSynthesisAudioInfo * audioInfo; 
@property (assign,nonatomic) long long index; 
+(id)speechSynthesisStreamingChunk;
+(id)speechSynthesisStreamingChunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)index;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setIndex:(long long)arg1 ;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(SATTSSpeechSynthesisAudioInfo *)audioInfo;
-(void)setAudioInfo:(SATTSSpeechSynthesisAudioInfo *)arg1 ;
@end

