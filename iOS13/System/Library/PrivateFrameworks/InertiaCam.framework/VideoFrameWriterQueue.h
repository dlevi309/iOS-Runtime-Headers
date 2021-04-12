/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/


@protocol OS_dispatch_queue, VideoFrameWriterProgressRecipient;
#import <InertiaCam/InertiaCam-Structs.h>
@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter, AVAssetWriterInput, NSMutableArray, NSLock, NSObject, NSError, NSConditionLock;

@interface VideoFrameWriterQueue : NSObject {

	BOOL writeSuccess;
	BOOL canceled;
	BOOL _doneQueueing;
	unsigned _drainMinimum;
	unsigned _drainMaximum;
	AVAssetWriterInputPixelBufferAdaptor* inputAdaptor;
	AVAssetWriter* videoWriter;
	AVAssetWriterInput* writerInput;
	NSMutableArray* frameArray;
	NSLock* frameArrayLock;
	NSObject*<OS_dispatch_queue> frameWriteQueue;
	NSError* writeError;
	unsigned long long nextFrameIndex;
	id<VideoFrameWriterProgressRecipient> frameWriterUpdateCallback;
	NSConditionLock* _writingDoneLock;
	NSConditionLock* _drainConditionLock;
	unsigned long long _drainTarget;
	SCD_Struct_Vi2 startTime;
	SCD_Struct_Vi2 endTime;

}

@property (nonatomic,retain) AVAssetWriter * videoWriter; 
@property (nonatomic,retain) AVAssetWriterInput * writerInput; 
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * inputAdaptor; 
@property (retain) NSMutableArray * frameArray; 
@property (nonatomic,retain) NSLock * frameArrayLock; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> frameWriteQueue; 
@property (assign) SCD_Struct_Vi2 startTime; 
@property (assign) SCD_Struct_Vi2 endTime; 
@property (retain) NSConditionLock * writingDoneLock;                                            //@synthesize writingDoneLock=_writingDoneLock - In the implementation block
@property (retain) NSError * writeError; 
@property (assign) BOOL writeSuccess; 
@property (assign) unsigned long long nextFrameIndex; 
@property (assign) BOOL canceled; 
@property (assign) BOOL doneQueueing;                                                            //@synthesize doneQueueing=_doneQueueing - In the implementation block
@property (assign) unsigned drainMinimum;                                                        //@synthesize drainMinimum=_drainMinimum - In the implementation block
@property (assign) unsigned drainMaximum;                                                        //@synthesize drainMaximum=_drainMaximum - In the implementation block
@property (retain) NSConditionLock * drainConditionLock;                                         //@synthesize drainConditionLock=_drainConditionLock - In the implementation block
@property (assign) unsigned long long drainTarget;                                               //@synthesize drainTarget=_drainTarget - In the implementation block
@property (__weak) id<VideoFrameWriterProgressRecipient> frameWriterUpdateCallback; 
-(void)dealloc;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(SCD_Struct_Vi2)startTime;
-(SCD_Struct_Vi2)endTime;
-(void)setEndTime:(SCD_Struct_Vi2)arg1 ;
-(void)setStartTime:(SCD_Struct_Vi2)arg1 ;
-(unsigned long long)nextFrameIndex;
-(void)setNextFrameIndex:(unsigned long long)arg1 ;
-(AVAssetWriterInput *)writerInput;
-(void)setWriterInput:(AVAssetWriterInput *)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)inputAdaptor;
-(void)setInputAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(NSObject*<OS_dispatch_queue>)frameWriteQueue;
-(void)setFrameWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVAssetWriter *)videoWriter;
-(void)setVideoWriter:(AVAssetWriter *)arg1 ;
-(void)setFrameArray:(NSMutableArray *)arg1 ;
-(void)setWriteError:(NSError *)arg1 ;
-(id)FindFrameWithIndex:(long long)arg1 ;
-(unsigned long long)FramesInQueue;
-(void)FrameRequestCallback;
-(NSMutableArray *)frameArray;
-(NSLock *)frameArrayLock;
-(void)setFrameArrayLock:(NSLock *)arg1 ;
-(NSError *)writeError;
-(BOOL)writeSuccess;
-(void)setWriteSuccess:(BOOL)arg1 ;
-(id<VideoFrameWriterProgressRecipient>)frameWriterUpdateCallback;
-(void)setFrameWriterUpdateCallback:(id<VideoFrameWriterProgressRecipient>)arg1 ;
-(NSConditionLock *)writingDoneLock;
-(void)setWritingDoneLock:(NSConditionLock *)arg1 ;
-(BOOL)doneQueueing;
-(void)setDoneQueueing:(BOOL)arg1 ;
-(unsigned)drainMinimum;
-(void)setDrainMinimum:(unsigned)arg1 ;
-(unsigned)drainMaximum;
-(void)setDrainMaximum:(unsigned)arg1 ;
-(NSConditionLock *)drainConditionLock;
-(void)setDrainConditionLock:(NSConditionLock *)arg1 ;
-(unsigned long long)drainTarget;
-(void)setDrainTarget:(unsigned long long)arg1 ;
-(id)initWithOutputURL:(id)arg1 forMovieDimensions:(CGSize)arg2 outputTransform:(CGAffineTransform)arg3 startTime:(SCD_Struct_Vi2)arg4 endTime:(SCD_Struct_Vi2)arg5 ;
-(void)StartWatchingForFrames;
-(void)AddAFrame:(id)arg1 ;
-(void)DrainIfAbove:(unsigned)arg1 downTo:(unsigned)arg2 ;
-(BOOL)WaitForFinish;
@end

