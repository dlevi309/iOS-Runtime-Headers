/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSString, SFRankingFeedback, NSArray, SFMoreResults;

@interface FCParsecArticleSearchOperation : FCOperation {

	NSString* _query;
	NSString* _keyboardInputMode;
	double _scale;
	id<FCContentContext> _contentContext;
	SFRankingFeedback* _previousRankingFeedback;
	/*^block*/id _articleSearchCompletionHandler;
	NSArray* _results;
	unsigned long long _batchSize;
	SFRankingFeedback* _rankingFeedback;
	unsigned long long _parsecQueryID;
	SFMoreResults* _moreResults;

}

@property (nonatomic,retain) NSArray * results;                                        //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                             //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) SFRankingFeedback * rankingFeedback;                      //@synthesize rankingFeedback=_rankingFeedback - In the implementation block
@property (assign,nonatomic) unsigned long long parsecQueryID;                         //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
@property (nonatomic,retain) SFMoreResults * moreResults;                              //@synthesize moreResults=_moreResults - In the implementation block
@property (nonatomic,copy) NSString * query;                                           //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * keyboardInputMode;                               //@synthesize keyboardInputMode=_keyboardInputMode - In the implementation block
@property (assign,nonatomic) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                      //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) SFRankingFeedback * previousRankingFeedback;              //@synthesize previousRankingFeedback=_previousRankingFeedback - In the implementation block
@property (copy) id articleSearchCompletionHandler;                                    //@synthesize articleSearchCompletionHandler=_articleSearchCompletionHandler - In the implementation block
-(NSString *)query;
-(NSArray *)results;
-(void)setQuery:(NSString *)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(SFMoreResults *)moreResults;
-(void)setMoreResults:(SFMoreResults *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(id)articleSearchCompletionHandler;
-(SFRankingFeedback *)previousRankingFeedback;
-(id)_rankingFeedbackWithSection:(id)arg1 ;
-(void)setRankingFeedback:(SFRankingFeedback *)arg1 ;
-(unsigned long long)parsecQueryID;
-(NSString *)keyboardInputMode;
-(void)setKeyboardInputMode:(NSString *)arg1 ;
-(SFRankingFeedback *)rankingFeedback;
-(id)initWithMoreResults:(id)arg1 parsecQueryID:(unsigned long long)arg2 ;
-(void)setPreviousRankingFeedback:(SFRankingFeedback *)arg1 ;
-(void)setArticleSearchCompletionHandler:(id)arg1 ;
-(void)setParsecQueryID:(unsigned long long)arg1 ;
@end

