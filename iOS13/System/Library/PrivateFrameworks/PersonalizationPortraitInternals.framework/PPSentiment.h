/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, _PASNotificationToken;

@interface PPSentiment : NSObject {

	float _weightBucketSize;
	float _intercept;
	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(float)sentimentScoreForText:(id)arg1 ;
-(BOOL)_loadAssetData;
-(float)_idxToFloat:(unsigned long long)arg1 ;
@end

