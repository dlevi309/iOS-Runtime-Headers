/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@class NSMapTable;

@interface CLSGraph : NSObject {

	NSMapTable* _verticesMap;
	NSMapTable* _inEdgesMap;
	NSMapTable* _outEdgesMap;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
@property (nonatomic,readonly) unsigned long long edgeCount; 
@property (nonatomic,readonly) id<CLSGraphVertex><NSObject> anyVertex; 
-(void)traverse:(/*^block*/id)arg1 ;
-(unsigned long long)vertexCount;
-(void)enumerate:(/*^block*/id)arg1 ;
-(unsigned long long)outDegree:(id)arg1 ;
-(id)init;
-(BOOL)hasEdgeFromVertex:(id)arg1 toVertex:(id)arg2 ;
-(void)_traverseStartingAtVertex:(id)arg1 previousVertex:(id)arg2 visitedVertices:(id)arg3 enumerationBlock:(/*^block*/id)arg4 ;
-(id)vertexWithVertexID:(id)arg1 ;
-(unsigned long long)edgeCount;
-(id)outNeighboursOfVertex:(id)arg1 ;
-(void)enumerateNeighboursOfVertex:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(unsigned long long)degree:(id)arg1 ;
-(unsigned long long)inDegree:(id)arg1 ;
-(void)addEdgeFromVertex:(id)arg1 toVertex:(id)arg2 ;
-(void)traverseStartingAtVertex:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)_enumerateVerticesInEdges:(id)arg1 skipingEdges:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(BOOL)containsVertexWithVertexID:(id)arg1 ;
-(BOOL)containsVertex:(id)arg1 ;
-(void)enumerateInNeighboursOfVertex:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)removeSubtreeStartingAtVertex:(id)arg1 ;
-(void)removeVertex:(id)arg1 ;
-(void)traverseVerticesPassingTest:(/*^block*/id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)reset;
-(void)addVertex:(id)arg1 ;
-(id)inNeighboursOfVertex:(id)arg1 ;
-(id)neighboursOfVertex:(id)arg1 ;
-(void)removeEdgeFromVertex:(id)arg1 toVertex:(id)arg2 ;
-(id<CLSGraphVertex><NSObject>)anyVertex;
-(unsigned long long)_degreeOfVertex:(id)arg1 inEdgeMap:(id)arg2 ;
-(void)enumerateOutNeighboursOfVertex:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(id)initWithMemoryOptions:(unsigned long long)arg1 ;
-(void)_removeEdgeFromVertexWithID:(id)arg1 toVertexWithID:(id)arg2 ;
@end

