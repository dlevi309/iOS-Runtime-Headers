/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSObject, NSHashTable, NSMutableArray, AVAudioFile, NSError;

@interface RCWaveformGenerator : NSObject {

	long long _state;
	NSObject*<OS_dispatch_semaphore> _digestPausedSemaphore;
	NSObject*<OS_dispatch_queue> _queue;
	double _totalDigestedTime;
	double _totalFlushedTime;
	NSHashTable* _weakObservers;
	NSMutableArray* _internalFinishedLoadingBlockUUIDs;
	NSMutableArray* _internalFinishedLoadingBlocks;
	AVAudioFile* _activeAudioFile;
	PowerMeter _samplePowerMeter;
	BOOL _isSampleRateKnown;
	vector<float, std::__1::allocator<float> >* _powerLevelBuffer;
	float _powerLevelBufferLastPushedValue;
	unsigned long long _powerLevelsConsumedSinceLastFlush;
	unsigned long long _framesConsumedSinceLastFlush;
	long long _framesNeededForNextDB;
	long long _framesNeededForNextFlush;
	NSError* _loadingError;
	unsigned long long _pauseCount;
	BOOL _canceled;
	double _segmentFlushInterval;
	long long _overviewUnitsPerSecond;

}

@property (nonatomic,readonly) double segmentFlushInterval;                 //@synthesize segmentFlushInterval=_segmentFlushInterval - In the implementation block
@property (assign,nonatomic) long long overviewUnitsPerSecond;              //@synthesize overviewUnitsPerSecond=_overviewUnitsPerSecond - In the implementation block
@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                 //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,readonly) BOOL loadable; 
@property (nonatomic,readonly) BOOL idle; 
@property (nonatomic,readonly) BOOL finished; 
@property (assign,nonatomic) BOOL paused; 
-(id)init;
-(BOOL)finished;
-(long long)state;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)beginLoading;
-(BOOL)idle;
-(id)initWithSegmentFlushInterval:(double)arg1 ;
-(long long)overviewUnitsPerSecond;
-(void)setOverviewUnitsPerSecond:(long long)arg1 ;
-(void)_onQueue_flushRemainingData;
-(void)_appendPowerMeterValuesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_appendPowerMeterValuesFromAudioPCMBuffer:(id)arg1 ;
-(BOOL)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1 ;
-(void)_appendAveragePowerLevel:(float)arg1 ;
-(void)_onQueue_performObserversBlock:(/*^block*/id)arg1 ;
-(void)async_finishLoadingByTerminating:(BOOL)arg1 loadingFinishedBlockTimeout:(unsigned long long)arg2 loadingFinishedBlock:(/*^block*/id)arg3 ;
-(void)_onQueue_performLoadingFinishedBlock:(/*^block*/id)arg1 internalBlockUUID:(id)arg2 isTimeout:(BOOL)arg3 ;
-(void)_onQueue_performInternalFinishedLoadingBlocksAndFinishObservers;
-(void)_onQueue_pushAveragePowerLevel:(float)arg1 ;
-(void)_onQueue_appendPowerMeterValuesFromRawAudioData:(void*)arg1 frameCount:(long long)arg2 format:(const AudioStreamBasicDescription*)arg3 isPredigest:(BOOL)arg4 ;
-(void)terminateLoadingImmediately;
-(void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(SCD_Struct_RC3)arg1 inAudioFile:(id)arg2 ;
-(id)initWithSamplingParametersFromGenerator:(id)arg1 ;
-(void)_appendAveragePowerLevelsByDigestingTimeRange:(SCD_Struct_RC3)arg1 inAudioFile:(id)arg2 ;
-(void)_onQueue_appendSegment:(id)arg1 ;
-(void)_onQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(BOOL)arg2 ;
-(void)_onQueue_digestAveragePowerLevel:(float)arg1 ;
-(void)_onQueue_flushWaveformSegment:(id)arg1 ;
-(void)addSegmentOutputObserver:(id)arg1 ;
-(void)removeSegmentOutputObserver:(id)arg1 ;
-(void)flushPendingCapturedSampleBuffers;
-(BOOL)appendAveragePowerLevelsByDigestingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1 ;
-(BOOL)appendAveragePowerLevel:(float)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingWaveform:(id)arg1 ;
-(BOOL)loadable;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(SCD_Struct_RC3)arg2 ;
-(double)segmentFlushInterval;
@end

