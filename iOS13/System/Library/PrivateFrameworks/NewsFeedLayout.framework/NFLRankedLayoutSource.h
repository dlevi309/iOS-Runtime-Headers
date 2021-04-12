/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<NFLRankedLayoutSourceDelegate>)delegate;
-(void)setDelegate:(id<NFLRankedLayoutSourceDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4 ;
-(id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 ;
-(void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3 ;
-(FCFetchCoordinator *)fetchCoordinator;
-(double)tileProminenceScoreBalanceValue;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(NSMutableDictionary *)treesByTileInfo;
-(FCThreadSafeMutableSet *)fulfilledRequests;
-(id)initWithFeedSettings:(id)arg1 qualityOfService:(long long)arg2 ;
-(void)rankedLayoutsForRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFetchCoordinator:(FCFetchCoordinator *)arg1 ;
-(void)setTreesByTileInfo:(NSMutableDictionary *)arg1 ;
-(void)setFulfilledRequests:(FCThreadSafeMutableSet *)arg1 ;
@end

