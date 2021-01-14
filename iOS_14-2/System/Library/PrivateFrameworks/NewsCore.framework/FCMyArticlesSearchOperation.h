/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedItemFeature, FCDateRange, NSArray, NSDictionary;

@interface FCMyArticlesSearchOperation : FCOperation {

	BOOL _channelsOnly;
	BOOL _cachedOnly;
	BOOL _unreadOnly;
	FCCloudContext* _context;
	FCFeedItemFeature* _feature;
	FCDateRange* _dateRange;
	/*^block*/id _searchCompletionHandler;
	NSArray* _resultFeedItems;
	NSDictionary* _resultFeedContextByFeedID;

}

@property (nonatomic,retain) NSArray * resultFeedItems;                 //@synthesize resultFeedItems=_resultFeedItems - In the implementation block
@property (copy) NSDictionary * resultFeedContextByFeedID;              //@synthesize resultFeedContextByFeedID=_resultFeedContextByFeedID - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) FCFeedItemFeature * feature;                 //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) FCDateRange * dateRange;                     //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) BOOL channelsOnly;                         //@synthesize channelsOnly=_channelsOnly - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                           //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (assign,nonatomic) BOOL unreadOnly;                           //@synthesize unreadOnly=_unreadOnly - In the implementation block
@property (nonatomic,copy) id searchCompletionHandler;                  //@synthesize searchCompletionHandler=_searchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)setCachedOnly:(BOOL)arg1 ;
-(BOOL)cachedOnly;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCFeedItemFeature *)feature;
-(void)performOperation;
-(FCDateRange *)dateRange;
-(id)init;
-(NSArray *)resultFeedItems;
-(void)setResultFeedItems:(NSArray *)arg1 ;
-(void)_generateFeedRequestsForFeedRange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)searchCompletionHandler;
-(NSDictionary *)resultFeedContextByFeedID;
-(void)setResultFeedContextByFeedID:(NSDictionary *)arg1 ;
-(void)setChannelsOnly:(BOOL)arg1 ;
-(void)setSearchCompletionHandler:(id)arg1 ;
-(FCCloudContext *)context;
-(BOOL)channelsOnly;
-(BOOL)unreadOnly;
-(void)setDateRange:(FCDateRange *)arg1 ;
-(void)setFeature:(FCFeedItemFeature *)arg1 ;
-(void)setUnreadOnly:(BOOL)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

