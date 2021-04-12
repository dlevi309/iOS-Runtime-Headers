/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock;

@interface PPPeopleSuggester : NSObject {

	_PASLock* _lock;

}
+(id)sharedInstance;
-(id)init;
-(id)rankedContactIdentifiers;
-(id)rankedContactIdentifiersMatchingName:(id)arg1 ;
-(double)_cacheEntryAgeThresholdSecondsSince1970;
-(id)_rankedContactIdentifiersMatchingName:(id)arg1 ;
-(void)_sweepCache;
@end

