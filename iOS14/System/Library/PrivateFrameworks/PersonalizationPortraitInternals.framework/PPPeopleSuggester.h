/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject;

@interface PPPeopleSuggester : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _serialQueueForSweeping;

}
+(id)sharedInstance;
-(double)_cacheEntryAgeThresholdSecondsSince1970;
-(id)init;
-(void)_sweepCache;
-(id)_rankedContactIdentifiersMatchingName:(id)arg1 ;
-(id)rankedContactIdentifiersMatchingName:(id)arg1 ;
-(id)rankedContactIdentifiers;
@end

