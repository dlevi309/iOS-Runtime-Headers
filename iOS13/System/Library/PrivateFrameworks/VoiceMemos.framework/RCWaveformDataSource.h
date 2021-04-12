/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/RCWaveformGeneratorSegmentOutputObserver.h>

@protocol OS_dispatch_queue;
@class RCMutableWaveform, RCWaveformGenerator, NSObject, NSURL, NSHashTable, RCWaveform, NSString;

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver> {

	RCMutableWaveform* _accumulatorWaveform;
	double _liveRecordingMergeTime;
	BOOL _hasSavedGeneratedWaveform;
	BOOL _hasStartedLoading;
	RCWaveformGenerator* _waveformGenerator;
	double _durationPerWaveformSlice;
	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _generatedWaveformOutputURL;
	NSHashTable* _weakObservers;

}

@property (nonatomic,readonly) NSURL * generatedWaveformOutputURL;                   //@synthesize generatedWaveformOutputURL=_generatedWaveformOutputURL - In the implementation block
@property (nonatomic,readonly) NSHashTable * weakObservers;                          //@synthesize weakObservers=_weakObservers - In the implementation block
@property (nonatomic,readonly) BOOL hasStartedLoading;                               //@synthesize hasStartedLoading=_hasStartedLoading - In the implementation block
@property (nonatomic,readonly) RCWaveformGenerator * waveformGenerator;              //@synthesize waveformGenerator=_waveformGenerator - In the implementation block
@property (nonatomic,readonly) RCWaveform * accumulatorWaveform;                     //@synthesize accumulatorWaveform=_accumulatorWaveform - In the implementation block
@property (nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) BOOL canceled; 
@property (nonatomic,readonly) float loadingProgress; 
@property (assign,nonatomic) double durationPerWaveformSlice;                        //@synthesize durationPerWaveformSlice=_durationPerWaveformSlice - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) SCD_Struct_RC3 timeRangeToHighlight; 
@property (nonatomic,readonly) double averagePowerLevelsRate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL hasSavedGeneratedWaveform;                                   //@synthesize hasSavedGeneratedWaveform=_hasSavedGeneratedWaveform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)waitUntilFinished;
-(BOOL)finished;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(double)duration;
-(BOOL)canceled;
-(BOOL)setPaused:(BOOL)arg1 ;
-(void)startLoading;
-(void)cancelLoading;
-(float)loadingProgress;
-(NSHashTable *)weakObservers;
-(void)beginLoading;
-(void)waveformGeneratorWillBeginLoading:(id)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSURL *)generatedWaveformOutputURL;
-(RCWaveformGenerator *)waveformGenerator;
-(void)saveGeneratedWaveformIfNecessary;
-(void)_performOnObserversBlock:(/*^block*/id)arg1 ;
-(RCWaveform *)accumulatorWaveform;
-(double)averagePowerLevelsRate;
-(BOOL)hasSavedGeneratedWaveform;
-(void)setHasSavedGeneratedWaveform:(BOOL)arg1 ;
-(id)saveableWaveform;
-(void)_performObserversBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldMergeLiveWaveform;
-(double)durationPerWaveformSlice;
-(void)mergeGeneratedWaveformIfNecessary;
-(id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1 ;
-(id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2 ;
-(SCD_Struct_RC3)timeRangeToHighlight;
-(id)waveformSegmentsInTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)waveformSegmentsIntersectingTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)updateAccumulatorWaveformSegmentsWithBlock:(/*^block*/id)arg1 ;
-(void)setDurationPerWaveformSlice:(double)arg1 ;
-(BOOL)hasStartedLoading;
@end

