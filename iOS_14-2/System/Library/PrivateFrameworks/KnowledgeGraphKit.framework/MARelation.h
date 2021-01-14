/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSString;

@interface MARelation : NSObject

@property (nonatomic,readonly) NSString * visualString; 
@property (nonatomic,readonly) MARelation * transitiveClosure; 
@property (nonatomic,readonly) MARelation * optionalStep; 
@property (nonatomic,readonly) MARelation * inverse; 
+(id)union:(id)arg1 ;
+(id)chain:(id)arg1 ;
+(id)scanRelationWithScanner:(id)arg1 ;
+(id)_scanNonChainRelationWithScanner:(id)arg1 ;
+(id)relationWithVisualString:(id)arg1 ;
-(MARelation *)inverse;
-(id)description;
-(MARelation *)transitiveClosure;
-(MARelation *)optionalStep;
-(NSString *)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)adjacencySetFromSourceNodeIdentifiers:(id)arg1 graphStore:(id)arg2 error:(id*)arg3 ;
-(id)initForSubclassing;
-(id)adjacencyListFromSource:(id)arg1 ;
-(id)adjacencyListFromSources:(id)arg1 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifier:(unsigned long long)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)adjacencySetFromSourceNodeIdentifier:(unsigned long long)arg1 graphStore:(id)arg2 error:(id*)arg3 ;
-(id)repeatWithCount:(unsigned long long)arg1 ;
-(id)repeatWithMinCount:(unsigned long long)arg1 maxCount:(unsigned long long)arg2 ;
@end

