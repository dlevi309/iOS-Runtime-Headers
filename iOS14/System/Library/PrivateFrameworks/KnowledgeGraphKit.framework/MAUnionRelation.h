/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MARelation.h>

@class NSArray;

@interface MAUnionRelation : MARelation {

	NSArray* _relations;

}

@property (nonatomic,readonly) NSArray * relations;              //@synthesize relations=_relations - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(NSArray *)relations;
-(id)inverse;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)visualString;
-(id)initWithRelations:(id)arg1 ;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSource:(unsigned long long)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
@end

