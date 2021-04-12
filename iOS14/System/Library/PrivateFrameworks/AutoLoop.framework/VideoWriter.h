/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/


@protocol OS_dispatch_queue;
#import <AutoLoop/AutoLoop-Structs.h>
@class NSError, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSConditionLock, NSObject;

@interface VideoWriter : NSObject {

	BOOL _initFailed;
	float fps;
	unsigned imgWidth;
	unsigned imgHeight;
	int timeScale;
	unsigned pixelFormat;
	long long currFrame;
	NSError* lastError;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _writerInput;
	AVAssetWriterInputPixelBufferAdaptor* _inputAdaptor;
	NSConditionLock* _inputLock;
	NSObject*<OS_dispatch_queue> _frameWriteQueue;
	long long _currFrameTime;
	long long _frameIncr;
	CGAffineTransform preferredTransform;

}

@property (retain) AVAssetWriter * assetWriter;                                      //@synthesize assetWriter=_assetWriter - In the implementation block
@property (retain) AVAssetWriterInput * writerInput;                                 //@synthesize writerInput=_writerInput - In the implementation block
@property (retain) AVAssetWriterInputPixelBufferAdaptor * inputAdaptor;              //@synthesize inputAdaptor=_inputAdaptor - In the implementation block
@property (retain) NSConditionLock * inputLock;                                      //@synthesize inputLock=_inputLock - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> frameWriteQueue;                     //@synthesize frameWriteQueue=_frameWriteQueue - In the implementation block
@property (assign) long long currFrameTime;                                          //@synthesize currFrameTime=_currFrameTime - In the implementation block
@property (assign) long long frameIncr;                                              //@synthesize frameIncr=_frameIncr - In the implementation block
@property (assign) BOOL initFailed;                                                  //@synthesize initFailed=_initFailed - In the implementation block
@property (readonly) float fps; 
@property (readonly) long long currFrame; 
@property (readonly) unsigned imgWidth; 
@property (readonly) unsigned imgHeight; 
@property (readonly) int timeScale; 
@property (readonly) unsigned pixelFormat; 
@property (readonly) CGAffineTransform preferredTransform; 
@property (readonly) NSError * lastError; 
-(float)fps;
-(NSError *)lastError;
-(id)finish;
-(unsigned)pixelFormat;
-(CGAffineTransform)preferredTransform;
-(int)timeScale;
-(id)addFrame:(CGImageRef)arg1 ;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
-(id)initForURL:(id)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned)arg4 imgHeight:(unsigned)arg5 fps:(float)arg6 timeScale:(int)arg7 transform:(CGAffineTransform)arg8 pixFormat:(unsigned)arg9 metadata:(id)arg10 ;
-(id)addFrameAsPixelBuf:(CVBufferRef)arg1 atFrameTime:(SCD_Struct_Au1)arg2 ;
-(CVBufferRef)createPixelBuffer;
-(void)setInputReady;
-(id)initForURL:(id)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned)arg4 imgHeight:(unsigned)arg5 fps:(float)arg6 pixFormat:(unsigned)arg7 metadata:(id)arg8 ;
-(id)addFrameAsPixelBuf:(CVBufferRef)arg1 ;
-(void)endSessionAtTime:(SCD_Struct_Au1)arg1 ;
-(id)initForPath:(const char*)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned)arg4 imgHeight:(unsigned)arg5 fps:(float)arg6 pixFormat:(unsigned)arg7 metadata:(id)arg8 ;
-(void)endSessionInfer;
-(long long)currFrame;
-(unsigned)imgWidth;
-(unsigned)imgHeight;
-(AVAssetWriterInput *)writerInput;
-(void)setWriterInput:(AVAssetWriterInput *)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)inputAdaptor;
-(void)setInputAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(NSConditionLock *)inputLock;
-(void)setInputLock:(NSConditionLock *)arg1 ;
-(NSObject*<OS_dispatch_queue>)frameWriteQueue;
-(void)setFrameWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)currFrameTime;
-(void)setCurrFrameTime:(long long)arg1 ;
-(long long)frameIncr;
-(void)setFrameIncr:(long long)arg1 ;
-(BOOL)initFailed;
-(void)setInitFailed:(BOOL)arg1 ;
@end

