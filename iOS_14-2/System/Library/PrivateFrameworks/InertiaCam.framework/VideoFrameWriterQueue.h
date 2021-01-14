/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/


@protocol OS_dispatch_queue, VideoFrameWriterProgressRecipient;
#import <InertiaCam/InertiaCam-Structs.h>
@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSMutableArray, NSLock, NSObject, NSConditionLock, NSError;

@interface VideoFrameWriterQueue : NSObject {

	AVAssetWriter* videoWriter;
	AVAssetWriterInput* writerInput;
	AVAssetWriterInputPixelBufferAdaptor* inputAdaptor;
	NSMutableArray* frameArray;
	NSLock* frameArrayLock;
	NSObject*<OS_dispatch_queue> frameWriteQueue;
	SCD_Struct_Vi2 startTime;
	SCD_Struct_Vi2 endTime;
	NSConditionLock* _writingDoneLock;
	NSError* writeError;
	BOOL writeSuccess;
	unsigned long long nextFrameIndex;
	BOOL canceled;
	BOOL _doneQueueing;
	unsigned _drainMinimum;
	unsigned _drainMaximum;
	NSConditionLock* _drainConditionLock;
	unsigned long long _drainTarget;
	id<VideoFrameWriterProgressRecipient> frameWriterUpdateCallback;

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
-(void)setCanceled:(BOOL)arg1 ;
-(void)setWriteError:(NSError *)arg1 ;
-(void)setStartTime:(SCD_Struct_Vi2)arg1 ;
-(BOOL)canceled;
-(void)setEndTime:(SCD_Struct_Vi2)arg1 ;
-(SCD_Struct_Vi2)endTime;
-(SCD_Struct_Vi2)startTime;
-(NSError *)writeError;
-(void)dealloc;
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
-(id)FindFrameWithIndex:(long long)arg1 ;
-(unsigned long long)FramesInQueue;
-(void)FrameRequestCallback;
-(NSMutableArray *)frameArray;
-(NSLock *)frameArrayLock;
-(void)setFrameArrayLock:(NSLock *)arg1 ;
-(void)setWriteSuccess:(BOOL)arg1 ;
-(id<VideoFrameWriterProgressRecipient>)frameWriterUpdateCallback;
-(void)setFrameWriterUpdateCallback:(id<VideoFrameWriterProgressRecipient>)arg1 ;
-(BOOL)doneQueueing;
-(void)setDoneQueueing:(BOOL)arg1 ;
-(NSConditionLock *)drainConditionLock;
-(void)setDrainConditionLock:(NSConditionLock *)arg1 ;
-(unsigned)drainMaximum;
-(void)setDrainMaximum:(unsigned)arg1 ;
-(unsigned)drainMinimum;
-(void)setDrainMinimum:(unsigned)arg1 ;
-(unsigned long long)drainTarget;
-(void)setDrainTarget:(unsigned long long)arg1 ;
-(NSConditionLock *)writingDoneLock;
-(void)setWritingDoneLock:(NSConditionLock *)arg1 ;
-(id)initWithOutputURL:(id)arg1 forMovieDimensions:(CGSize)arg2 outputTransform:(CGAffineTransform)arg3 startTime:(SCD_Struct_Vi2)arg4 endTime:(SCD_Struct_Vi2)arg5 ;
-(void)StartWatchingForFrames;
-(void)AddAFrame:(id)arg1 ;
-(void)DrainIfAbove:(unsigned)arg1 downTo:(unsigned)arg2 ;
-(BOOL)writeSuccess;
-(BOOL)WaitForFinish;
@end

