/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCChannelProviding;
@class FCCloudContext, NSString, NSArray;

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	FCCloudContext* _cloudContext;
	NSString* _channelID;
	unsigned long long _maxHeadlinesCount;
	unsigned long long _maxHeadlinesPerFeed;
	double _fetchWindow;
	double _sectionsCacheTimeToLive;
	id<FCChannelProviding> _channel;
	NSArray* _sectionHeadlinesGroups;

}

@property (nonatomic,readonly) FCCloudContext * cloudContext;                       //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                                //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) unsigned long long maxHeadlinesCount;                //@synthesize maxHeadlinesCount=_maxHeadlinesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long maxHeadlinesPerFeed;              //@synthesize maxHeadlinesPerFeed=_maxHeadlinesPerFeed - In the implementation block
@property (nonatomic,readonly) double fetchWindow;                                  //@synthesize fetchWindow=_fetchWindow - In the implementation block
@property (nonatomic,readonly) double sectionsCacheTimeToLive;                      //@synthesize sectionsCacheTimeToLive=_sectionsCacheTimeToLive - In the implementation block
@property (nonatomic,readonly) id<FCChannelProviding> channel;                      //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSArray * sectionHeadlinesGroups;                        //@synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups - In the implementation block
@property (copy) id fetchCompletionHandler;                                         //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(id<FCChannelProviding>)channel;
-(double)fetchWindow;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSString *)channelID;
-(FCCloudContext *)cloudContext;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(unsigned long long)maxHeadlinesCount;
-(NSArray *)sectionHeadlinesGroups;
-(void)setSectionHeadlinesGroups:(NSArray *)arg1 ;
-(id)_configurationPromise;
-(id)_channelAndSectionTagsPromiseWithChannelID:(id)arg1 ;
-(id)_channelPromiseWithTagsByID:(id)arg1 parentChannelID:(id)arg2 ;
-(id)_sectionsPromiseWithTagsByID:(id)arg1 sectionIDs:(id)arg2 ;
-(id)_feedItemsPromiseWithChannel:(id)arg1 configuration:(id)arg2 ;
-(id)_headlinesPromiseWithFeedItems:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3 ;
-(double)sectionsCacheTimeToLive;
-(id)_createFeedRequestWithFeedID:(id)arg1 feedRange:(id)arg2 ;
-(id)_feedItemsTransformationWithConfiguration:(id)arg1 ;
-(id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg1 sectionIDsByFeedID:(id)arg2 sectionsByID:(id)arg3 ;
-(unsigned long long)maxHeadlinesPerFeed;
-(id)initWithCloudContext:(id)arg1 channelID:(id)arg2 maxHeadlinesCount:(unsigned long long)arg3 maxHeadlinesPerFeed:(unsigned long long)arg4 fetchWindow:(double)arg5 sectionsCacheTimeToLive:(double)arg6 ;
@end

