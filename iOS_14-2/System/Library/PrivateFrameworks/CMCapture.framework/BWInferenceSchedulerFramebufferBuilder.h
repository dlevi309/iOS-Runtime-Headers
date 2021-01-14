/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList, NSMapTable;

@interface BWInferenceSchedulerFramebufferBuilder : NSObject {

	BWInferenceSchedulerGraph* _graph;
	BWInferenceSchedulerJobList* _prototypeJobList;
	unsigned long long _jobCount;
	NSMapTable* _directedEdgesByNode;
	BOOL _didVendFramebuffer;

}
+(void)initialize;
-(void)_prepareToConnectNode:(id)arg1 ;
-(id)newFramebuffer;
-(id)_connectNodesExpectingInputs:(id)arg1 toNodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodeForExternalRequirement:(id)arg4 ;
-(id)_addScalingNodesForNodesExpectingInputs:(id)arg1 nodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodesForExternalRequirements:(id)arg4 fencedMediaKeys:(id)arg5 iterations:(unsigned long long)arg6 ;
-(void)_populateJobList:(id)arg1 fromGraphEdges:(id)arg2 withHeadNode:(id)arg3 jobTypes:(id)arg4 ;
-(BOOL)_validToDeriveFormat:(id)arg1 fromFormat:(id)arg2 vendingProvider:(id)arg3 ;
-(id)_newScalingNodesForScalingRequirement:(id)arg1 fencedMedia:(BOOL)arg2 ;
-(id)initWithInferenceRequirements:(id)arg1 dependencyProvider:(id)arg2 formatProvider:(id)arg3 ;
-(void)dealloc;
@end

