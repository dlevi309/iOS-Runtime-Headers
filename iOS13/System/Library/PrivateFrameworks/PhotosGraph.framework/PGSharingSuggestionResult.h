/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGPersonResult;
@class NSArray, NSDictionary;

@interface PGSharingSuggestionResult : NSObject {

	BOOL _useContactSuggestion;
	id<PGPersonResult> _person;
	double _weight;
	double _sourceWeight;
	NSArray* _sourceNames;

}

@property (nonatomic,readonly) double weight;                                        //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) double sourceWeight;                                  //@synthesize sourceWeight=_sourceWeight - In the implementation block
@property (nonatomic,readonly) NSArray * sourceNames;                                //@synthesize sourceNames=_sourceNames - In the implementation block
@property (assign,nonatomic) BOOL useContactSuggestion;                              //@synthesize useContactSuggestion=_useContactSuggestion - In the implementation block
@property (nonatomic,readonly) id<PGPersonResult> person;                            //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(double)score;
-(double)weight;
-(id<PGPersonResult>)person;
-(id)initWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4 ;
-(void)mergeWithSuggestionResult:(id)arg1 ;
-(double)sourceWeight;
-(NSArray *)sourceNames;
-(BOOL)useContactSuggestion;
-(void)setUseContactSuggestion:(BOOL)arg1 ;
@end

