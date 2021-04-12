/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setIndex:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(SATTSSpeechSynthesisAudioInfo *)audioInfo;
-(void)setAudioInfo:(SATTSSpeechSynthesisAudioInfo *)arg1 ;
@end

