/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCKeyedOperationQueueDelegate.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCOfflineArticleManagerType.h>

@protocol FCArticleDownloadServiceType, FCOperationThrottler, OS_dispatch_group;
@class NSSet, NSHashTable, NSOrderedSet, NSDictionary, FCKeyedOperationQueue, NSObject, NSMutableSet, FCThreadSafeMutableSet, NSString;

@interface FCOfflineArticleManager : NSObject <FCKeyedOperationQueueDelegate, FCOperationThrottlerDelegate, FCNetworkReachabilityObserving, FCOfflineArticleManagerType> {

	BOOL _hasBeenEnabled;
	id<FCArticleDownloadServiceType> _downloadService;
	NSHashTable* _contributors;
	NSOrderedSet* _articleIDsOfInterest;
	NSOrderedSet* _downloadableArticleIDs;
	NSDictionary* _holdInterestTokensByArticleID;
	FCKeyedOperationQueue* _articleContentDownloadKeyQueue;
	id<FCOperationThrottler> _updateHoldInterestTokensThrottler;
	NSObject*<OS_dispatch_group> _articleContentDownloadGroup;
	NSObject*<OS_dispatch_group> _contributorsReadyGroup;
	NSMutableSet* _fetchResults;
	FCThreadSafeMutableSet* _articleIDsAvailableForOfflineReading;

}

@property (nonatomic,retain) id<FCArticleDownloadServiceType> downloadService;                           //@synthesize downloadService=_downloadService - In the implementation block
@property (nonatomic,readonly) NSHashTable * contributors;                                               //@synthesize contributors=_contributors - In the implementation block
@property (nonatomic,copy) NSOrderedSet * articleIDsOfInterest;                                          //@synthesize articleIDsOfInterest=_articleIDsOfInterest - In the implementation block
@property (nonatomic,copy) NSOrderedSet * downloadableArticleIDs;                                        //@synthesize downloadableArticleIDs=_downloadableArticleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * holdInterestTokensByArticleID;                                 //@synthesize holdInterestTokensByArticleID=_holdInterestTokensByArticleID - In the implementation block
@property (nonatomic,retain) FCKeyedOperationQueue * articleContentDownloadKeyQueue;                     //@synthesize articleContentDownloadKeyQueue=_articleContentDownloadKeyQueue - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> updateHoldInterestTokensThrottler;                 //@synthesize updateHoldInterestTokensThrottler=_updateHoldInterestTokensThrottler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> articleContentDownloadGroup;                   //@synthesize articleContentDownloadGroup=_articleContentDownloadGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> contributorsReadyGroup;                        //@synthesize contributorsReadyGroup=_contributorsReadyGroup - In the implementation block
@property (nonatomic,retain) NSMutableSet * fetchResults;                                                //@synthesize fetchResults=_fetchResults - In the implementation block
@property (assign,nonatomic) BOOL hasBeenEnabled;                                                        //@synthesize hasBeenEnabled=_hasBeenEnabled - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableSet * articleIDsAvailableForOfflineReading;              //@synthesize articleIDsAvailableForOfflineReading=_articleIDsAvailableForOfflineReading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * downloadedArticleIDs; 
-(BOOL)hasBeenEnabled;
-(void)setHoldInterestTokensByArticleID:(NSDictionary *)arg1 ;
-(NSMutableSet *)fetchResults;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)setHasBeenEnabled:(BOOL)arg1 ;
-(void)enableDownloading;
-(id)init;
-(void)setArticleContentDownloadKeyQueue:(FCKeyedOperationQueue *)arg1 ;
-(NSOrderedSet *)downloadableArticleIDs;
-(id)_latestDownloadableArticleIDs;
-(id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setContributorsReadyGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(FCKeyedOperationQueue *)articleContentDownloadKeyQueue;
-(void)setDownloadService:(id<FCArticleDownloadServiceType>)arg1 ;
-(void)setArticleIDsOfInterest:(NSOrderedSet *)arg1 ;
-(void)addContributor:(id)arg1 ;
-(void)powerStateDidChange;
-(NSObject*<OS_dispatch_group>)articleContentDownloadGroup;
-(void)setDownloadableArticleIDs:(NSOrderedSet *)arg1 ;
-(NSSet *)downloadedArticleIDs;
-(void)_updateInterestsIfNeeded;
-(id<FCArticleDownloadServiceType>)downloadService;
-(void)expressInterestInArticlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_latestArticleIDsOfInterest;
-(id)initWithDownloadService:(id)arg1 ;
-(NSHashTable *)contributors;
-(id<FCOperationThrottler>)updateHoldInterestTokensThrottler;
-(NSObject*<OS_dispatch_group>)contributorsReadyGroup;
-(void)setArticleContentDownloadGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSOrderedSet *)articleIDsOfInterest;
-(void)notifyWhenFinishedDownloadingWithBlock:(/*^block*/id)arg1 ;
-(FCThreadSafeMutableSet *)articleIDsAvailableForOfflineReading;
-(void)setFetchResults:(NSMutableSet *)arg1 ;
-(NSDictionary *)holdInterestTokensByArticleID;
-(void)_fetchHoldInterestTokensForArticleIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setArticleIDsAvailableForOfflineReading:(FCThreadSafeMutableSet *)arg1 ;
-(void)setUpdateHoldInterestTokensThrottler:(id<FCOperationThrottler>)arg1 ;
-(void)dealloc;
@end

