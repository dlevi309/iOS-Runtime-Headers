/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTimeIntervalBeforeNowForFetchingTags:(double)arg1 ;
-(void)setMaximumNumberOfTopics:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfTopics;
-(double)timeIntervalBeforeNowForFetchingTags;
-(id)initWithHistory:(id)arg1 ;
-(void)loadTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

