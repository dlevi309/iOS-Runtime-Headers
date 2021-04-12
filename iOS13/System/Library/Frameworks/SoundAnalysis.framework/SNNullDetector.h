/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNSystemConfiguration, NSString;

@interface SNNullDetector : NSObject <SNAnalyzing> {

	SNSystemConfiguration* _systemConfiguration;
	shared_ptr<DSPGraph::Graph>* _graph;
	BOOL _graphIsDeadEnded;
	BOOL _shouldThrowException;
	unsigned _blockSize;
	double _sampleRate;
	double _computationalDutyCycle;

}

@property (assign,nonatomic) double sampleRate;                                 //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned blockSize;                                //@synthesize blockSize=_blockSize - In the implementation block
@property (assign,nonatomic) double computationalDutyCycle;                     //@synthesize computationalDutyCycle=_computationalDutyCycle - In the implementation block
@property (assign,nonatomic) BOOL graphIsDeadEnded;                             //@synthesize graphIsDeadEnded=_graphIsDeadEnded - In the implementation block
@property (assign,nonatomic) BOOL shouldThrowException;                         //@synthesize shouldThrowException=_shouldThrowException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(unsigned)blockSize;
-(void)updateGraph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(void)setBlockSize:(unsigned)arg1 ;
-(double)computationalDutyCycle;
-(void)setComputationalDutyCycle:(double)arg1 ;
-(BOOL)graphIsDeadEnded;
-(void)setGraphIsDeadEnded:(BOOL)arg1 ;
-(BOOL)shouldThrowException;
-(void)setShouldThrowException:(BOOL)arg1 ;
@end

