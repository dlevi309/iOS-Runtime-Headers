/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PGGraphRelatableEvent;
@class PGGraphNode, NSDictionary, NSMutableDictionary;

@interface PGGraphMatchingResult : NSObject <NSCopying> {

	PGGraphNode*<PGGraphRelatableEvent> _event;
	NSDictionary* _keywords;
	double _score;
	NSMutableDictionary* _context;

}

@property (nonatomic,readonly) NSMutableDictionary * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PGGraphNode*<PGGraphRelatableEvent> event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double score;                                             //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDictionary * keywords;                                //@synthesize keywords=_keywords - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)context;
-(NSDictionary *)keywords;
-(double)score;
-(void)setScore:(double)arg1 ;
-(PGGraphNode*<PGGraphRelatableEvent>)event;
-(id)initWithEvent:(id)arg1 ;
-(id)localStartDate;
-(id)localEndDate;
-(BOOL)isEqualToResult:(id)arg1 ;
-(id)sortedCriteria;
-(id)keywordsForRelatedType:(unsigned long long)arg1 ;
-(void)addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(void)clearKeywordsForRelatedType:(unsigned long long)arg1 ;
-(id)contextItemForRelatedType:(unsigned long long)arg1 ;
-(void)setContextItem:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(id)_contextItemsSortedByScoreAscending:(BOOL)arg1 ;
-(id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)arg1 ;
-(void)enumerateContextItems:(/*^block*/id)arg1 ;
@end

