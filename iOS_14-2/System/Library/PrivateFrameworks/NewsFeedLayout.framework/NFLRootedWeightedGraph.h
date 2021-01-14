/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCSetValueMapTable, NSMutableSet, NSMutableDictionary;

@interface NFLRootedWeightedGraph : NSObject <NSCopying> {

	id _rootNode;
	FCSetValueMapTable* _parentToChildren;
	FCSetValueMapTable* _childToParents;
	NSMutableSet* _childlessNodes;
	NSMutableSet* _parentlessNodes;
	NSMutableDictionary* _weightsByEdge;

}

@property (nonatomic,retain) id rootNode;                                        //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,retain) FCSetValueMapTable * parentToChildren;              //@synthesize parentToChildren=_parentToChildren - In the implementation block
@property (nonatomic,retain) FCSetValueMapTable * childToParents;                //@synthesize childToParents=_childToParents - In the implementation block
@property (nonatomic,retain) NSMutableSet * childlessNodes;                      //@synthesize childlessNodes=_childlessNodes - In the implementation block
@property (nonatomic,retain) NSMutableSet * parentlessNodes;                     //@synthesize parentlessNodes=_parentlessNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * weightsByEdge;                //@synthesize weightsByEdge=_weightsByEdge - In the implementation block
-(NSMutableDictionary *)weightsByEdge;
-(id)init;
-(id)initWithRootNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(void)removeParentlessNodesExhaustivelyButRootNode;
-(BOOL)containsNode:(id)arg1 ;
-(void)setParentToChildren:(FCSetValueMapTable *)arg1 ;
-(id)rootNode;
-(id)_edgeRepresentationFromNode:(id)arg1 toNode:(id)arg2 ;
-(FCSetValueMapTable *)childToParents;
-(void)setRootNode:(id)arg1 ;
-(NSMutableSet *)childlessNodes;
-(id)description;
-(double)weightForEdgeFromNode:(id)arg1 toNode:(id)arg2 ;
-(void)_setWeight:(double)arg1 forEdgeFromNode:(id)arg2 toNode:(id)arg3 ;
-(id)highestAverageWeightedPathsFromRootToNode:(id)arg1 pathWeight:(double*)arg2 ;
-(void)setWeightsByEdge:(NSMutableDictionary *)arg1 ;
-(void)setParentlessNodes:(NSMutableSet *)arg1 ;
-(void)addDirectedEdgeWithWeight:(double)arg1 fromNode:(id)arg2 toNode:(id)arg3 ;
-(void)setChildlessNodes:(NSMutableSet *)arg1 ;
-(void)removeEdgeFromNode:(id)arg1 toNode:(id)arg2 ;
-(NSMutableSet *)parentlessNodes;
-(void)debug_assertDataStructuresInSync;
-(id)childrenOfNode:(id)arg1 ;
-(void)removeChildlessNodesExhaustivelyButNode:(id)arg1 ;
-(void)setChildToParents:(FCSetValueMapTable *)arg1 ;
-(void)_submitMaxPath:(id)arg1 withWeight:(double)arg2 toNode:(id)arg3 maxPathStore:(id)arg4 ;
-(FCSetValueMapTable *)parentToChildren;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parentsOfNode:(id)arg1 ;
@end

