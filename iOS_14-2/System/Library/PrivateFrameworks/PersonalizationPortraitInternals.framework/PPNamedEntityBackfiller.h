/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPNamedEntityStore, PPTopicStore;

@interface PPNamedEntityBackfiller : NSObject {

	PPNamedEntityStore* _namedEntityStore;
	PPTopicStore* _topicStore;

}
+(id)sharedInstance;
-(id)initWithNamedEntityStore:(id)arg1 topicStore:(id)arg2 ;
-(BOOL)backfillEntityMappingAndDonationWithShouldContinueBlock:(/*^block*/id)arg1 ;
@end

