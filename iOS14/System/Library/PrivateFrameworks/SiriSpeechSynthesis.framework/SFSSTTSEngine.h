/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSString, SFSSTTSEngineCallbackResult;

@interface SFSSTTSEngine : NSObject {

	unique_ptr<TTSSynthesizer, std::__1::default_delete<TTSSynthesizer> >* _synthesizer;
	NSString* _voicePath;
	SFSSTTSEngineCallbackResult* _callbackResult;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSString * voicePath;                                      //@synthesize voicePath=_voicePath - In the implementation block
@property (nonatomic,retain) SFSSTTSEngineCallbackResult * callbackResult;              //@synthesize callbackResult=_callbackResult - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;                        //@synthesize asbd=_asbd - In the implementation block
-(void)preheat;
-(AudioStreamBasicDescription)asbd;
-(NSString *)voicePath;
-(void)setVoicePath:(NSString *)arg1 ;
-(void)dealloc;
-(void)stopSynthesis;
-(id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2 ;
-(id)synthesizeText:(id)arg1 loggable:(BOOL)arg2 synthesisBegin:(/*^block*/id)arg3 synthesisChunk:(/*^block*/id)arg4 synthesisEnd:(/*^block*/id)arg5 ;
-(AudioStreamBasicDescription)constructPcmAsbdWithSampleRate:(float)arg1 ;
-(SFSSTTSEngineCallbackResult *)callbackResult;
-(id)loadResourceAtPath:(id)arg1 mimeType:(id)arg2 ;
-(void)setCallbackResult:(SFSSTTSEngineCallbackResult *)arg1 ;
@end

