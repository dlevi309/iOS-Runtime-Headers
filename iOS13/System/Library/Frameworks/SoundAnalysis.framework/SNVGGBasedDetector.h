/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNVGGBasedDetectorConfiguration, NSString;

@interface SNVGGBasedDetector : NSObject <SNAnalyzing> {

	SNVGGBasedDetectorConfiguration* _configuration;
	NSString* _detectorBoxName;
	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
+(void)completeTimingInfoInResult:(id)arg1 usingBox:(Box*)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(void)updateGraph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(void)primeGraph;
-(id)detectionResultsFromBox:(CoreMLBox*)arg1 coreMLInfo:(id)arg2 features:(id)arg3 ;
-(id)classificationResultsFromBox:(CoreMLBox*)arg1 coreMLInfo:(id)arg2 features:(id)arg3 ;
@end

