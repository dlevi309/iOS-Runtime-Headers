/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <AVFoundation/AVAssetWriter.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSDictionary, AVAssetWriterInput, NSObject, NSMutableArray, NSError, AVAudioFormat, NSURL;

@interface RCAssetWriter : AVAssetWriter {

	NSDictionary* _settings;
	id _formatDescription;
	AVAssetWriterInput* _input;
	long long _frameCount;
	int _sampleRate;
	NSObject*<OS_dispatch_queue> _bufferQueue;
	NSObject*<OS_dispatch_group> _bufferGroup;
	NSMutableArray* _buffers;
	NSError* _appendError;
	AVAudioFormat* _fileFormat;
	AVAudioFormat* _processingFormat;
	NSURL* _url;

}

@property (nonatomic,readonly) NSDictionary * settings;                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) AVAudioFormat * fileFormat;                    //@synthesize fileFormat=_fileFormat - In the implementation block
@property (nonatomic,readonly) AVAudioFormat * processingFormat;              //@synthesize processingFormat=_processingFormat - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long frameCount;                          //@synthesize frameCount=_frameCount - In the implementation block
-(NSURL *)url;
-(NSDictionary *)settings;
-(long long)frameCount;
-(AVAudioFormat *)processingFormat;
-(id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeFromBuffer:(id)arg1 error:(id*)arg2 ;
-(AVAudioFormat *)fileFormat;
-(BOOL)_appendBufferOnQueue:(id)arg1 error:(id*)arg2 ;
-(BOOL)startWritingAudioFile:(id*)arg1 ;
-(void)finishWritingAudioFile:(/*^block*/id)arg1 ;
@end

