/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNProcessing <NSObject>
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@required
-(shared_ptr<DSPGraph::Graph>*)graph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2;

@end

