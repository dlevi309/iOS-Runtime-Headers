/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {

	NSMutableArray* _edges;
	NSMutableSet* _nodes;

}
+(id)path;
+(id)pathWithEdges:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)setEdges:(id)arg1 ;
-(id)sourceNode;
-(id)targetNode;
-(id)nodesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(BOOL)isEqualToPath:(id)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(id)edgeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)edgesCount;
-(unsigned long long)nodesCount;
-(double)edgesWeight;
-(BOOL)containsEdge:(id)arg1 ;
-(void)addFirstEdge:(id)arg1 ;
-(void)addLastEdge:(id)arg1 ;
-(void)removeFirstEdge;
-(void)removeLastEdge;
-(void)removeAllEdges;
-(id)graphRepresentation;
@end

