/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock;

@interface PPNamedEntityBlacklist : NSObject {

	_PASLock* _lock;
	unsigned long long _maxRegexMatchingTicks;

}
+(id)sharedInstance;
-(id)init_;
-(void)_loadAssetData;
-(id)blacklistedSetFromEntities:(id)arg1 ;
@end

