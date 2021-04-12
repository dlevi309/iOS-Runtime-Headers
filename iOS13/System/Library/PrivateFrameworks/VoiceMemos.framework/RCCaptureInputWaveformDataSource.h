/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>
#import <libobjc.A.dylib/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>

@class RCMutableComposition, RCMutableCompositionFragment, RCComposition, RCCompositionFragment, RCWaveform, RCCompositionWaveformDataSource, NSArray, NSString;

@interface RCCaptureInputWaveformDataSource : RCWaveformDataSource <AVCaptureAudioDataOutputSampleBufferDelegate, RCWaveformDataSourceObserver> {

	double captureDelta;
	BOOL _overdub;
	BOOL _canUpdateCaptureComposition;
	RCMutableComposition* _capturedComposition;
	RCMutableCompositionFragment* _capturedFragment;
	RCComposition* _destinationComposition;
	RCCompositionFragment* _destinationFragment;
	RCWaveform* _baseWaveform;
	RCCompositionWaveformDataSource* _baseWaveformDataSource;
	double _updatedCapturedFragmentDuration;
	double _finalCapturedFragmentDuration;
	double _captureInsertionTimeInComposition;
	double _captureInsertionDurationInComposition;
	NSArray* _captureInitialDecomposedFragments;

}

@property (nonatomic,readonly) RCWaveform * baseWaveform;                                             //@synthesize baseWaveform=_baseWaveform - In the implementation block
@property (nonatomic,readonly) RCCompositionWaveformDataSource * baseWaveformDataSource;              //@synthesize baseWaveformDataSource=_baseWaveformDataSource - In the implementation block
@property (nonatomic,readonly) double updatedCapturedFragmentDuration;                                //@synthesize updatedCapturedFragmentDuration=_updatedCapturedFragmentDuration - In the implementation block
@property (nonatomic,readonly) double finalCapturedFragmentDuration;                                  //@synthesize finalCapturedFragmentDuration=_finalCapturedFragmentDuration - In the implementation block
@property (nonatomic,readonly) BOOL canUpdateCaptureComposition;                                      //@synthesize canUpdateCaptureComposition=_canUpdateCaptureComposition - In the implementation block
@property (nonatomic,readonly) double captureInsertionTimeInComposition;                              //@synthesize captureInsertionTimeInComposition=_captureInsertionTimeInComposition - In the implementation block
@property (nonatomic,readonly) double captureInsertionDurationInComposition;                          //@synthesize captureInsertionDurationInComposition=_captureInsertionDurationInComposition - In the implementation block
@property (nonatomic,readonly) NSArray * captureInitialDecomposedFragments;                           //@synthesize captureInitialDecomposedFragments=_captureInitialDecomposedFragments - In the implementation block
@property (nonatomic,readonly) RCComposition * destinationComposition;                                //@synthesize destinationComposition=_destinationComposition - In the implementation block
@property (nonatomic,readonly) RCCompositionFragment * destinationFragment;                           //@synthesize destinationFragment=_destinationFragment - In the implementation block
@property (getter=isOverdub,nonatomic,readonly) BOOL overdub;                                         //@synthesize overdub=_overdub - In the implementation block
@property (nonatomic,readonly) RCMutableComposition * capturedComposition;                            //@synthesize capturedComposition=_capturedComposition - In the implementation block
@property (nonatomic,readonly) RCMutableCompositionFragment * capturedFragment;                       //@synthesize capturedFragment=_capturedFragment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)waitUntilFinished;
-(double)duration;
-(BOOL)setPaused:(BOOL)arg1 ;
-(void)startLoading;
-(void)cancelLoading;
-(double)_fragmentDuration;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)flushPendingCapturedSampleBuffers;
-(BOOL)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg1 ;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)waveformDataSourceRequiresUpdate:(id)arg1 ;
-(BOOL)shouldMergeLiveWaveform;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1 ;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(SCD_Struct_RC3)timeRangeToHighlight;
-(id)waveformSegmentsInTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)waveformSegmentsIntersectingTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)_initializeCaptureComposition;
-(void)_updateCapturedComposition:(BOOL)arg1 ;
-(void)_captureSesionCompletedWithFinalizedDuration:(double)arg1 ;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 finalizedFragmentDuration:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_captureSegmentsInComponentWaveform:(id)arg1 captureTimeRange:(SCD_Struct_RC3)arg2 componentWaveformSegmentOffset:(double)arg3 ;
-(void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1 ;
-(void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1 ;
-(void)_truncateAccumulatedWaveformSegmentsToEndTime:(double)arg1 ;
-(id)initWithDestinationComposition:(id)arg1 destinationFragment:(id)arg2 isOverdub:(BOOL)arg3 ;
-(BOOL)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(double)arg1 ;
-(void)updateCapturedDelta:(double)arg1 ;
-(RCMutableComposition *)capturedComposition;
-(RCMutableCompositionFragment *)capturedFragment;
-(void)undoCapture;
-(BOOL)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)arg1 ;
-(RCComposition *)destinationComposition;
-(RCCompositionFragment *)destinationFragment;
-(BOOL)isOverdub;
-(RCWaveform *)baseWaveform;
-(RCCompositionWaveformDataSource *)baseWaveformDataSource;
-(double)updatedCapturedFragmentDuration;
-(double)finalCapturedFragmentDuration;
-(BOOL)canUpdateCaptureComposition;
-(double)captureInsertionTimeInComposition;
-(double)captureInsertionDurationInComposition;
-(NSArray *)captureInitialDecomposedFragments;
@end

