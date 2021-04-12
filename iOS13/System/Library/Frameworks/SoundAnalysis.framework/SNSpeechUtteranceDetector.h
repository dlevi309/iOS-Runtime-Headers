/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNSystemConfiguration, NSString;

@interface SNSpeechUtteranceDetector : NSObject <SNAnalyzing> {

	SNSystemConfiguration* _systemConfiguration;
	long long _requestType;
	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) BOOL hardVAD; 
@property (readonly) double decisionDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)initWithRequestType:(long long)arg1 ;
-(double)decisionDelay;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(BOOL)hardVAD;
-(shared_ptr<DSPGraph::Graph>*)createGraph;
-(float)softVAD;
@end

