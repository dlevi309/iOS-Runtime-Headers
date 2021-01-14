/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol OS_dispatch_semaphore;
@class NSArray, NSString, CSTopHitSearchQuery, NSObject;

@interface ICTopHitSearchQuery : NSObject {

	BOOL _wasForceStopped;
	BOOL _modernResultsOnly;
	NSArray* _queryResults;
	NSString* _highlightString;
	CSTopHitSearchQuery* _query;
	NSString* _queryString;
	NSObject*<OS_dispatch_semaphore> _synchronousSemaphore;

}

@property (nonatomic,retain) CSTopHitSearchQuery * query;                                        //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSString * queryString;                                             //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> synchronousSemaphore;              //@synthesize synchronousSemaphore=_synchronousSemaphore - In the implementation block
@property (assign,nonatomic) BOOL wasForceStopped;                                               //@synthesize wasForceStopped=_wasForceStopped - In the implementation block
@property (nonatomic,retain) NSArray * queryResults;                                             //@synthesize queryResults=_queryResults - In the implementation block
@property (nonatomic,readonly) NSString * highlightString;                                       //@synthesize highlightString=_highlightString - In the implementation block
@property (nonatomic,readonly) BOOL modernResultsOnly;                                           //@synthesize modernResultsOnly=_modernResultsOnly - In the implementation block
-(CSTopHitSearchQuery *)query;
-(void)setup;
-(BOOL)wasForceStopped;
-(NSString *)highlightString;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(BOOL)modernResultsOnly;
-(void)setSynchronousSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)synchronousSemaphore;
-(void)setWasForceStopped:(BOOL)arg1 ;
-(NSArray *)queryResults;
-(id)initWithQueryString:(id)arg1 keyboardLanguage:(id)arg2 modernResultsOnly:(BOOL)arg3 ;
-(void)setQuery:(CSTopHitSearchQuery *)arg1 ;
-(BOOL)run:(id*)arg1 ;
-(void)forceStop;
-(void)cancel;
-(void)setQueryResults:(NSArray *)arg1 ;
@end

