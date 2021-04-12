/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNSystemConfiguration, NSArray, NSString;

@interface SNDirectionOfArrivalEstimator : NSObject <SNAnalyzing> {

	SNSystemConfiguration* _systemConfiguration;
	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) float azimuth; 
@property (nonatomic,readonly) NSArray * spatialSpectrum; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(float)azimuth;
-(NSArray *)spatialSpectrum;
-(void)updateGraph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
@end

