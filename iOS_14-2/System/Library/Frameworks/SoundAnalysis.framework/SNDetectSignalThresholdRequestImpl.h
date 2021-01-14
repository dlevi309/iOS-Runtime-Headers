/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	unsigned _blockSize;
	double _sampleRate;
	double _magnitudeThreshold;

}

@property (assign,nonatomic) double sampleRate;                                 //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned blockSize;                                //@synthesize blockSize=_blockSize - In the implementation block
@property (assign,nonatomic) double magnitudeThreshold;                         //@synthesize magnitudeThreshold=_magnitudeThreshold - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(unsigned)blockSize;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(id)initWithSampleRate:(double)arg1 blockSize:(int)arg2 magnitudeThreshold:(double)arg3 ;
-(void)setBlockSize:(unsigned)arg1 ;
-(double)magnitudeThreshold;
-(void)setMagnitudeThreshold:(double)arg1 ;
@end

