/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol OS_dispatch_queue;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSObject, NSURL;

@interface RCExtAudioFilePipe : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _accessQueueID;
	OpaqueExtAudioFileRef _audioFileRef;
	AudioStreamBasicDescription _outputFormatDescriptionStruct;
	AudioStreamBasicDescription _sourceFormatDescriptionStruct;
	NSURL* _sourceURL;
	unsigned long long _sourceFileSize;

}

@property (nonatomic,readonly) NSURL * sourceURL;                                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription* outputFormatDescription; 
@property (nonatomic,readonly) AudioStreamBasicDescription* sourceFormatDescription; 
@property (nonatomic,readonly) unsigned long long sourceFileSize;                                 //@synthesize sourceFileSize=_sourceFileSize - In the implementation block
-(void)dealloc;
-(NSURL *)sourceURL;
-(AudioStreamBasicDescription*)sourceFormatDescription;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_accessExtAudioFileWithBlock:(/*^block*/id)arg1 ;
-(AudioStreamBasicDescription*)outputFormatDescription;
-(id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned)arg3 ;
-(long long)sourceFrameIndexForTime:(double)arg1 ;
-(BOOL)seekToSourceFrameIndex:(long long)arg1 ;
-(long long)sourceCurrentFrameIndex;
-(int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2 ;
-(unsigned long long)sourceFileSize;
@end

