/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	double _minimumObservableOffset;
	double _maximumObservableOffset;

}

@property (nonatomic,readonly) double offset; 
@property (assign,nonatomic) double minimumObservableOffset;                    //@synthesize minimumObservableOffset=_minimumObservableOffset - In the implementation block
@property (assign,nonatomic) double maximumObservableOffset;                    //@synthesize maximumObservableOffset=_maximumObservableOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(double)offset;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(shared_ptr<DSPGraph::Graph>*)createGraph;
-(double)minimumObservableOffset;
-(double)maximumObservableOffset;
-(void)updateMinMaxDelayWithSampleRate:(float)arg1 micDelay:(float)arg2 refDelay:(float)arg3 eclen:(float)arg4 ;
-(void)setMinimumObservableOffset:(double)arg1 ;
-(void)setMaximumObservableOffset:(double)arg1 ;
@end

