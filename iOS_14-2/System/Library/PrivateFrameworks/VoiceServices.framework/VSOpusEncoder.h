/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class AVAudioFormat, AVAudioConverter, AVAudioCompressedBuffer;

@interface VSOpusEncoder : NSObject {

	/*^block*/id _opusDataHandler;
	/*^block*/id _errorHandler;
	AVAudioFormat* _fromFormat;
	AVAudioFormat* _toFormat;
	AVAudioConverter* _converter;
	AVAudioCompressedBuffer* _outputBuffer;
	long long _opusDataOffset;

}

@property (nonatomic,copy) id opusDataHandler;                                    //@synthesize opusDataHandler=_opusDataHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                       //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) AVAudioFormat * fromFormat;                          //@synthesize fromFormat=_fromFormat - In the implementation block
@property (nonatomic,retain) AVAudioFormat * toFormat;                            //@synthesize toFormat=_toFormat - In the implementation block
@property (nonatomic,retain) AVAudioConverter * converter;                        //@synthesize converter=_converter - In the implementation block
@property (nonatomic,retain) AVAudioCompressedBuffer * outputBuffer;              //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (assign,nonatomic) long long opusDataOffset;                            //@synthesize opusDataOffset=_opusDataOffset - In the implementation block
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(AVAudioCompressedBuffer *)outputBuffer;
-(void)setOutputBuffer:(AVAudioCompressedBuffer *)arg1 ;
-(AVAudioFormat *)toFormat;
-(void)endEncoding;
-(AVAudioConverter *)converter;
-(void)encodeChunk:(id)arg1 ;
-(id)initWithSourceASBD:(AudioStreamBasicDescription)arg1 ;
-(void)setOpusDataHandler:(id)arg1 ;
-(void)beginEncoding;
-(id)opusDataHandler;
-(AVAudioFormat *)fromFormat;
-(void)setFromFormat:(AVAudioFormat *)arg1 ;
-(void)setToFormat:(AVAudioFormat *)arg1 ;
-(long long)opusDataOffset;
-(void)setOpusDataOffset:(long long)arg1 ;
-(void)setConverter:(AVAudioConverter *)arg1 ;
@end

