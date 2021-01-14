/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MARelation.h>

@class NSArray;

@interface MAChainRelation : MARelation {

	NSArray* _steps;

}

@property (nonatomic,readonly) NSArray * steps;              //@synthesize steps=_steps - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(NSArray *)steps;
-(id)inverse;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)initWithSteps:(id)arg1 ;
@end

