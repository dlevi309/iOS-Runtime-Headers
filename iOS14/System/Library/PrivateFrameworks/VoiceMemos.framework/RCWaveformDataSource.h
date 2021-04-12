/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) SCD_Struct_RC7 timeRangeToHighlight; 
@property (nonatomic,readonly) double averagePowerLevelsRate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL hasSavedGeneratedWaveform;                                   //@synthesize hasSavedGeneratedWaveform=_hasSavedGeneratedWaveform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelLoading;
-(void)addObserver:(id)arg1 ;
-(void)saveGeneratedWaveformIfNecessary;
-(void)updateAccumulatorWaveformSegmentsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finished;
-(id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2 ;
-(void)startLoading;
-(void)setDurationPerWaveformSlice:(double)arg1 ;
-(BOOL)waitUntilFinished;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(BOOL)canceled;
-(void)waveformGeneratorWillBeginLoading:(id)arg1 ;
-(BOOL)shouldMergeLiveWaveform;
-(BOOL)setPaused:(BOOL)arg1 ;
-(BOOL)hasSavedGeneratedWaveform;
-(id)saveableWaveform;
-(id)waveformSegmentsInTimeRange:(SCD_Struct_RC7)arg1 ;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SCD_Struct_RC7)timeRangeToHighlight;
-(float)loadingProgress;
-(void)mergeGeneratedWaveformIfNecessary;
-(id)waveformSegmentsIntersectingTimeRange:(SCD_Struct_RC7)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(RCWaveformGenerator *)waveformGenerator;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC7)arg1 ;
-(void)_performOnObserversBlock:(/*^block*/id)arg1 ;
-(void)setHasSavedGeneratedWaveform:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)beginLoading;
-(void)_performObserversBlock:(/*^block*/id)arg1 ;
-(NSHashTable *)weakObservers;
-(double)durationPerWaveformSlice;
-(BOOL)hasStartedLoading;
-(double)averagePowerLevelsRate;
-(id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1 ;
-(double)duration;
-(RCWaveform *)accumulatorWaveform;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(NSURL *)generatedWaveformOutputURL;
-(void)dealloc;
@end

