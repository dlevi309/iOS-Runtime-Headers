/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSString, NSArray;

@interface FCTagHeadlinesOperation : FCOperation {

	FCCloudContext* _context;
	NSString* _tagID;
	unsigned long long _maxHeadlinesCount;
	/*^block*/id _fetchCompletionHandler;
	NSArray* _resultHeadlines;

}

@property (copy) NSArray * resultHeadlines;                                     //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * tagID;                                    //@synthesize tagID=_tagID - In the implementation block
@property (assign,nonatomic) unsigned long long maxHeadlinesCount;              //@synthesize maxHeadlinesCount=_maxHeadlinesCount - In the implementation block
@property (copy) id fetchCompletionHandler;                                     //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(NSString *)tagID;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(NSArray *)resultHeadlines;
-(unsigned long long)maxHeadlinesCount;
-(void)setMaxHeadlinesCount:(unsigned long long)arg1 ;
@end

