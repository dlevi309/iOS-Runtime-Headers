/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SearchFoundation/SFSearchSuggestion.h>

@class NSArray;

@interface SPSearchSuggestion : SFSearchSuggestion {

	BOOL _isSingleThread;
	BOOL _hasUsedDate;
	BOOL _isShortcut;
	BOOL _hasMultipleResults;
	int _weight;
	int _parentWeight;
	int _rootWeight;
	int _completionType;
	int _prefixLen;
	float _fieldWeight;
	unsigned long long _queryLen;
	unsigned long long _queryFragmentCount;
	unsigned long long _queryCompletionCount;
	unsigned long long _fragments;
	double _age;
	double _prob;
	unsigned long long _maxscore;
	double _phraseScore;
	double _punishment;
	double _compositeScore;
	NSArray* _bundleIDs;

}

@property (assign) unsigned long long queryLen;                          //@synthesize queryLen=_queryLen - In the implementation block
@property (assign) unsigned long long queryFragmentCount;                //@synthesize queryFragmentCount=_queryFragmentCount - In the implementation block
@property (assign) unsigned long long queryCompletionCount;              //@synthesize queryCompletionCount=_queryCompletionCount - In the implementation block
@property (assign) unsigned long long fragments;                         //@synthesize fragments=_fragments - In the implementation block
@property (assign) double age;                                           //@synthesize age=_age - In the implementation block
@property (assign) double prob;                                          //@synthesize prob=_prob - In the implementation block
@property (assign) unsigned long long maxscore;                          //@synthesize maxscore=_maxscore - In the implementation block
@property (assign) int weight;                                           //@synthesize weight=_weight - In the implementation block
@property (assign) int parentWeight;                                     //@synthesize parentWeight=_parentWeight - In the implementation block
@property (assign) int rootWeight;                                       //@synthesize rootWeight=_rootWeight - In the implementation block
@property (assign) double phraseScore;                                   //@synthesize phraseScore=_phraseScore - In the implementation block
@property (assign) double punishment;                                    //@synthesize punishment=_punishment - In the implementation block
@property (assign) double compositeScore;                                //@synthesize compositeScore=_compositeScore - In the implementation block
@property (assign) int completionType;                                   //@synthesize completionType=_completionType - In the implementation block
@property (assign) int prefixLen;                                        //@synthesize prefixLen=_prefixLen - In the implementation block
@property (assign) float fieldWeight;                                    //@synthesize fieldWeight=_fieldWeight - In the implementation block
@property (assign) BOOL isSingleThread;                                  //@synthesize isSingleThread=_isSingleThread - In the implementation block
@property (assign) BOOL hasUsedDate;                                     //@synthesize hasUsedDate=_hasUsedDate - In the implementation block
@property (assign) BOOL isShortcut;                                      //@synthesize isShortcut=_isShortcut - In the implementation block
@property (assign) BOOL hasMultipleResults;                              //@synthesize hasMultipleResults=_hasMultipleResults - In the implementation block
@property (retain) NSArray * bundleIDs;                                  //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) NSArray * searchEntities; 
+(id)suggestionsWithData:(id)arg1 queryString:(id)arg2 ;
-(id)query;
-(NSArray *)bundleIDs;
-(Class)classForKeyedArchiver;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(long long)compare:(id)arg1 ;
-(double)prob;
-(void)setWeight:(int)arg1 ;
-(id)suggestion;
-(NSArray *)searchEntities;
-(int)weight;
-(id)description;
-(int)completionType;
-(void)setCompletionType:(int)arg1 ;
-(BOOL)isShortcut;
-(void)setAge:(double)arg1 ;
-(unsigned long long)fragments;
-(unsigned long long)hash;
-(double)age;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSuggestion:(id)arg1 query:(id)arg2 scores:(id)arg3 bundleIDs:(id)arg4 ;
-(int)prefixLen;
-(double)compositeScore;
-(BOOL)hasUsedDate;
-(unsigned long long)maxscore;
-(unsigned long long)queryLen;
-(unsigned long long)queryFragmentCount;
-(unsigned long long)queryCompletionCount;
-(int)parentWeight;
-(int)rootWeight;
-(double)phraseScore;
-(double)punishment;
-(float)fieldWeight;
-(BOOL)isSingleThread;
-(BOOL)hasMultipleResults;
-(id)suggestionsFeedbackData;
-(void)setQueryLen:(unsigned long long)arg1 ;
-(void)setQueryFragmentCount:(unsigned long long)arg1 ;
-(void)setQueryCompletionCount:(unsigned long long)arg1 ;
-(void)setFragments:(unsigned long long)arg1 ;
-(void)setProb:(double)arg1 ;
-(void)setMaxscore:(unsigned long long)arg1 ;
-(void)setParentWeight:(int)arg1 ;
-(void)setRootWeight:(int)arg1 ;
-(void)setPhraseScore:(double)arg1 ;
-(void)setPunishment:(double)arg1 ;
-(void)setCompositeScore:(double)arg1 ;
-(void)setPrefixLen:(int)arg1 ;
-(void)setFieldWeight:(float)arg1 ;
-(void)setIsSingleThread:(BOOL)arg1 ;
-(void)setHasUsedDate:(BOOL)arg1 ;
-(void)setIsShortcut:(BOOL)arg1 ;
-(void)setHasMultipleResults:(BOOL)arg1 ;
@end
