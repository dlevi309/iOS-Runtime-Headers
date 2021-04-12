/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSString, NSArray;

@interface FCDraftIssuesFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSString* _issueListID;
	NSArray* _resultIssues;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * issueListID;                    //@synthesize issueListID=_issueListID - In the implementation block
@property (nonatomic,retain) NSArray * resultIssues;                    //@synthesize resultIssues=_resultIssues - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)init;
-(id<FCContentContext>)context;
-(NSString *)issueListID;
-(id)fetchCompletionHandler;
-(void)setIssueListID:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 issueListID:(id)arg2 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setResultIssues:(NSArray *)arg1 ;
-(NSArray *)resultIssues;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

