/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class NSError, NSString, NSMutableArray;

@interface VSSpeechSynthesisCallbackResult : NSObject {

	vector<unsigned char, std::__1::allocator<unsigned char> > _samples;
	vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >* _markers;
	BOOL _neuralDidFallback;
	BOOL _hasAlignmentStall;
	long long _state;
	NSError* _error;
	NSString* _text;
	long long _stopMark;
	/*^block*/id _callback;
	NSMutableArray* _wordTimings;
	unsigned long long _samplesProcessed;
	unsigned long long _lastUTF8Offset;
	unsigned long long _lastUTF16Offset;
	unsigned long long _numOfPromptsTriggered;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long stopMark;                                    //@synthesize stopMark=_stopMark - In the implementation block
@property (nonatomic,copy) id callback;                                             //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * wordTimings;                          //@synthesize wordTimings=_wordTimings - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;                      //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) unsigned long long samplesProcessed;                   //@synthesize samplesProcessed=_samplesProcessed - In the implementation block
@property (assign,nonatomic) unsigned long long lastUTF8Offset;                     //@synthesize lastUTF8Offset=_lastUTF8Offset - In the implementation block
@property (assign,nonatomic) unsigned long long lastUTF16Offset;                    //@synthesize lastUTF16Offset=_lastUTF16Offset - In the implementation block
@property (assign,nonatomic) unsigned long long numOfPromptsTriggered;              //@synthesize numOfPromptsTriggered=_numOfPromptsTriggered - In the implementation block
@property (assign,nonatomic) BOOL neuralDidFallback;                                //@synthesize neuralDidFallback=_neuralDidFallback - In the implementation block
@property (assign,nonatomic) BOOL hasAlignmentStall;                                //@synthesize hasAlignmentStall=_hasAlignmentStall - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSMutableArray *)wordTimings;
-(NSString *)text;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)pcmData;
-(void)setWordTimings:(NSMutableArray *)arg1 ;
-(id)phonemes;
-(vector<unsigned char, std::__1::allocator<unsigned char> >*)sampleBuffer;
-(id)mutablePCMData;
-(BOOL)neuralDidFallback;
-(unsigned long long)numOfPromptsTriggered;
-(id)wordTimingInfos;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(BOOL)hasAlignmentStall;
-(void)processMarkerBuffer;
-(unsigned long long)utf8BytesForChar:(unsigned short)arg1 ;
-(unsigned long long)utf16OffsetFromUTF8:(unsigned long long)arg1 ;
-(int)synthesisCallback:(int)arg1 ;
-(vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >*)markerBuffer;
-(long long)stopMark;
-(void)setStopMark:(long long)arg1 ;
-(unsigned long long)samplesProcessed;
-(void)setSamplesProcessed:(unsigned long long)arg1 ;
-(unsigned long long)lastUTF8Offset;
-(void)setLastUTF8Offset:(unsigned long long)arg1 ;
-(unsigned long long)lastUTF16Offset;
-(void)setLastUTF16Offset:(unsigned long long)arg1 ;
-(void)setNumOfPromptsTriggered:(unsigned long long)arg1 ;
-(void)setNeuralDidFallback:(BOOL)arg1 ;
-(void)setHasAlignmentStall:(BOOL)arg1 ;
@end

