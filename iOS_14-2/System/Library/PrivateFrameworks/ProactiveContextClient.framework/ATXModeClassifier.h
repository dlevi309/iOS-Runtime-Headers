/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXModeFeaturizerDelegate.h>

@protocol OS_dispatch_queue, _DKKnowledgeSaving;
@class NSObject, NSArray, ATXModeScheduler, _PASQueueLock, ATXModeLogger, NSUserDefaults;

@interface ATXModeClassifier : NSObject <ATXModeFeaturizerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	double _minUpdateInterval;
	NSArray* _featurizers;
	ATXModeScheduler* _scheduler;
	_PASQueueLock* _lock;
	id<_DKKnowledgeSaving> _knowledgeStore;
	ATXModeLogger* _logger;
	NSUserDefaults* _userDefaults;

}
+(void)provideModeClassifierWhenReadyWithDuetHelper:(id)arg1 block:(/*^block*/id)arg2 ;
-(int)currentMode;
-(id)init;
-(id)initWithDuetHelper:(id)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)featurizer:(id)arg1 didUpdateFeatures:(id)arg2 ;
-(id)initWithFeaturizers:(id)arg1 minUpdateInterval:(double)arg2 duetHelper:(id)arg3 ;
-(void)_updateWithGuardedData:(id)arg1 ;
-(void)_requestFeaturesFromAllFeaturizersAndUpdate;
-(int)_predictModeWithFeature:(id)arg1 ;
-(id)_originForMode:(int)arg1 fromAggregateFeatures:(id)arg2 ;
-(void)updateWithFeatureSet:(id)arg1 immediately:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateWithFeatureSet:(id)arg1 ;
-(id)_pbEventForMode:(int)arg1 ;
-(id)currentFeaturesInDictionary;
@end

