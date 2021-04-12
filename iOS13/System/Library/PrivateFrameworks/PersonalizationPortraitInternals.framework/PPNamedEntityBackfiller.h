/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPNamedEntityStore, PPTopicStore;

@interface PPNamedEntityBackfiller : NSObject {

	PPNamedEntityStore* _namedEntityStore;
	PPTopicStore* _topicStore;

}
+(id)sharedInstance;
-(id)initWithNamedEntityStore:(id)arg1 topicStore:(id)arg2 ;
-(BOOL)backfillEntityMappingAndDonation;
@end

