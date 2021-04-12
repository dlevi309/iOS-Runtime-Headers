/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, VCPixelBufferOverlay;

@interface VCImageQueue : NSObject {

	CAImageQueueRef _caQueue;
	OpaqueFigImageQueueRef _figQueue;
	CFDictionaryRef _storedAttributes;
	opaqueVCRemoteImageQueueRef _remoteQueue;
	opaque_pthread_mutex_t _enqueueLock;
	unsigned _slot;
	unsigned _frameRate;
	BOOL _imageQueueProtected;
	BOOL _isLowLatencyEnabled;
	long long _streamToken;
	unsigned _enqueuedFrameCount;
	NSMutableArray* _frameCountHistory;
	VCPixelBufferOverlay* _pixelBufferOverlay;
	BOOL _usingRemoteQueue;

}

@property (assign) unsigned frameRate;                                                       //@synthesize frameRate=_frameRate - In the implementation block
@property (assign) BOOL imageQueueProtected; 
@property (assign) long long streamToken;                                                    //@synthesize streamToken=_streamToken - In the implementation block
@property (readonly) BOOL usingRemoteQueue;                                                  //@synthesize usingRemoteQueue=_usingRemoteQueue - In the implementation block
@property (assign,getter=isLowLatencyEnabled,nonatomic) BOOL lowLatencyEnabled;              //@synthesize isLowLatencyEnabled=_isLowLatencyEnabled - In the implementation block
+(id)drawingContext;
-(id)initWithFrameRate:(unsigned char)arg1 ;
-(void)start;
-(void)pause;
-(void)stop;
-(unsigned)frameRate;
-(id)description;
-(void)setFrameRate:(unsigned)arg1 ;
-(long long)streamToken;
-(void)setStreamToken:(long long)arg1 ;
-(void)dealloc;
-(id)initWithFrameRate:(unsigned char)arg1 imageQueueProtected:(BOOL)arg2 ;
-(float)averageFrameRate;
-(void)emitFrameEnqueuedSignposts:(unsigned long long)arg1 withTime:(SCD_Struct_VC84)arg2 forFrame:(CVBufferRef)arg3 ;
-(void)removeExpiredFrameCounts:(double)arg1 ;
-(void)updateFrameCountHistory;
-(unsigned)setVideoDestination:(id)arg1 ;
-(void)getQueueRepresentation:(void*)arg1 ;
-(void)createAndCopyPerformanceDictionary:(const _CFDictionary*)arg1 ;
-(void)createAndCopyLatencyStatsDictionary:(const _CFDictionary*)arg1 ;
-(void)createRemoteQueueWithClientPid:(int)arg1 ;
-(id)getXPCObjectFromRemoteQueue;
-(void)enqueueAttributes:(CFDictionaryRef)arg1 ;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_VC84)arg2 ;
-(BOOL)imageQueueProtected;
-(void)setImageQueueProtected:(BOOL)arg1 ;
-(BOOL)isLowLatencyEnabled;
-(void)setLowLatencyEnabled:(BOOL)arg1 ;
-(BOOL)usingRemoteQueue;
@end

