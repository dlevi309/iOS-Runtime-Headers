/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSString, FCSearchResult;

@interface FCSearchOperation : FCOperation {

	BOOL _shouldFetchFullHeadline;
	FCCloudContext* _cloudContext;
	NSString* _searchString;
	unsigned long long _batchSize;
	NSString* _keyboardInputMode;
	double _scale;
	/*^block*/id _searchResultsBlock;
	FCSearchResult* _searchResult;
	unsigned long long _parsecQueryID;

}

@property (nonatomic,retain) FCSearchResult * searchResult;                 //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) unsigned long long parsecQueryID;              //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                 //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                  //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) NSString * keyboardInputMode;                  //@synthesize keyboardInputMode=_keyboardInputMode - In the implementation block
@property (assign,nonatomic) double scale;                                  //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchFullHeadline;                  //@synthesize shouldFetchFullHeadline=_shouldFetchFullHeadline - In the implementation block
@property (nonatomic,copy) id searchResultsBlock;                           //@synthesize searchResultsBlock=_searchResultsBlock - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(unsigned long long)batchSize;
-(FCSearchResult *)searchResult;
-(void)setSearchResult:(FCSearchResult *)arg1 ;
-(double)scale;
-(id)_fetchResultsForTagsWithBatchSize:(unsigned long long)arg1 ;
-(id)_fetchResultsForArticlesWithBatchSize:(unsigned long long)arg1 ;
-(BOOL)shouldFetchFullHeadline;
-(id)_fetchFullHeadlineResultsForArticles:(id)arg1 ;
-(id)initWithSearchText:(id)arg1 cloudContext:(id)arg2 parsecQueryID:(unsigned long long)arg3 ;
-(void)setShouldFetchFullHeadline:(BOOL)arg1 ;
-(id)searchResultsBlock;
-(void)setSearchResultsBlock:(id)arg1 ;
-(unsigned long long)parsecQueryID;
-(NSString *)keyboardInputMode;
-(void)setKeyboardInputMode:(NSString *)arg1 ;
-(void)setParsecQueryID:(unsigned long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchString;
-(FCCloudContext *)cloudContext;
@end

