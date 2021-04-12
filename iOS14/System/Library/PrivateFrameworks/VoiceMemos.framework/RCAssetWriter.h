/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <AVFCore/AVAssetWriter.h>

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
-(long long)frameCount;
-(BOOL)_appendBufferOnQueue:(id)arg1 error:(id*)arg2 ;
-(NSURL *)url;
-(AVAudioFormat *)processingFormat;
-(BOOL)writeFromBuffer:(id)arg1 error:(id*)arg2 ;
-(BOOL)startWritingAudioFile:(id*)arg1 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)settings;
-(void)finishWritingAudioFile:(/*^block*/id)arg1 ;
-(AVAudioFormat *)fileFormat;
@end

