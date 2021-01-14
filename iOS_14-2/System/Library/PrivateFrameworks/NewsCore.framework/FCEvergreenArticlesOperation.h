/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCCoreConfiguration, FCBundleSubscriptionManagerType;
@class NSString, NSArray;

@interface FCEvergreenArticlesOperation : FCOperation {

	/*^block*/id _completionHandler;
	id<FCContentContext> _context;
	id<FCCoreConfiguration> _configuration;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	NSString* _evergreenArticleListID;
	NSArray* _resultFeedItems;

}

@property (nonatomic,readonly) id<FCContentContext> context;                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<FCCoreConfiguration> configuration;                                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;              //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,retain) NSString * evergreenArticleListID;                                            //@synthesize evergreenArticleListID=_evergreenArticleListID - In the implementation block
@property (nonatomic,retain) NSArray * resultFeedItems;                                                    //@synthesize resultFeedItems=_resultFeedItems - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                           //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(id)init;
-(NSArray *)resultFeedItems;
-(void)setResultFeedItems:(NSArray *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(id)completionHandler;
-(id<FCContentContext>)context;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 bundleSubscriptionManager:(id)arg3 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setEvergreenArticleListID:(NSString *)arg1 ;
-(id)_promiseArticleRecords;
-(id)_promiseFeedItemsFromArticleRecords:(id)arg1 ;
-(NSString *)evergreenArticleListID;
@end

