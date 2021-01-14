/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNDetectorHeadConfiguration, NSString;

@interface SNDetectorHead : NSObject <SNAnalyzing> {

	SNDetectorHeadConfiguration* _configuration;
	NSString* _detectorBoxName;
	shared_ptr<DSPGraph::Graph>* _graph;
	NSString* _inputFeatureName;
	NSString* _outputConfidenceFeatureName;
	NSString* _outputDetectedFeatureName;

}

@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)completeTimingInfoInResult:(id)arg1 windowLengthFrames:(unsigned)arg2 usingBox:(Box*)arg3 ;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)initWithConfiguration:(id)arg1 ;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;
@end

