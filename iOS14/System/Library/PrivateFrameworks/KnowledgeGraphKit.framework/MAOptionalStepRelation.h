/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MARelation.h>

@class MARelation;

@interface MAOptionalStepRelation : MARelation {

	MARelation* _base;

}

@property (nonatomic,readonly) MARelation * base;              //@synthesize base=_base - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(MARelation *)base;
-(id)inverse;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transitiveClosure;
-(id)initWithBase:(id)arg1 ;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifier:(unsigned long long)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
@end

