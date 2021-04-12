/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class MLModelDescription, MLMultiArrayConstraint, MLMultiArray;

@interface SNDSPGraphCustomModel : NSObject {

	MLModelDescription* _modelDescription;
	MLMultiArrayConstraint* _inputConstraint;
	MLMultiArrayConstraint* _outputConstraint;
	unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph> >* _graph;
	vector<float, std::__1::allocator<float> >* _scratchFloatSpace;
	MLMultiArray* _modelOutput;
	/*^block*/id _preProcessCallback;

}

@property (nonatomic,copy) id preProcessCallback;              //@synthesize preProcessCallback=_preProcessCallback - In the implementation block
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)preProcessCallback;
-(id)initWithModelDescription:(id)arg1 expectedInputShape:(id)arg2 expectedOutputShape:(id)arg3 graph:(unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph> >*)arg4 error:(id*)arg5 ;
-(void)setPreProcessCallback:(id)arg1 ;
@end

