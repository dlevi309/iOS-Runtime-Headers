/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext;
@class NSArray, NSSet, FCCachePolicy, NSDictionary;

@interface FCMultiSourceHeadlinesOperation : FCOperation {

	BOOL _shouldBypassRecordSourcePersistence;
	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	NSArray* _articleListIDs;
	NSSet* _articleIDs;
	FCCachePolicy* _cachePolicyForArticleLists;
	NSArray* _networkEvents;
	NSDictionary* _heldRecordsByType;
	/*^block*/id _headlinesCompletionHandler;
	NSDictionary* _resultArticleListHeadlinesByArticleListID;
	NSDictionary* _resultArticleListsByID;
	NSDictionary* _resultArticleIDHeadlinesByArticleID;

}

@property (nonatomic,retain) NSDictionary * resultArticleListHeadlinesByArticleListID;              //@synthesize resultArticleListHeadlinesByArticleListID=_resultArticleListHeadlinesByArticleListID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultArticleListsByID;                                 //@synthesize resultArticleListsByID=_resultArticleListsByID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultArticleIDHeadlinesByArticleID;                    //@synthesize resultArticleIDHeadlinesByArticleID=_resultArticleIDHeadlinesByArticleID - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                                                 //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * articleListIDs;                                                //@synthesize articleListIDs=_articleListIDs - In the implementation block
@property (nonatomic,copy) NSSet * articleIDs;                                                      //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,retain) FCCachePolicy * cachePolicyForArticleLists;                            //@synthesize cachePolicyForArticleLists=_cachePolicyForArticleLists - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassRecordSourcePersistence;                              //@synthesize shouldBypassRecordSourcePersistence=_shouldBypassRecordSourcePersistence - In the implementation block
@property (nonatomic,retain) NSDictionary * heldRecordsByType;                                      //@synthesize heldRecordsByType=_heldRecordsByType - In the implementation block
@property (nonatomic,copy) id headlinesCompletionHandler;                                           //@synthesize headlinesCompletionHandler=_headlinesCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setArticleIDs:(NSSet *)arg1 ;
-(BOOL)shouldBypassRecordSourcePersistence;
-(id)init;
-(NSSet *)articleIDs;
-(id<FCContentContext>)context;
-(NSDictionary *)resultArticleListsByID;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setShouldBypassRecordSourcePersistence:(BOOL)arg1 ;
-(void)setHeadlinesCompletionHandler:(id)arg1 ;
-(NSArray *)articleListIDs;
-(NSDictionary *)heldRecordsByType;
-(FCCachePolicy *)cachePolicyForArticleLists;
-(void)setResultArticleListHeadlinesByArticleListID:(NSDictionary *)arg1 ;
-(void)setResultArticleIDHeadlinesByArticleID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultArticleListHeadlinesByArticleListID;
-(NSDictionary *)resultArticleIDHeadlinesByArticleID;
-(void)setArticleListIDs:(NSArray *)arg1 ;
-(id)headlinesCompletionHandler;
-(void)setCachePolicyForArticleLists:(FCCachePolicy *)arg1 ;
-(void)setHeldRecordsByType:(NSDictionary *)arg1 ;
-(NSArray *)networkEvents;
-(void)setResultArticleListsByID:(NSDictionary *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end
