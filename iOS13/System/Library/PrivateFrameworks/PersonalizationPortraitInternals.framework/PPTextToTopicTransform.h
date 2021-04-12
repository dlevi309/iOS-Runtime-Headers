/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, NSString, _PASNotificationToken;

@interface PPTextToTopicTransform : NSObject {

	_PASLock* _lock;
	NSString* _vocabularyPath;
	NSString* _weightsPath;
	_PASNotificationToken* _assetUpdateNotificationToken;

}

@property (nonatomic,readonly) unsigned long long outputTopicCount; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)iterateTopicsForText:(id)arg1 threshold:(double)arg2 scoreAttenuationFactor:(double)arg3 block:(/*^block*/id)arg4 ;
-(unsigned long long)outputTopicCount;
-(id)_initWithVocabulary:(id)arg1 weights:(id)arg2 ;
-(void)_updateFromAssetData;
-(id)_payloadForTopic:(unsigned)arg1 ;
@end

