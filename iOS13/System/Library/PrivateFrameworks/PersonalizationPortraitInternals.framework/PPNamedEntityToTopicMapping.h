/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, _PASNotificationToken;

@interface PPNamedEntityToTopicMapping : NSObject {

	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)sharedInstance;
+(id)_filesystemAssetPath;
+(id)currentTrieSha256;
-(id)init;
-(void)dealloc;
-(id)mappedTopicForEntity:(id)arg1 ;
-(BOOL)_loadAssetData;
@end

