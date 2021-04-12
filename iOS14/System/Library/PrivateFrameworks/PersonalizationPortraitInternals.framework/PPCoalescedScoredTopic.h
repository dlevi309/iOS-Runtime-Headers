/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

