/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)allEdges;
-(BOOL)isOutEdge:(id)arg1 ;
-(void)_removeEdge:(id)arg1 ;
-(BOOL)isInOutEdge:(id)arg1 ;
-(unsigned long long)edgeCount;
-(NSSet *)outEdges;
-(void)_addEdge:(id)arg1 ;
-(id)description;
-(BOOL)hasEdgeBetweenNode:(id)arg1 ;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEdgeFromNode:(id)arg1 ;
-(NSSet *)inEdges;
-(BOOL)isInEdge:(id)arg1 ;
-(unsigned long long)typeOfEdge:(id)arg1 ;
-(NSSet *)inOutEdges;
-(id)edgesForLabel:(id)arg1 ;
-(id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)enumerateEdgesFromNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)edgeCountForLabel:(id)arg1 ;
-(BOOL)hasEdgeTowardNode:(id)arg1 ;
-(void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

