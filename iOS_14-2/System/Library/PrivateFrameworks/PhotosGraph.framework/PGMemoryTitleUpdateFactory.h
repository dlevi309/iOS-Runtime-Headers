/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGGraph, PHMemory, NSSet;

@interface PGMemoryTitleUpdateFactory : NSObject {

	PGGraph* _graph;
	PHMemory* _memory;
	NSSet* _momentNodes;

}

@property (nonatomic,retain) PGGraph * graph;                  //@synthesize graph=_graph - In the implementation block
@property (nonatomic,retain) PHMemory * memory;                //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSSet * momentNodes;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(PGGraph *)graph;
-(PHMemory *)memory;
-(void)setMemory:(PHMemory *)arg1 ;
-(NSSet *)momentNodes;
-(void)setGraph:(PGGraph *)arg1 ;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(id)initWithMemory:(id)arg1 graph:(id)arg2 ;
-(id)titleGeneratorWithError:(id*)arg1 ;
-(id)_momentNodesFromMemory:(id)arg1 ;
-(long long)_predominantYearForYearSummaryMemory;
-(id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 ;
-(id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 ignoredNodes:(id)arg4 ;
-(id)_personNodeForPersonMemory;
-(id)_areaNodeForAreaMemory;
-(id)_predominantSuperset;
@end

