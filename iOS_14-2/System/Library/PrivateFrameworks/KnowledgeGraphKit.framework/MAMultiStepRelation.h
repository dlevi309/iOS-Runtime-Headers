/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MARelation.h>

@class MARelation;

@interface MAMultiStepRelation : MARelation {

	MARelation* _base;
	unsigned long long _minNumberOfSteps;
	unsigned long long _maxNumberOfSteps;

}

@property (nonatomic,readonly) MARelation * base;                                //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) unsigned long long minNumberOfSteps;              //@synthesize minNumberOfSteps=_minNumberOfSteps - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfSteps;              //@synthesize maxNumberOfSteps=_maxNumberOfSteps - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(MARelation *)base;
-(id)inverse;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)initWithBase:(id)arg1 minNumberOfSteps:(unsigned long long)arg2 maxNumberOfSteps:(unsigned long long)arg3 ;
-(id)initWithBase:(id)arg1 numberOfSteps:(unsigned long long)arg2 ;
-(unsigned long long)minNumberOfSteps;
-(unsigned long long)maxNumberOfSteps;
@end

