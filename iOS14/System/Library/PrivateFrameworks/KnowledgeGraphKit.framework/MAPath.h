/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)edgeAtIndex:(unsigned long long)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)nodesCount;
-(id)nodesForLabel:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(unsigned long long)edgesCount;
-(id)sourceNode;
-(id)description;
-(id)targetNode;
-(BOOL)isEqualToPath:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(BOOL)isEmpty;
-(void)setEdges:(id)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)edgesWeight;
-(BOOL)containsEdge:(id)arg1 ;
-(void)addFirstEdge:(id)arg1 ;
-(void)addLastEdge:(id)arg1 ;
-(void)removeFirstEdge;
-(void)removeLastEdge;
-(void)removeAllEdges;
-(id)graphRepresentation;
@end

