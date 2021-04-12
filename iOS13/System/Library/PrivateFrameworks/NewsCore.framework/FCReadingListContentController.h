/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCKeyedOperationQueueDelegate.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>

@protocol FCReadingListContentControllerObserving, FCOperationThrottler, OS_dispatch_group;
@class NSArray, NSDictionary, FCKeyedOperationQueue, NSMutableDictionary, FCCloudContext, NSObject, NSMutableSet, FCThreadSafeMutableSet, NSSet, NSString;

@interface FCReadingListContentController : NSObject <FCKeyedOperationQueueDelegate, FCOperationThrottlerDelegate, FCNetworkReachabilityObserving> {

	BOOL _hasBeenEnabled;
	id<FCReadingListContentControllerObserving> observer;
	NSArray* _articleIDsAvailableForOfflineReading;
	NSArray* _articleIDsOfInterest;
	NSDictionary* _holdInterestTokensByArticleID;
	FCKeyedOperationQueue* _articleContentDownloadKeyQueue;
	id<FCOperationThrottler> _updateHoldInterestTokensThrottler;
	NSMutableDictionary* _outstandingOperationsByArticleID;
	FCCloudContext* _context;
	NSObject*<OS_dispatch_group> _articleContentDownloadGroup;
	NSMutableSet* _fetchResults;
	FCThreadSafeMutableSet* _readingListAvailableForOfflineReading;

}

@property (nonatomic,copy) NSArray * articleIDsOfInterest;                                                //@synthesize articleIDsOfInterest=_articleIDsOfInterest - In the implementation block
@property (nonatomic,copy) NSDictionary * holdInterestTokensByArticleID;                                  //@synthesize holdInterestTokensByArticleID=_holdInterestTokensByArticleID - In the implementation block
@property (nonatomic,retain) FCKeyedOperationQueue * articleContentDownloadKeyQueue;                      //@synthesize articleContentDownloadKeyQueue=_articleContentDownloadKeyQueue - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> updateHoldInterestTokensThrottler;                  //@synthesize updateHoldInterestTokensThrottler=_updateHoldInterestTokensThrottler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingOperationsByArticleID;                      //@synthesize outstandingOperationsByArticleID=_outstandingOperationsByArticleID - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> articleContentDownloadGroup;                    //@synthesize articleContentDownloadGroup=_articleContentDownloadGroup - In the implementation block
@property (nonatomic,retain) NSMutableSet * fetchResults;                                                 //@synthesize fetchResults=_fetchResults - In the implementation block
@property (assign,nonatomic) BOOL hasBeenEnabled;                                                         //@synthesize hasBeenEnabled=_hasBeenEnabled - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableSet * readingListAvailableForOfflineReading;              //@synthesize readingListAvailableForOfflineReading=_readingListAvailableForOfflineReading - In the implementation block
@property (assign,nonatomic,__weak) id<FCReadingListContentControllerObserving> observer; 
@property (nonatomic,copy) NSArray * articleIDsAvailableForOfflineReading;                                //@synthesize articleIDsAvailableForOfflineReading=_articleIDsAvailableForOfflineReading - In the implementation block
@property (nonatomic,readonly) NSSet * readingListForOfflineReading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<FCReadingListContentControllerObserving>)observer;
-(FCCloudContext *)context;
-(void)setObserver:(id<FCReadingListContentControllerObserving>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSMutableSet *)fetchResults;
-(void)setFetchResults:(NSMutableSet *)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(NSSet *)readingListForOfflineReading;
-(void)enableDownloadingForOfflineReading;
-(BOOL)isArticleAvailableForOfflineReading:(id)arg1 ;
-(void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)expressInterestInOfflineArticlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setArticleIDsAvailableForOfflineReading:(NSArray *)arg1 ;
-(void)setHasBeenEnabled:(BOOL)arg1 ;
-(void)_updateInterestsIfNeeded;
-(NSDictionary *)holdInterestTokensByArticleID;
-(NSObject*<OS_dispatch_group>)articleContentDownloadGroup;
-(NSArray *)articleIDsAvailableForOfflineReading;
-(void)setArticleIDsOfInterest:(NSArray *)arg1 ;
-(id<FCOperationThrottler>)updateHoldInterestTokensThrottler;
-(NSMutableDictionary *)outstandingOperationsByArticleID;
-(NSArray *)articleIDsOfInterest;
-(void)setHoldInterestTokensByArticleID:(NSDictionary *)arg1 ;
-(void)_fetchHoldInterestTokensForArticleIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasBeenEnabled;
-(FCKeyedOperationQueue *)articleContentDownloadKeyQueue;
-(FCThreadSafeMutableSet *)readingListAvailableForOfflineReading;
-(id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setArticleContentDownloadKeyQueue:(FCKeyedOperationQueue *)arg1 ;
-(void)setUpdateHoldInterestTokensThrottler:(id<FCOperationThrottler>)arg1 ;
-(void)setOutstandingOperationsByArticleID:(NSMutableDictionary *)arg1 ;
-(void)setArticleContentDownloadGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setReadingListAvailableForOfflineReading:(FCThreadSafeMutableSet *)arg1 ;
@end

