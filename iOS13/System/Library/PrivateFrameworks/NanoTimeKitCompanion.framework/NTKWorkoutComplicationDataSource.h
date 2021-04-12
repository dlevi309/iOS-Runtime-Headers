/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, HKWorkout, _HKFirstPartyWorkoutSnapshot, HKHealthStore, HKSampleQuery, HKObserverQuery;

@interface NTKWorkoutComplicationDataSource : NTKComplicationDataSource {

	NSObject*<OS_dispatch_queue> _healthQueue;
	BOOL _deviceIsLocked;
	int _workoutStateNotifyToken;
	NSArray* _animationImages;
	BOOL _loadingLastWorkout;
	BOOL _hasKnownLastWorkoutState;
	HKWorkout* _lastWorkout;
	_HKFirstPartyWorkoutSnapshot* _activeWorkoutSnapshot;
	HKHealthStore* _healthStore;
	HKSampleQuery* _lastWorkoutQuery;
	HKObserverQuery* _workoutObservationQuery;

}

@property (assign,getter=isLoadingLastWorkout,nonatomic) BOOL loadingLastWorkout;               //@synthesize loadingLastWorkout=_loadingLastWorkout - In the implementation block
@property (nonatomic,retain) HKWorkout * lastWorkout;                                           //@synthesize lastWorkout=_lastWorkout - In the implementation block
@property (assign,nonatomic) BOOL hasKnownLastWorkoutState;                                     //@synthesize hasKnownLastWorkoutState=_hasKnownLastWorkoutState - In the implementation block
@property (nonatomic,retain) _HKFirstPartyWorkoutSnapshot * activeWorkoutSnapshot;              //@synthesize activeWorkoutSnapshot=_activeWorkoutSnapshot - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                       //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSampleQuery * lastWorkoutQuery;                                  //@synthesize lastWorkoutQuery=_lastWorkoutQuery - In the implementation block
@property (nonatomic,retain) HKObserverQuery * workoutObservationQuery;                         //@synthesize workoutObservationQuery=_workoutObservationQuery - In the implementation block
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_templateForWorkout:(id)arg1 family:(long long)arg2 ;
+(id)_unknownTemplateForFamily:(long long)arg1 ;
+(id)_workoutTintColor;
+(id)_signatureTemplateWithHasActiveWorkout:(BOOL)arg1 hasPausedActiveWorkout:(BOOL)arg2 ;
-(void)dealloc;
-(void)_invalidate;
-(void)resume;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)_animationImages;
-(void)_startObserving;
-(void)resumeAnimations;
-(BOOL)_hasActiveWorkout;
-(id)complicationApplicationIdentifier;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(id)currentSwitcherTemplate;
-(id)lockedTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg1 ;
-(void)_handleDeviceLockChange;
-(void)_updateActiveWorkoutState;
-(void)_stopLastWorkoutQuerySynchronously:(BOOL)arg1 ;
-(void)_stopObservingSynchronously:(BOOL)arg1 ;
-(id)_templateForActiveWorkoutInSwitcher:(BOOL)arg1 ;
-(id)_noWorkoutsTemplate;
-(void)_startLastWorkoutQueryIfPossible;
-(BOOL)_hasPausedActiveWorkout;
-(id)_makeAnimatedImageProvider;
-(id)_makeObservationQuery;
-(void)setWorkoutObservationQuery:(HKObserverQuery *)arg1 ;
-(HKObserverQuery *)workoutObservationQuery;
-(id)_makeLastWorkoutQuery;
-(void)setLastWorkoutQuery:(HKSampleQuery *)arg1 ;
-(HKSampleQuery *)lastWorkoutQuery;
-(void)setLoadingLastWorkout:(BOOL)arg1 ;
-(void)setLastWorkout:(HKWorkout *)arg1 ;
-(void)setHasKnownLastWorkoutState:(BOOL)arg1 ;
-(void)setActiveWorkoutSnapshot:(_HKFirstPartyWorkoutSnapshot *)arg1 ;
-(BOOL)isLoadingLastWorkout;
-(HKWorkout *)lastWorkout;
-(BOOL)hasKnownLastWorkoutState;
-(_HKFirstPartyWorkoutSnapshot *)activeWorkoutSnapshot;
@end

