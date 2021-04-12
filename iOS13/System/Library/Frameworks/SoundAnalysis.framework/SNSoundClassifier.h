/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class MLModel, NSString;

@interface SNSoundClassifier : NSObject <SNAnalyzing> {

	MLModel* _model;
	shared_ptr<DSPGraph::Graph>* _graph;
	int _modelBlockSize;
	int _resultsToDiscardCount;
	int _primeFrameCount;
	double _overlapFactor;

}

@property (assign) double overlapFactor;                                        //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (readonly) int primeFrameCount;                                       //@synthesize primeFrameCount=_primeFrameCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
+(id)new;
+(void)completeTimingInfoInResult:(id)arg1 usingBox:(Box*)arg2 modelBlockSize:(long long)arg3 ;
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(double)overlapFactor;
-(void)setOverlapFactor:(double)arg1 ;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(void)primeGraph;
-(int)primeFrameCount;
@end

