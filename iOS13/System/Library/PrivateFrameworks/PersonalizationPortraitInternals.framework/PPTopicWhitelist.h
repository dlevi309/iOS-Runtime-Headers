/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, _PASNotificationToken;

@interface PPTopicWhitelist : NSObject {

	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)sharedInstance;
+(id)_keyFor:(id)arg1 of:(id)arg2 ;
-(void)dealloc;
-(id)_init;
-(void)_loadAssetData;
-(BOOL)shouldBypassWhitelist:(id)arg1 ;
-(id)indexesOfTopicsInRecordArray:(id)arg1 inWhitelistOf:(id)arg2 ;
-(id)indexesOfTopicsInScoredTopicArray:(id)arg1 inWhitelistOf:(id)arg2 ;
-(id)filterTopicDictionary:(id)arg1 withWhitelistOf:(id)arg2 ;
@end

