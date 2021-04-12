/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class NSString, FCCloudContext, FCArticleStreamingResults, NSError, FCArticleSearchOperationFeedbackResult;

@interface FCArticleSearchOperation : FCOperation {

	NSString* _query;
	NSString* _keyboardInputMode;
	double _scale;
	unsigned long long _resultsLimit;
	FCCloudContext* _cloudContext;
	/*^block*/id _articleSearchCompletion;
	unsigned long long _parsecQueryID;
	FCArticleStreamingResults* _results;
	NSError* _searchError;
	FCArticleSearchOperationFeedbackResult* _feedbackResult;

}

@property (nonatomic,retain) FCArticleStreamingResults * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSError * searchError;                                                //@synthesize searchError=_searchError - In the implementation block
@property (nonatomic,retain) FCArticleSearchOperationFeedbackResult * feedbackResult;              //@synthesize feedbackResult=_feedbackResult - In the implementation block
@property (nonatomic,copy) NSString * query;                                                       //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) NSString * keyboardInputMode;                                         //@synthesize keyboardInputMode=_keyboardInputMode - In the implementation block
@property (assign,nonatomic) double scale;                                                         //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                      //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                        //@synthesize cloudContext=_cloudContext - In the implementation block
@property (copy) id articleSearchCompletion;                                                       //@synthesize articleSearchCompletion=_articleSearchCompletion - In the implementation block
@property (assign,nonatomic) unsigned long long parsecQueryID;                                     //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
-(NSString *)query;
-(FCArticleStreamingResults *)results;
-(void)setQuery:(NSString *)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setResults:(FCArticleStreamingResults *)arg1 ;
-(unsigned long long)resultsLimit;
-(FCArticleSearchOperationFeedbackResult *)feedbackResult;
-(void)setFeedbackResult:(FCArticleSearchOperationFeedbackResult *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCCloudContext *)cloudContext;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(unsigned long long)parsecQueryID;
-(NSString *)keyboardInputMode;
-(void)setKeyboardInputMode:(NSString *)arg1 ;
-(void)setParsecQueryID:(unsigned long long)arg1 ;
-(id)articleSearchCompletion;
-(void)setSearchError:(NSError *)arg1 ;
-(void)_performSearchQuery:(/*^block*/id)arg1 ;
-(id)initWithParsecQueryID:(unsigned long long)arg1 ;
-(void)setArticleSearchCompletion:(id)arg1 ;
-(NSError *)searchError;
@end

