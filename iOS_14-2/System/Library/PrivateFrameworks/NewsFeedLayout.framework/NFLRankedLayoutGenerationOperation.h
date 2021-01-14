/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)init;
-(void)setRequest:(NFLRankedLayoutRequest *)arg1 ;
-(NFLRankedLayoutRequest *)request;
-(void)main;
-(void)setRankedLayoutGenerationCompletion:(id)arg1 ;
-(id)rankedLayoutGenerationCompletion;
-(id)initWithRequest:(id)arg1 feedSettings:(id)arg2 ;
-(void)cancel;
@end

