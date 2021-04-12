/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext, FCFeedPersonalizing;
@class NSArray, NSMapTable, NSDictionary;

@interface FCFeedItemHeadlinesOperation : FCOperation {

	BOOL _shouldFilterHeadlinesWithoutSourceChannels;
	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	NSArray* _feedItems;
	id<FCFeedPersonalizing> _personalizer;
	NSMapTable* _feedItemScoreProfiles;
	long long _feedPersonalizationConfigurationSet;
	/*^block*/id _rapidUpdateRefreshTest;
	NSDictionary* _feedContextByFeedID;
	NSDictionary* _feedIDsByArticleID;
	/*^block*/id _headlinesCompletionHandler;
	/*^block*/id _headlinesMapCompletionHandler;
	NSArray* _resultHeadlines;
	NSMapTable* _resultHeadlinesByFeedItem;

}

@property (nonatomic,retain) NSArray * resultHeadlines;                                    //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,retain) NSMapTable * resultHeadlinesByFeedItem;                       //@synthesize resultHeadlinesByFeedItem=_resultHeadlinesByFeedItem - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * feedItems;                                            //@synthesize feedItems=_feedItems - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> personalizer;                         //@synthesize personalizer=_personalizer - In the implementation block
@property (nonatomic,copy) NSMapTable * feedItemScoreProfiles;                             //@synthesize feedItemScoreProfiles=_feedItemScoreProfiles - In the implementation block
@property (assign,nonatomic) long long feedPersonalizationConfigurationSet;                //@synthesize feedPersonalizationConfigurationSet=_feedPersonalizationConfigurationSet - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;              //@synthesize shouldFilterHeadlinesWithoutSourceChannels=_shouldFilterHeadlinesWithoutSourceChannels - In the implementation block
@property (nonatomic,copy) id rapidUpdateRefreshTest;                                      //@synthesize rapidUpdateRefreshTest=_rapidUpdateRefreshTest - In the implementation block
@property (nonatomic,copy) NSDictionary * feedContextByFeedID;                             //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (nonatomic,copy) NSDictionary * feedIDsByArticleID;                              //@synthesize feedIDsByArticleID=_feedIDsByArticleID - In the implementation block
@property (nonatomic,copy) id headlinesCompletionHandler;                                  //@synthesize headlinesCompletionHandler=_headlinesCompletionHandler - In the implementation block
@property (nonatomic,copy) id headlinesMapCompletionHandler;                               //@synthesize headlinesMapCompletionHandler=_headlinesMapCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(NSMapTable *)feedItemScoreProfiles;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(void)setPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(id)init;
-(void)setShouldFilterHeadlinesWithoutSourceChannels:(BOOL)arg1 ;
-(void)setFeedPersonalizationConfigurationSet:(long long)arg1 ;
-(NSArray *)resultHeadlines;
-(void)setFeedIDsByArticleID:(NSDictionary *)arg1 ;
-(BOOL)shouldFilterHeadlinesWithoutSourceChannels;
-(id)rapidUpdateRefreshTest;
-(id)headlinesMapCompletionHandler;
-(id<FCContentContext>)context;
-(NSDictionary *)feedIDsByArticleID;
-(void)setFeedItems:(NSArray *)arg1 ;
-(void)setResultHeadlinesByFeedItem:(NSMapTable *)arg1 ;
-(id<FCFeedPersonalizing>)personalizer;
-(id<FCCoreConfiguration>)configuration;
-(NSDictionary *)feedContextByFeedID;
-(void)setFeedItemScoreProfiles:(NSMapTable *)arg1 ;
-(void)setHeadlinesCompletionHandler:(id)arg1 ;
-(NSArray *)feedItems;
-(NSMapTable *)resultHeadlinesByFeedItem;
-(void)setRapidUpdateRefreshTest:(id)arg1 ;
-(long long)feedPersonalizationConfigurationSet;
-(id)headlinesCompletionHandler;
-(void)_fetchUnadornedHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(void)setHeadlinesMapCompletionHandler:(id)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

