/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCCachePolicy, NSArray, NSDictionary;

@interface FCChannelIssuesFetchOperation : FCOperation {

	FCCachePolicy* _cachePolicy;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSArray* _channelIDs;
	long long _issueSet;
	NSDictionary* _resultIssuesByChannel;

}

@property (nonatomic,retain) id<FCContentContext> context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * channelIDs;                              //@synthesize channelIDs=_channelIDs - In the implementation block
@property (assign,nonatomic) long long issueSet;                                //@synthesize issueSet=_issueSet - In the implementation block
@property (nonatomic,retain) NSDictionary * resultIssuesByChannel;              //@synthesize resultIssuesByChannel=_resultIssuesByChannel - In the implementation block
@property (nonatomic,copy) FCCachePolicy * cachePolicy;                         //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                           //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setChannelIDs:(NSArray *)arg1 ;
-(id)init;
-(id<FCContentContext>)context;
-(long long)issueSet;
-(FCCachePolicy *)cachePolicy;
-(void)setCachePolicy:(FCCachePolicy *)arg1 ;
-(id)fetchCompletionHandler;
-(void)setIssueSet:(long long)arg1 ;
-(void)setResultIssuesByChannel:(NSDictionary *)arg1 ;
-(NSDictionary *)resultIssuesByChannel;
-(id)initWithContext:(id)arg1 channelIDs:(id)arg2 issueSet:(long long)arg3 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(NSArray *)channelIDs;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

