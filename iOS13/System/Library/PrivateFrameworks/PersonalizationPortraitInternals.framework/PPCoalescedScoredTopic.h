/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject {

	unsigned short _occurrencesInSource;
	PPScoredItem* _scoredTopic;

}

@property (nonatomic,readonly) PPScoredItem * scoredTopic;                      //@synthesize scoredTopic=_scoredTopic - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
-(id)init;
-(unsigned short)occurrencesInSource;
-(id)initWithScoredTopic:(id)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(PPScoredItem *)scoredTopic;
@end

