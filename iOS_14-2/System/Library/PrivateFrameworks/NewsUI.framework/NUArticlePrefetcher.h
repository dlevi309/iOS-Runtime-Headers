/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/FCKeyedOperationQueueDelegate.h>
#import <libobjc.A.dylib/NUArticlePrefetcherType.h>

@protocol NUArticleFactory, NUArticleDataProviderFactory;
@class FCKeyedOperationQueue, NSMutableDictionary, NSCountedSet, NSTimer, NSString;

@interface NUArticlePrefetcher : NSObject <FCKeyedOperationQueueDelegate, NUArticlePrefetcherType> {

	id<NUArticleFactory> _articleFactory;
	id<NUArticleDataProviderFactory> _articleDataProviderFactory;
	FCKeyedOperationQueue* _prefetchQueue;
	NSMutableDictionary* _articleDataProviderCache;
	NSCountedSet* _interestedArticleIDs;
	NSMutableDictionary* _headlinesForArticles;
	NSMutableDictionary* _interestModificationDates;
	unsigned long long _highWaterMark;
	NSTimer* _reprocessTimer;

}

@property (nonatomic,retain) id<NUArticleFactory> articleFactory;                                      //@synthesize articleFactory=_articleFactory - In the implementation block
@property (nonatomic,retain) id<NUArticleDataProviderFactory> articleDataProviderFactory;              //@synthesize articleDataProviderFactory=_articleDataProviderFactory - In the implementation block
@property (nonatomic,retain) FCKeyedOperationQueue * prefetchQueue;                                    //@synthesize prefetchQueue=_prefetchQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * articleDataProviderCache;                           //@synthesize articleDataProviderCache=_articleDataProviderCache - In the implementation block
@property (nonatomic,retain) NSCountedSet * interestedArticleIDs;                                      //@synthesize interestedArticleIDs=_interestedArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * headlinesForArticles;                               //@synthesize headlinesForArticles=_headlinesForArticles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interestModificationDates;                          //@synthesize interestModificationDates=_interestModificationDates - In the implementation block
@property (assign,nonatomic) unsigned long long highWaterMark;                                         //@synthesize highWaterMark=_highWaterMark - In the implementation block
@property (nonatomic,retain) NSTimer * reprocessTimer;                                                 //@synthesize reprocessTimer=_reprocessTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_revisitSuspendedState;
-(NSMutableDictionary *)interestModificationDates;
-(NSTimer *)reprocessTimer;
-(void)setReprocessTimer:(NSTimer *)arg1 ;
-(FCKeyedOperationQueue *)prefetchQueue;
-(void)setPrefetchQueue:(FCKeyedOperationQueue *)arg1 ;
-(void)setInterestModificationDates:(NSMutableDictionary *)arg1 ;
-(void)setHighWaterMark:(unsigned long long)arg1 ;
-(unsigned long long)highWaterMark;
-(void)addPrefetchInterestInArticleID:(id)arg1 headline:(id)arg2 ;
-(void)removePrefetchInterestInArticleID:(id)arg1 ;
-(id)prefetchedArticleDataProviderForArticleID:(id)arg1 ;
-(id<NUArticleDataProviderFactory>)articleDataProviderFactory;
-(id<NUArticleFactory>)articleFactory;
-(id)initWithArticleFactory:(id)arg1 articleDataProviderFactory:(id)arg2 ;
-(NSCountedSet *)interestedArticleIDs;
-(void)_flushDataProviderIfNeededForHeadline:(id)arg1 ;
-(NSMutableDictionary *)headlinesForArticles;
-(void)_didChangeInterestedArticleIDs;
-(NSMutableDictionary *)articleDataProviderCache;
-(void)_reprocessInterestedArticleIDs;
-(void)_flushUnusedDataProvidersIfNeeded;
-(void)setArticleFactory:(id<NUArticleFactory>)arg1 ;
-(void)setArticleDataProviderFactory:(id<NUArticleDataProviderFactory>)arg1 ;
-(void)setArticleDataProviderCache:(NSMutableDictionary *)arg1 ;
-(void)setInterestedArticleIDs:(NSCountedSet *)arg1 ;
-(void)setHeadlinesForArticles:(NSMutableDictionary *)arg1 ;
@end

