/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCImageQueue : NSObject {

	CAImageQueueRef _caQueue;
	OpaqueFigImageQueueRef _figQueue;
	opaque_pthread_mutex_t _enqueueLock;
	unsigned _slot;
	unsigned _frameRate;
	BOOL _imageQueueProtected;
	BOOL _isLowLatencyEnabled;
	long long _streamToken;
	unsigned _enqueuedFrameCount;

}

@property (assign) unsigned frameRate;                                                       //@synthesize frameRate=_frameRate - In the implementation block
@property (assign) BOOL imageQueueProtected; 
@property (assign) long long streamToken;                                                    //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,getter=isLowLatencyEnabled,nonatomic) BOOL lowLatencyEnabled;              //@synthesize isLowLatencyEnabled=_isLowLatencyEnabled - In the implementation block
+(id)drawingContext;
-(void)dealloc;
-(void)pause;
-(void)stop;
-(void)start;
-(long long)streamToken;
-(void)setStreamToken:(long long)arg1 ;
-(void)setFrameRate:(unsigned)arg1 ;
-(unsigned)frameRate;
-(id)initWithFrameRate:(unsigned char)arg1 ;
-(id)initWithFrameRate:(unsigned char)arg1 imageQueueProtected:(BOOL)arg2 ;
-(unsigned)setVideoDestination:(id)arg1 ;
-(void)getQueueRepresentation:(void*)arg1 ;
-(void)copyPerformanceDictionary:(const _CFDictionary*)arg1 ;
-(void)createAndCopyLatencyStatsDictionary:(const _CFDictionary*)arg1 ;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV77)arg2 ;
-(BOOL)imageQueueProtected;
-(void)setImageQueueProtected:(BOOL)arg1 ;
-(BOOL)isLowLatencyEnabled;
-(void)setLowLatencyEnabled:(BOOL)arg1 ;
@end

