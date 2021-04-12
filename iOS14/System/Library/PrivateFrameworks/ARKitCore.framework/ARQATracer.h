/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARInternalSessionObserver.h>
#import <ARKitCore/ARReplaySensorDelegate.h>

@protocol OS_dispatch_queue, ARQATracerDelegate;
@class NSMutableDictionary, NSMutableData, NSOutputStream, NSObject, MOVWriterInterface, NSDictionary, NSArray, NSString;

@interface ARQATracer : NSObject <ARInternalSessionObserver, ARReplaySensorDelegate> {

	unsigned long long _frameIndex;
	BOOL _isTracing;
	NSMutableDictionary* _traceHeader;
	NSMutableData* _dataBuffer;
	NSOutputStream* _framesStreamToFile;
	NSObject*<OS_dispatch_queue> _processingQueue;
	MOVWriterInterface* _segmentationVideoFileWriter;
	CVPixelBufferPoolRef _segmentationYUVPixelBufferPool;
	NSObject*<OS_dispatch_queue> _segmentationVideoQueue;
	OpaqueVTPixelTransferSessionRef _vtTransferSession;
	NSDictionary* _raycastQueryData;
	NSArray* _raycastResultData;
	os_unfair_lock_s _additionalResultsLock;
	BOOL _recordScreen;
	BOOL _forceQuitApp;
	id<ARQATracerDelegate> _delegate;
	NSString* _traceOutputFilePath;
	id _screenRecorder;
	NSMutableDictionary* _additionalResults;
	CGPoint _offset;

}

@property (nonatomic,retain) NSString * traceOutputFilePath;                      //@synthesize traceOutputFilePath=_traceOutputFilePath - In the implementation block
@property (assign,nonatomic) BOOL recordScreen;                                   //@synthesize recordScreen=_recordScreen - In the implementation block
@property (nonatomic,retain) id screenRecorder;                                   //@synthesize screenRecorder=_screenRecorder - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                      //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL forceQuitApp;                                   //@synthesize forceQuitApp=_forceQuitApp - In the implementation block
@property (retain) NSMutableDictionary * additionalResults;                       //@synthesize additionalResults=_additionalResults - In the implementation block
@property (assign,nonatomic,__weak) id<ARQATracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
+(id)traceOutputDirectory;
-(void)_startScreenRecording;
-(void)_stopScreenRecording;
-(void)start:(id)arg1 ;
-(id)init;
-(id<ARQATracerDelegate>)delegate;
-(void)stop;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)setDelegate:(id<ARQATracerDelegate>)arg1 ;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(NSMutableDictionary *)additionalResults;
-(void)dealloc;
-(void)traceRaycastQuery:(id)arg1 ;
-(void)traceRaycastResults:(id)arg1 ;
-(void)setTraceOutputFilePath:(NSString *)arg1 ;
-(NSString *)traceOutputFilePath;
-(void)setRecordScreen:(BOOL)arg1 ;
-(void)setForceQuitApp:(BOOL)arg1 ;
-(void)writeStringToOutputStream:(id)arg1 ;
-(void)receiveDefaults;
-(void)writeJSONObjectToStream:(id)arg1 prefix:(id)arg2 ;
-(void)flushDataBufferToFile;
-(BOOL)forceQuitApp;
-(CVBufferRef)_createRecordablePixelBufferFromSegmentationBuffer:(CVBufferRef)arg1 ;
-(void)update:(id)arg1 session:(id)arg2 ;
-(void)replaySensorDidFinishReplayingData;
-(void)trace:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordScreen;
-(id)screenRecorder;
-(void)setScreenRecorder:(id)arg1 ;
-(void)setAdditionalResults:(NSMutableDictionary *)arg1 ;
@end
