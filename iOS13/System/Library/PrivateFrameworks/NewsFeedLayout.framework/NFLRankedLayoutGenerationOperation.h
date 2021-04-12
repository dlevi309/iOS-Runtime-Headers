/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <Foundation/NSOperation.h>

@class NFLRankedLayoutRequest, NFLFeedSettings;

@interface NFLRankedLayoutGenerationOperation : NSOperation {

	/*^block*/id _rankedLayoutGenerationCompletion;
	NFLRankedLayoutRequest* _request;
	NFLFeedSettings* _feedSettings;

}

@property (copy) NFLRankedLayoutRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NFLFeedSettings * feedSettings;              //@synthesize feedSettings=_feedSettings - In the implementation block
@property (copy) id rankedLayoutGenerationCompletion;                     //@synthesize rankedLayoutGenerationCompletion=_rankedLayoutGenerationCompletion - In the implementation block
-(id)init;
-(void)cancel;
-(void)main;
-(void)setRequest:(NFLRankedLayoutRequest *)arg1 ;
-(NFLRankedLayoutRequest *)request;
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)initWithRequest:(id)arg1 feedSettings:(id)arg2 ;
-(void)setRankedLayoutGenerationCompletion:(id)arg1 ;
-(id)rankedLayoutGenerationCompletion;
@end

