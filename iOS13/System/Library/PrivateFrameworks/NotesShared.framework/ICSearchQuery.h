/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol OS_dispatch_semaphore;
@class NSDictionary, NSString, NSArray, CSSearchQuery, NSObject;

@interface ICSearchQuery : NSObject {

	BOOL _wasForceStopped;
	BOOL _modernResultsOnly;
	NSDictionary* _queryResults;
	NSString* _highlightString;
	unsigned long long _rankingInterpretation;
	NSString* _queryString;
	NSArray* _rankingQueries;
	CSSearchQuery* _searchQuery;
	NSObject*<OS_dispatch_semaphore> _synchronousSemaphore;

}

@property (nonatomic,copy) NSString * queryString;                                               //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSString * highlightString;                                         //@synthesize highlightString=_highlightString - In the implementation block
@property (nonatomic,retain) NSArray * rankingQueries;                                           //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (nonatomic,retain) CSSearchQuery * searchQuery;                                        //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,retain) NSDictionary * queryResults;                                        //@synthesize queryResults=_queryResults - In the implementation block
@property (assign,nonatomic) unsigned long long rankingInterpretation;                           //@synthesize rankingInterpretation=_rankingInterpretation - In the implementation block
@property (assign,nonatomic) BOOL modernResultsOnly;                                             //@synthesize modernResultsOnly=_modernResultsOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> synchronousSemaphore;              //@synthesize synchronousSemaphore=_synchronousSemaphore - In the implementation block
@property (assign,nonatomic) BOOL wasForceStopped;                                               //@synthesize wasForceStopped=_wasForceStopped - In the implementation block
+(id)defaultAttributesToReturnFromCoreSpotlight;
-(id)description;
-(void)cancel;
-(void)setup;
-(CSSearchQuery *)searchQuery;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(BOOL)run:(id*)arg1 ;
-(void)setSearchQuery:(CSSearchQuery *)arg1 ;
-(NSArray *)rankingQueries;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(void)setQueryResults:(NSDictionary *)arg1 ;
-(NSDictionary *)queryResults;
-(void)forceStop;
-(void)setRankingInterpretation:(unsigned long long)arg1 ;
-(void)setHighlightString:(NSString *)arg1 ;
-(void)setModernResultsOnly:(BOOL)arg1 ;
-(BOOL)wasForceStopped;
-(BOOL)modernResultsOnly;
-(void)setSynchronousSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)synchronousSemaphore;
-(void)setWasForceStopped:(BOOL)arg1 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 rankingInterpretation:(unsigned long long)arg3 highlightString:(id)arg4 modernResultsOnly:(BOOL)arg5 ;
-(NSString *)highlightString;
-(unsigned long long)rankingInterpretation;
@end

