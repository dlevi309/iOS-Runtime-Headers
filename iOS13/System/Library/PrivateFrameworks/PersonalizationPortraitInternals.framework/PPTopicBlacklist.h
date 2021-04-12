/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, _PASNotificationToken;

@interface PPTopicBlacklist : NSObject {

	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)_loadAssetData;
-(BOOL)shouldBlacklist:(id)arg1 ;
-(id)indicesOfBlacklistedTopicsInRecordArray:(id)arg1 ;
-(id)indicesOfBlacklistedTopicsInScoredTopicArray:(id)arg1 ;
@end

