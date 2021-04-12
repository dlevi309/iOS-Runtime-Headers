/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSMutableDictionary, NSCountedSet, PPMutableAggregatedItem, PPNamedEntity;

@interface _PPNamedEntityNormalization : NSObject {

	NSMutableDictionary* countByCategory;
	NSCountedSet* countByName;
	PPMutableAggregatedItem* aggregatedRecord;
	PPNamedEntity* entity;

}
-(id)initWithRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ;
-(unsigned long long)dominantCategory;
-(id)dominantEntityName;
@end

