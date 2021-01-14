/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSArray, NSString;

@interface SNDirectionOfArrivalEstimator : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) float azimuth; 
@property (nonatomic,readonly) NSArray * spatialSpectrum; 
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(float)azimuth;
-(NSArray *)spatialSpectrum;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
@end

