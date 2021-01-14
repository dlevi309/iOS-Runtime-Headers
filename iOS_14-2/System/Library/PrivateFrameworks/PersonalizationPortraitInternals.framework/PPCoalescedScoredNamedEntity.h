/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject {

	unsigned short _occurrencesInSource;
	PPScoredItem* _scoredNamedEntity;

}

@property (nonatomic,readonly) PPScoredItem * scoredNamedEntity;                //@synthesize scoredNamedEntity=_scoredNamedEntity - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
-(id)initWithScoredNamedEntity:(id)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(id)init;
-(PPScoredItem *)scoredNamedEntity;
-(unsigned short)occurrencesInSource;
@end

