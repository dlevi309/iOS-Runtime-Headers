/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCCachePolicy, NSArray;

@interface FCIssuesFetchOperation : FCOperation {

	FCCachePolicy* _cachePolicy;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSArray* _issueIDs;
	NSArray* _resultIssues;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * issueIDs;                        //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultIssues;                    //@synthesize resultIssues=_resultIssues - In the implementation block
@property (nonatomic,copy) FCCachePolicy * cachePolicy;                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setCachePolicy:(FCCachePolicy *)arg1 ;
-(FCCachePolicy *)cachePolicy;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)issueIDs;
-(void)setIssueIDs:(NSArray *)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setResultIssues:(NSArray *)arg1 ;
-(NSArray *)resultIssues;
-(id)initWithContext:(id)arg1 issueIDs:(id)arg2 ;
@end

