/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureGraphElement.h>

@class NSMutableSet, NSMapTable, NSSet;

@interface UIGestureGraphNode : UIGestureGraphElement {

	NSMutableSet* _inEdges;
	NSMutableSet* _outEdges;
	NSMutableSet* _inOutEdges;
	NSMapTable* _edgesByLabel;

}

@property (nonatomic,readonly) unsigned long long edgeCount; 
@property (nonatomic,readonly) NSSet * allEdges; 
@property (nonatomic,readonly) NSSet * inEdges; 
@property (nonatomic,readonly) NSSet * outEdges; 
@property (nonatomic,readonly) NSSet * inOutEdges; 
-(id)description;
-(unsigned long long)edgeCountForLabel:(id)arg1 ;
-(unsigned long long)edgeCount;
-(NSSet *)allEdges;
-(void)_addEdge:(id)arg1 ;
-(void)_removeEdge:(id)arg1 ;
-(NSSet *)outEdges;
-(NSSet *)inOutEdges;
-(NSSet *)inEdges;
-(id)edgesForLabel:(id)arg1 ;
-(BOOL)isInEdge:(id)arg1 ;
-(BOOL)isOutEdge:(id)arg1 ;
-(unsigned long long)typeOfEdge:(id)arg1 ;
-(id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(BOOL)hasEdgeTowardNode:(id)arg1 ;
-(BOOL)hasEdgeFromNode:(id)arg1 ;
-(BOOL)hasEdgeBetweenNode:(id)arg1 ;
-(BOOL)isInOutEdge:(id)arg1 ;
-(void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesFromNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
@end

