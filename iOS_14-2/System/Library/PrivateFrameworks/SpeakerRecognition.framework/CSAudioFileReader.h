/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;
#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@class NSObject;

@interface CSAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _audioFeedTimer;
	double _bufferDuration;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioFileReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSAudioFileReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopRecording;
-(BOOL)startRecording;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id<CSAudioFileReaderDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<CSAudioFileReaderDelegate>)arg1 ;
-(void)dealloc;
-(void)_readAudioBufferAndFeed;
-(BOOL)prepareRecording:(id)arg1 ;
-(id)readSamplesFromChannelIdx:(unsigned)arg1 ;
@end

