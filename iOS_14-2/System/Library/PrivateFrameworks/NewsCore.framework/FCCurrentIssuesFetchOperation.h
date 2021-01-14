/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCCachePolicy, NSArray;

@interface FCCurrentIssuesFetchOperation : FCOperation {

	FCCachePolicy* _cachePolicy;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSArray* _resultIssues;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * resultIssues;                    //@synthesize resultIssues=_resultIssues - In the implementation block
@property (nonatomic,copy) FCCachePolicy * cachePolicy;                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(id<FCContentContext>)context;
-(FCCachePolicy *)cachePolicy;
-(void)setCachePolicy:(FCCachePolicy *)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setResultIssues:(NSArray *)arg1 ;
-(NSArray *)resultIssues;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

