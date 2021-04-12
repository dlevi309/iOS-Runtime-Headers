/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, RCComposition, _RCTimeRangeFileInputWaveformDataSource, NSString;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	float _progressOfFinishedFragments;
	float _progressWeightPerFragment;
	BOOL _preferLoadingFragmentWaveforms;
	BOOL _saveGeneratedWaveform;
	BOOL _highlightLastDecomposedFragment;
	RCComposition* _composition;
	_RCTimeRangeFileInputWaveformDataSource* _activeFragmentDataSource;

}

@property (retain) _RCTimeRangeFileInputWaveformDataSource * activeFragmentDataSource;              //@synthesize activeFragmentDataSource=_activeFragmentDataSource - In the implementation block
@property (nonatomic,readonly) RCComposition * composition;                                         //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) BOOL preferLoadingFragmentWaveforms;                                 //@synthesize preferLoadingFragmentWaveforms=_preferLoadingFragmentWaveforms - In the implementation block
@property (assign,nonatomic) BOOL saveGeneratedWaveform;                                            //@synthesize saveGeneratedWaveform=_saveGeneratedWaveform - In the implementation block
@property (assign,nonatomic) BOOL highlightLastDecomposedFragment;                                  //@synthesize highlightLastDecomposedFragment=_highlightLastDecomposedFragment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelLoading;
-(BOOL)highlightLastDecomposedFragment;
-(void)startLoading;
-(void)setSaveGeneratedWaveform:(BOOL)arg1 ;
-(BOOL)shouldMergeLiveWaveform;
-(id)initWithComposition:(id)arg1 ;
-(RCComposition *)composition;
-(id)saveableWaveform;
-(SCD_Struct_RC7)timeRangeToHighlight;
-(float)loadingProgress;
-(void)setActiveFragmentDataSource:(_RCTimeRangeFileInputWaveformDataSource *)arg1 ;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(void)setHighlightLastDecomposedFragment:(BOOL)arg1 ;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(_RCTimeRangeFileInputWaveformDataSource *)activeFragmentDataSource;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)_dataSourceForAVContentURL:(id)arg1 isDecomposedFragment:(BOOL)arg2 sourceTimeRange:(SCD_Struct_RC7)arg3 destinationTime:(double)arg4 ;
-(BOOL)_synchronouslyAppendSegmentsFromDataSource:(id)arg1 ;
-(BOOL)saveGeneratedWaveform;
-(double)duration;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(BOOL)preferLoadingFragmentWaveforms;
-(void)dealloc;
@end

