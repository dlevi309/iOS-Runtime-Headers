/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, NSString, _PASNotificationToken;

@interface PPTextToTopicTransform : NSObject {

	_PASLock* _lock;
	NSString* _vocabularyPath;
	NSString* _weightsPath;
	NSString* _mappingId;
	_PASNotificationToken* _assetUpdateNotificationToken;

}

@property (nonatomic,readonly) unsigned long long outputTopicCount; 
@property (nonatomic,readonly) float threshold; 
+(id)sharedInstance;
-(id)_initWithVocabulary:(id)arg1 weights:(id)arg2 ;
-(float)threshold;
-(id)init;
-(void)iterateTopicsForText:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_payloadForTopic:(unsigned)arg1 ;
-(id)_init;
-(unsigned long long)outputTopicCount;
-(BOOL)_updateFromAssetData;
@end

