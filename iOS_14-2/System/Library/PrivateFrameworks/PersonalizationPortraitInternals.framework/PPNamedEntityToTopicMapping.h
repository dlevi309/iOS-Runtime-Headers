/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, _PASNotificationToken;

@interface PPNamedEntityToTopicMapping : NSObject {

	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)sharedInstance;
+(id)currentTrieSha256;
+(id)_filesystemAssetPath;
-(id)init;
-(id)mappedTopicForEntity:(id)arg1 ;
-(BOOL)_loadAssetData;
@end

