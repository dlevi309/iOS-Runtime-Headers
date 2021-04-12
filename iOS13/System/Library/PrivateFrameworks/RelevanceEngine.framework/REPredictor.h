/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REObservableSingleton.h>
#import <libobjc.A.dylib/REPredictorProperties.h>

@protocol OS_dispatch_queue;
@class NSObject, REObserverStore, REUpNextScheduler, NSCountedSet;

@interface REPredictor : REObservableSingleton <REPredictorProperties> {

	NSObject*<OS_dispatch_queue> _queue;
	REObserverStore* _engines;
	REUpNextScheduler* _refreshScheduler;
	NSCountedSet* _activities;
	os_unfair_lock_s _predictorLock;
	BOOL __isRunning;
	long long _beginUpdatesCount;

}

@property (nonatomic,readonly) NSCountedSet * outstandingActivities; 
@property (setter=_setIsRunning:) BOOL _isRunning;                                //@synthesize _isRunning=__isRunning - In the implementation block
@property (assign,nonatomic) long long beginUpdatesCount;                         //@synthesize beginUpdatesCount=_beginUpdatesCount - In the implementation block
@property (nonatomic,readonly) BOOL running; 
+(double)updateInterval;
+(id)supportedFeatures;
+(id)systemPredictorsSupportingFeatureSet:(id)arg1 relevanceEngine:(id)arg2 ;
+(id)availablePredictors;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)queue;
-(id)_init;
-(void)pause;
-(void)resume;
-(BOOL)isRunning;
-(id)engines;
-(BOOL)running;
-(void)update;
-(BOOL)_isRunning;
-(void)_setRunning:(BOOL)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)_performUpdate;
-(void)onQueue:(/*^block*/id)arg1 ;
-(void)beginActivity:(id)arg1 ;
-(void)enumerateInflectionFeatureValues:(/*^block*/id)arg1 ;
-(void)beginFetchingData;
-(void)finishFetchingData;
-(void)updateObservers;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)finishActivity:(id)arg1 ;
-(void)addRelevanceEngine:(id)arg1 ;
-(void)removeRelevanceEngine:(id)arg1 ;
-(void)onQueueSync:(/*^block*/id)arg1 ;
-(long long)beginUpdatesCount;
-(void)setBeginUpdatesCount:(long long)arg1 ;
-(void)_setIsRunning:(BOOL)arg1 ;
-(NSCountedSet *)outstandingActivities;
@end

