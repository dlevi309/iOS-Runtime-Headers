/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSHistory;

@interface WBSRecentHistoryTopicTagController : NSObject {

	WBSHistory* _history;
	unsigned long long _maximumNumberOfTopics;
	double _timeIntervalBeforeNowForFetchingTags;

}

@property (assign,nonatomic) unsigned long long maximumNumberOfTopics;                 //@synthesize maximumNumberOfTopics=_maximumNumberOfTopics - In the implementation block
@property (assign,nonatomic) double timeIntervalBeforeNowForFetchingTags;              //@synthesize timeIntervalBeforeNowForFetchingTags=_timeIntervalBeforeNowForFetchingTags - In the implementation block
-(id)initWithHistory:(id)arg1 ;
-(void)loadTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)maximumNumberOfTopics;
-(void)setMaximumNumberOfTopics:(unsigned long long)arg1 ;
-(double)timeIntervalBeforeNowForFetchingTags;
-(void)setTimeIntervalBeforeNowForFetchingTags:(double)arg1 ;
@end

