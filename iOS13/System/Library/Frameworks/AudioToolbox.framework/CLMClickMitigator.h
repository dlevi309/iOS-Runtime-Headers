/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
*/


#import <libAudioDSP.dylib/libAudioDSP.dylib-Structs.h>
@class NSString, AVAudioFormat, AVAudioConverter;

@interface CLMClickMitigator : NSObject {

	NSString* _tuningPath;
	unsigned _upstreamLatency;
	AVAudioFormat* _externalFormat;
	AVAudioFormat* _processingFormat;
	AVAudioConverter* _inputConverter;
	AVAudioConverter* _outputConverter;

}

@property (nonatomic,retain) AVAudioFormat * externalFormat;                  //@synthesize externalFormat=_externalFormat - In the implementation block
@property (nonatomic,retain) AVAudioFormat * processingFormat;                //@synthesize processingFormat=_processingFormat - In the implementation block
@property (nonatomic,retain) AVAudioConverter * inputConverter;               //@synthesize inputConverter=_inputConverter - In the implementation block
@property (nonatomic,retain) AVAudioConverter * outputConverter;              //@synthesize outputConverter=_outputConverter - In the implementation block
@property (assign,nonatomic) unsigned upstreamLatency;                        //@synthesize upstreamLatency=_upstreamLatency - In the implementation block
@property (nonatomic,retain) NSString * tuningPath;                           //@synthesize tuningPath=_tuningPath - In the implementation block
-(AVAudioFormat *)processingFormat;
-(id)initWithFormat:(id)arg1 upstreamLatency:(unsigned)arg2 ;
-(NSString *)tuningPath;
-(shared_ptr<ClickRemovalCore>*)getCore;
-(void)mitigateClicks:(id)arg1 machAbsoluteTimeOfFirstSample:(unsigned long long)arg2 numSamples:(unsigned)arg3 audioReader:(/*^block*/id)arg4 audioRewriter:(/*^block*/id)arg5 ;
-(void)setTuningPath:(NSString *)arg1 ;
-(AVAudioFormat *)externalFormat;
-(void)setExternalFormat:(AVAudioFormat *)arg1 ;
-(void)setProcessingFormat:(AVAudioFormat *)arg1 ;
-(AVAudioConverter *)inputConverter;
-(void)setInputConverter:(AVAudioConverter *)arg1 ;
-(AVAudioConverter *)outputConverter;
-(void)setOutputConverter:(AVAudioConverter *)arg1 ;
-(unsigned)upstreamLatency;
-(void)setUpstreamLatency:(unsigned)arg1 ;
@end

