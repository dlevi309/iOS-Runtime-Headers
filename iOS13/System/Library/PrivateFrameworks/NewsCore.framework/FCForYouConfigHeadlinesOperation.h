/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext, FCFeedPersonalizing, FCForYouBridgedConfigurationParser;
@class NSArray, FCCachePolicy, FCForYouConfig, NSDictionary;

@interface FCForYouConfigHeadlinesOperation : FCOperation {

	BOOL _shouldFetchEditorialSectionTags;
	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	id<FCFeedPersonalizing> _personalizer;
	id<FCForYouBridgedConfigurationParser> _bridgedConfigurationParser;
	long long _fields;
	NSArray* _additionalArticleListIDs;
	NSArray* _additionalTagIDs;
	FCCachePolicy* _forYouConfigCachePolicy;
	FCCachePolicy* _articleListCachePolicy;
	FCCachePolicy* _editorialSectionTagCachePolicy;
	/*^block*/id _headlinesCompletionHandler;
	/*^block*/id _headlinesAndTagsCompletionHandler;
	FCForYouConfig* _resultForYouConfig;
	NSDictionary* _resultArticleListsByID;
	NSDictionary* _resultHeadlinesByArticleListID;
	NSDictionary* _resultHeadlinesByArticleID;
	NSDictionary* _resultTagsByID;

}

@property (nonatomic,retain) FCForYouConfig * resultForYouConfig;                                            //@synthesize resultForYouConfig=_resultForYouConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * resultArticleListsByID;                                          //@synthesize resultArticleListsByID=_resultArticleListsByID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeadlinesByArticleListID;                                  //@synthesize resultHeadlinesByArticleListID=_resultHeadlinesByArticleListID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeadlinesByArticleID;                                      //@synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultTagsByID;                                                  //@synthesize resultTagsByID=_resultTagsByID - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> personalizer;                                           //@synthesize personalizer=_personalizer - In the implementation block
@property (nonatomic,retain) id<FCForYouBridgedConfigurationParser> bridgedConfigurationParser;              //@synthesize bridgedConfigurationParser=_bridgedConfigurationParser - In the implementation block
@property (assign,nonatomic) long long fields;                                                               //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * additionalArticleListIDs;                                               //@synthesize additionalArticleListIDs=_additionalArticleListIDs - In the implementation block
@property (nonatomic,copy) NSArray * additionalTagIDs;                                                       //@synthesize additionalTagIDs=_additionalTagIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchEditorialSectionTags;                                           //@synthesize shouldFetchEditorialSectionTags=_shouldFetchEditorialSectionTags - In the implementation block
@property (nonatomic,retain) FCCachePolicy * forYouConfigCachePolicy;                                        //@synthesize forYouConfigCachePolicy=_forYouConfigCachePolicy - In the implementation block
@property (nonatomic,retain) FCCachePolicy * articleListCachePolicy;                                         //@synthesize articleListCachePolicy=_articleListCachePolicy - In the implementation block
@property (nonatomic,retain) FCCachePolicy * editorialSectionTagCachePolicy;                                 //@synthesize editorialSectionTagCachePolicy=_editorialSectionTagCachePolicy - In the implementation block
@property (nonatomic,copy) id headlinesCompletionHandler;                                                    //@synthesize headlinesCompletionHandler=_headlinesCompletionHandler - In the implementation block
@property (nonatomic,copy) id headlinesAndTagsCompletionHandler;                                             //@synthesize headlinesAndTagsCompletionHandler=_headlinesAndTagsCompletionHandler - In the implementation block
-(id<FCContentContext>)context;
-(long long)fields;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setFields:(long long)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)setBridgedConfigurationParser:(id<FCForYouBridgedConfigurationParser>)arg1 ;
-(void)setForYouConfigCachePolicy:(FCCachePolicy *)arg1 ;
-(void)setHeadlinesCompletionHandler:(id)arg1 ;
-(id<FCFeedPersonalizing>)personalizer;
-(void)setResultHeadlinesByArticleID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultHeadlinesByArticleID;
-(id)_edgeCacheHint;
-(id<FCForYouBridgedConfigurationParser>)bridgedConfigurationParser;
-(BOOL)shouldFetchEditorialSectionTags;
-(NSArray *)additionalArticleListIDs;
-(NSArray *)additionalTagIDs;
-(FCCachePolicy *)forYouConfigCachePolicy;
-(FCCachePolicy *)articleListCachePolicy;
-(FCCachePolicy *)editorialSectionTagCachePolicy;
-(void)setResultForYouConfig:(FCForYouConfig *)arg1 ;
-(void)setResultTagsByID:(NSDictionary *)arg1 ;
-(void)setResultArticleListsByID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultArticleListsByID;
-(void)setResultHeadlinesByArticleListID:(NSDictionary *)arg1 ;
-(FCForYouConfig *)resultForYouConfig;
-(NSDictionary *)resultHeadlinesByArticleListID;
-(id)headlinesCompletionHandler;
-(id)headlinesAndTagsCompletionHandler;
-(NSDictionary *)resultTagsByID;
-(void)setAdditionalArticleListIDs:(NSArray *)arg1 ;
-(void)setAdditionalTagIDs:(NSArray *)arg1 ;
-(void)setShouldFetchEditorialSectionTags:(BOOL)arg1 ;
-(void)setArticleListCachePolicy:(FCCachePolicy *)arg1 ;
-(void)setEditorialSectionTagCachePolicy:(FCCachePolicy *)arg1 ;
-(void)setHeadlinesAndTagsCompletionHandler:(id)arg1 ;
@end

