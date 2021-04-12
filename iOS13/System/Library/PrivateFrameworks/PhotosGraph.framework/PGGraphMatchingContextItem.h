/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGGraphNode, NSSet, NSDate;

@interface PGGraphMatchingContextItem : NSObject {

	double _score;
	unsigned long long _relatedType;
	unsigned long long _criteria;
	PGGraphNode* _referenceNode;
	PGGraphNode* _matchedNode;
	NSSet* _contextNodes;
	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (nonatomic,readonly) PGGraphNode * referenceNode;                 //@synthesize referenceNode=_referenceNode - In the implementation block
@property (nonatomic,readonly) PGGraphNode * matchedNode;                   //@synthesize matchedNode=_matchedNode - In the implementation block
@property (nonatomic,readonly) NSSet * contextNodes;                        //@synthesize contextNodes=_contextNodes - In the implementation block
@property (nonatomic,readonly) unsigned long long relatedType;              //@synthesize relatedType=_relatedType - In the implementation block
@property (assign,nonatomic) double score;                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long criteria;                   //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;                     //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                       //@synthesize localEndDate=_localEndDate - In the implementation block
+(id)contextItemWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6 ;
+(unsigned long long)criteriaForLocationLabel:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(PGGraphNode *)referenceNode;
-(unsigned long long)criteria;
-(void)setCriteria:(unsigned long long)arg1 ;
-(BOOL)isEqualToContextItem:(id)arg1 ;
-(unsigned long long)relatedType;
-(id)initWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6 ;
-(void)_findLocalStartAndEndDate;
-(id)_matchedAddressNode;
-(PGGraphNode *)matchedNode;
-(NSSet *)contextNodes;
@end

