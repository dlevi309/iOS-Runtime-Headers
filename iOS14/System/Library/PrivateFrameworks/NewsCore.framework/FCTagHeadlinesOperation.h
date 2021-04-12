/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(NSString *)tagID;
-(id)init;
-(NSArray *)resultHeadlines;
-(FCCloudContext *)context;
-(unsigned long long)maxHeadlinesCount;
-(void)setMaxHeadlinesCount:(unsigned long long)arg1 ;
-(id)fetchCompletionHandler;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

