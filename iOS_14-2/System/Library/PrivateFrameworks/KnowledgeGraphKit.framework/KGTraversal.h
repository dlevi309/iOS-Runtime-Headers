/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@protocol KGTraversal
@required
-(id)distribution;
-(void)setStartingNodes:(id)arg1;
-(void)setStartingNodeFilter:(id)arg1;
-(void)setVariableStepMode;
-(void)setTerminatingCondition:(id)arg1;
-(void)setTargetNodesOnlyReportingMode;
-(void)setUncountedPathsReportingMode;
-(void)setCountedPathsReportingMode;
-(void)addStepForEdgeDirection:(unsigned long long)arg1 edgeFilter:(id)arg2 targetNodeFilter:(id)arg3;
-(BOOL)performTraversal:(id*)arg1;
-(id)targetNodes;

@end

