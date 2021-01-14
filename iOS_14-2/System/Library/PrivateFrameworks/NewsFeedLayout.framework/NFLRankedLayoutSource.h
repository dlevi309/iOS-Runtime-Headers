/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <libobjc.A.dylib/FCFetchCoordinatorDelegate.h>

@protocol NFLRankedLayoutSourceDelegate, OS_dispatch_queue;
@class NFLFeedSettings, FCFetchCoordinator, NSMutableDictionary, FCThreadSafeMutableSet, NSObject, NSOperationQueue, NSString;

@interface NFLRankedLayoutSource : NSObject <FCFetchCoordinatorDelegate> {

	id<NFLRankedLayoutSourceDelegate> _delegate;
	NFLFeedSettings* _feedSettings;
	FCFetchCoordinator* _fetchCoordinator;
	NSMutableDictionary* _treesByTileInfo;
	FCThreadSafeMutableSet* _fulfilledRequests;
	NSObject*<OS_dispatch_queue> _accessQueue;
	double _tileProminenceScoreBalanceValue;
	long long _qualityOfService;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,copy) NFLFeedSettings * feedSettings;                            //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,retain) FCFetchCoordinator * fetchCoordinator;                   //@synthesize fetchCoordinator=_fetchCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * treesByTileInfo;                   //@synthesize treesByTileInfo=_treesByTileInfo - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableSet * fulfilledRequests;              //@synthesize fulfilledRequests=_fulfilledRequests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) double tileProminenceScoreBalanceValue;                  //@synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (__weak) id<NFLRankedLayoutSourceDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tileProminenceScoreBalanceValue;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NFLFeedSettings *)feedSettings;
-(NSOperationQueue *)operationQueue;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)init;
-(void)setFetchCoordinator:(FCFetchCoordinator *)arg1 ;
-(id<NFLRankedLayoutSourceDelegate>)delegate;
-(NSMutableDictionary *)treesByTileInfo;
-(void)setDelegate:(id<NFLRankedLayoutSourceDelegate>)arg1 ;
-(id)initWithFeedSettings:(id)arg1 qualityOfService:(long long)arg2 ;
-(id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(FCThreadSafeMutableSet *)fulfilledRequests;
-(void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3 ;
-(FCFetchCoordinator *)fetchCoordinator;
-(long long)qualityOfService;
-(void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4 ;
-(void)setFulfilledRequests:(FCThreadSafeMutableSet *)arg1 ;
-(void)setTreesByTileInfo:(NSMutableDictionary *)arg1 ;
-(void)rankedLayoutsForRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

