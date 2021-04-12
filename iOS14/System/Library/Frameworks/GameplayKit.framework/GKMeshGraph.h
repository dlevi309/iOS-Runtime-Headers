/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@class NSMutableArray, NSArray;

@interface GKMeshGraph : GKGraph {

	NSMutableArray* _sourceObstacles;
	Class _nodeClass;

}

@property (nonatomic,readonly) NSArray * obstacles; 
@property (nonatomic,readonly) float bufferRadius; 
@property (assign,nonatomic) unsigned long long triangulationMode; 
@property (nonatomic,readonly) unsigned long long triangleCount; 
+(BOOL)supportsSecureCoding;
+(id)graphWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 ;
+(id)graphWithBufferRadius:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)triangleCount;
-(Class)nodeClass;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 ;
-(float)bufferRadius;
-(GKCGraph*)makeCGraph;
-(GKCMeshGraph*)cMeshGraph;
-(NSArray *)obstacles;
-(void)setTriangulationMode:(unsigned long long)arg1 ;
-(unsigned long long)triangulationMode;
-(void)setMakeNodesFromTriangleCenters:(BOOL)arg1 ;
-(BOOL)makeNodesFromTriangleCenters;
-(void)setMakeNodesFromTriangleVertices:(BOOL)arg1 ;
-(BOOL)makeNodesFromTriangleVertices;
-(void)setMakeNodesFromTriangleEdgeMidpoints:(BOOL)arg1 ;
-(BOOL)makeNodesFromTriangleEdgeMidpoints;
-(id)initWithBufferRadius:(float)arg1 ;
-(void)addObstacles:(id)arg1 ;
-(void)removeObstacles:(id)arg1 ;
-(void)connectNodeUsingObstacles:(id)arg1 ;
-(void)triangulate;
-(GKTriangle)triangleAtIndex:(unsigned long long)arg1 ;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
@end

