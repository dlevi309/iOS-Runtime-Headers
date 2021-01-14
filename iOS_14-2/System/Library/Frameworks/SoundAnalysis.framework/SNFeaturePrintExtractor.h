/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@protocol MLCustomModel;
@class MLModelDescription, MLModel, SNSystemConfiguration, NSString;

@interface SNFeaturePrintExtractor : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	id<MLCustomModel> _logMelSpectrogramModel;
	MLModelDescription* _logMelSpectrogramModelDescription;
	MLModel* _featureEmbeddingModel;
	SNSystemConfiguration* _systemConfiguration;
	int _timeDomainBlockSize;
	int _resultsToDiscardCount;
	float _overlapFactor;
	long long _featurePrintType;

}

@property (assign,nonatomic) long long featurePrintType;                        //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (assign,nonatomic) float overlapFactor;                               //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)embeddingModel;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;
-(id)initWithFeaturePrintType:(long long)arg1 overlapFactor:(float)arg2 ;
-(long long)featurePrintType;
-(void)setFeaturePrintType:(long long)arg1 ;
-(float)overlapFactor;
-(void)setOverlapFactor:(float)arg1 ;
-(void)updateGraph;
-(id)logMelSpectrogramModel;
-(id)logMelSpectrogramModelDescription;
@end

