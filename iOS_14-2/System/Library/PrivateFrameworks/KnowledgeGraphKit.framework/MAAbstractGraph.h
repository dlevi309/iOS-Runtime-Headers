/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSMutableArray;

@interface MAAbstractGraph : NSObject {

	NSMutableArray* _nodes;
	NSMutableArray* _edges;

}
-(id)init;
-(id)addUniqueNodeWithLabel:(id)arg1 didCreate:(BOOL*)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 didCreate:(BOOL*)arg4 ;
@end

