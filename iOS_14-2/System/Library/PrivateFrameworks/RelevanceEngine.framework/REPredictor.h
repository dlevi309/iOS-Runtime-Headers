/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)beginUpdates;
-(void)endUpdates;
-(BOOL)running;
-(BOOL)_isRunning;
-(void)_setRunning:(BOOL)arg1 ;
-(void)pause;
-(void)updateObservers;
-(void)update;
-(id)description;
-(id)engines;
-(void)_performUpdate;
-(BOOL)isRunning;
-(void)invalidate;
-(id)queue;
-(id)_init;
-(void)resume;
-(void)onQueue:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)beginActivity:(id)arg1 ;
-(void)enumerateInflectionFeatureValues:(/*^block*/id)arg1 ;
-(void)beginFetchingData;
-(void)finishFetchingData;
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

