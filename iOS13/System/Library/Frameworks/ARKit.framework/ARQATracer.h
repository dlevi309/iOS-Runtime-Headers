/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARInternalSessionObserver.h>
#import <ARKit/ARReplaySensorDelegate.h>

@protocol OS_dispatch_queue, ARQATracerDelegate;
@class NSMutableDictionary, NSMutableData, NSOutputStream, NSObject, MOVWriterInterface, NSDictionary, NSArray, NSString, UILabel, ARScreenRecording;

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
	BOOL _forceQuitApp;
	BOOL _recordScreen;
	id<ARQATracerDelegate> _delegate;
	NSString* _traceOutputFilePath;
	UILabel* _replayFrameLabel;
	ARScreenRecording* _screenRecorder;
	NSMutableDictionary* _additionalResults;
	CGPoint _offset;

}

@property (nonatomic,retain) NSString * traceOutputFilePath;                      //@synthesize traceOutputFilePath=_traceOutputFilePath - In the implementation block
@property (nonatomic,retain) UILabel * replayFrameLabel;                          //@synthesize replayFrameLabel=_replayFrameLabel - In the implementation block
@property (nonatomic,retain) ARScreenRecording * screenRecorder;                  //@synthesize screenRecorder=_screenRecorder - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                      //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL forceQuitApp;                                   //@synthesize forceQuitApp=_forceQuitApp - In the implementation block
@property (assign,nonatomic) BOOL recordScreen;                                   //@synthesize recordScreen=_recordScreen - In the implementation block
@property (retain) NSMutableDictionary * additionalResults;                       //@synthesize additionalResults=_additionalResults - In the implementation block
@property (assign,nonatomic,__weak) id<ARQATracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
+(id)traceOutputDirectory;
-(id)init;
-(void)dealloc;
-(id<ARQATracerDelegate>)delegate;
-(void)setDelegate:(id<ARQATracerDelegate>)arg1 ;
-(void)stop;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)start:(id)arg1 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)traceRaycastQuery:(id)arg1 ;
-(void)traceRaycastResults:(id)arg1 ;
-(void)setTraceOutputFilePath:(NSString *)arg1 ;
-(NSString *)traceOutputFilePath;
-(NSMutableDictionary *)additionalResults;
-(void)setRecordScreen:(BOOL)arg1 ;
-(void)setForceQuitApp:(BOOL)arg1 ;
-(void)writeStringToOutputStream:(id)arg1 ;
-(void)receiveDefaults;
-(void)addFrameLabel:(id)arg1 ;
-(UILabel *)replayFrameLabel;
-(BOOL)recordScreen;
-(void)setScreenRecorder:(ARScreenRecording *)arg1 ;
-(ARScreenRecording *)screenRecorder;
-(void)writeJSONObjectToStream:(id)arg1 prefix:(id)arg2 ;
-(void)flushDataBufferToFile;
-(BOOL)forceQuitApp;
-(CVBufferRef)_createRecordablePixelBufferFromSegmentationBuffer:(CVBufferRef)arg1 ;
-(void)setReplayFrameLabel:(UILabel *)arg1 ;
-(void)update:(id)arg1 session:(id)arg2 ;
-(void)replaySensorDidFinishReplayingData;
-(void)trace:(id)arg1 forKey:(id)arg2 ;
-(void)setAdditionalResults:(NSMutableDictionary *)arg1 ;
@end

