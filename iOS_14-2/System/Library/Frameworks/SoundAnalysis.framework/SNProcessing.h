/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNProcessing <NSObject>
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@required
-(shared_ptr<DSPGraph::Graph>*)graph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2;

@end

