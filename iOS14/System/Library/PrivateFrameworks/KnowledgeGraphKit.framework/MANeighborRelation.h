/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MARelation.h>

@class MAEdgeFilter;

@interface MANeighborRelation : MARelation {

	unsigned long long _edgeType;
	MAEdgeFilter* _edgeFilter;

}

@property (nonatomic,readonly) unsigned long long edgeType;                 //@synthesize edgeType=_edgeType - In the implementation block
@property (nonatomic,copy,readonly) MAEdgeFilter * edgeFilter;              //@synthesize edgeFilter=_edgeFilter - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(id)inverse;
-(unsigned long long)hash;
-(unsigned long long)edgeType;
-(BOOL)isEqual:(id)arg1 ;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)initWithEdgeType:(unsigned long long)arg1 edgeFilter:(id)arg2 ;
-(id)adjacencySetFromSourceNodeIdentifiers:(id)arg1 graphStore:(id)arg2 error:(id*)arg3 ;
-(MAEdgeFilter *)edgeFilter;
@end

