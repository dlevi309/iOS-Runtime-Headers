/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_loadAssetData;
-(float)sentimentScoreForText:(id)arg1 ;
-(float)_idxToFloat:(unsigned long long)arg1 ;
@end

