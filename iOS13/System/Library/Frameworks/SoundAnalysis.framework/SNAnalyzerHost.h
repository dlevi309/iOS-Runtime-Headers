/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNProcessing.h>

@protocol SNAnalyzerProviding, SNAnalyzing, SNTimeConverting, SNResultsObserving, SNResultsGating;
@class NSString;

@interface SNAnalyzerHost : NSObject <SNProcessing> {

	id<SNAnalyzerProviding> _request;
	id<SNAnalyzing> _analyzer;
	id<SNTimeConverting> _timeConverter;
	id<SNResultsObserving> _resultsObserver;
	id<SNResultsGating> _resultsGater;
	long long _requestState;

}

@property (nonatomic,readonly) id sharedProcessorConfiguration; 
@property (assign,nonatomic) long long requestState;                            //@synthesize requestState=_requestState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(long long)requestState;
-(void)setRequestState:(long long)arg1 ;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)sharedProcessorConfiguration;
-(id)initWithRequest:(id)arg1 resultsObserver:(id)arg2 timeConverter:(id)arg3 resultsGater:(id)arg4 ;
-(void)handleAnalyzerCompletion;
-(void)handleAnalyzerError:(id)arg1 ;
-(id)clientResultsFromProcessorResults:(id)arg1 ;
-(void)requestDidReturnError:(id)arg1 ;
-(void)primeAnalyzerGraph;
@end

