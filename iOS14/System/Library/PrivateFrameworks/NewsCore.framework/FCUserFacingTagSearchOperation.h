/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSString, FCStreamingResults;

@interface FCUserFacingTagSearchOperation : FCOperation {

	id<FCContentContext> _contentContext;
	NSString* _searchString;
	unsigned long long _userFacingTagOptions;
	unsigned long long _batchSize;
	/*^block*/id _searchResultsBlock;
	FCStreamingResults* _channelSearchResults;
	FCStreamingResults* _topicSearchResults;

}

@property (nonatomic,retain) FCStreamingResults * channelSearchResults;              //@synthesize channelSearchResults=_channelSearchResults - In the implementation block
@property (nonatomic,retain) FCStreamingResults * topicSearchResults;                //@synthesize topicSearchResults=_topicSearchResults - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                    //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) unsigned long long userFacingTagOptions;                //@synthesize userFacingTagOptions=_userFacingTagOptions - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                           //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) id searchResultsBlock;                                    //@synthesize searchResultsBlock=_searchResultsBlock - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(id<FCContentContext>)contentContext;
-(unsigned long long)userFacingTagOptions;
-(void)setChannelSearchResults:(FCStreamingResults *)arg1 ;
-(void)setTopicSearchResults:(FCStreamingResults *)arg1 ;
-(id)_fetchResultsForTagType:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(id)searchResultsBlock;
-(id)_fetchResultsForUserFacingTopicsWithInitialChannels:(id)arg1 ;
-(FCStreamingResults *)channelSearchResults;
-(FCStreamingResults *)topicSearchResults;
-(void)setSearchResultsBlock:(id)arg1 ;
-(void)setUserFacingTagOptions:(unsigned long long)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchString;
@end

