/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class KGGraph;

@interface KnowledgeGraphTestEnvironment : NSObject {

	KGGraph* _graph;

}

@property (nonatomic,readonly) KGGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(id)temporaryURLWithFileExtension:(id)arg1 ;
+(id)environmentWithTestDBWithStoreType:(Class)arg1 ;
+(id)matisseGraphs;
+(id)testEnvironmentsForExistingStores;
+(id)testEnvironmentsForOnDiskExistingStores;
-(KGGraph *)graph;
-(unsigned long long)edgeCount;
-(unsigned long long)nodeCount;
-(id)initWithKGGraph:(id)arg1 ;
-(void)closeAndDeleteEnvironment;
-(id)addNodeWithLabels:(id)arg1 weight:(double)arg2 properties:(id)arg3 ;
-(id)addEdgeWithLabels:(id)arg1 weight:(double)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
-(id)refetchNode:(id)arg1 ;
-(id)refetchEdge:(id)arg1 ;
-(BOOL)deleteNode:(id)arg1 ;
-(BOOL)deleteEdge:(id)arg1 ;
-(void)populateGraph;
@end

