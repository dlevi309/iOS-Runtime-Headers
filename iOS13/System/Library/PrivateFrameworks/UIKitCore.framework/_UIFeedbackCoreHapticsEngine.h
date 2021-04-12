/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackEngine.h>

@class NSMutableSet, CHHapticEngine;

@interface _UIFeedbackCoreHapticsEngine : _UIFeedbackEngine {

	NSMutableSet* _playersInUse;
	NSMutableSet* _playersToInvalidate;
	CHHapticEngine* _coreHapticsEngine;

}

@property (nonatomic,readonly) CHHapticEngine * coreHapticsEngine;              //@synthesize coreHapticsEngine=_coreHapticsEngine - In the implementation block
+(id)_internalQueue;
+(BOOL)_supportsPlayingFeedbackPatternsDirectly;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 allowsIgnoreCapture:(BOOL)arg2 ;
+(id)sharedEngine;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 ;
+(BOOL)_supportsAbortingDeactivation;
+(void)_loadHapticEngineClass;
+(void)_setHapticEngineCreationBlock:(/*^block*/id)arg1 ;
+(void)_setHapticPatternClass:(Class)arg1 ;
-(id)init;
-(id)_stats_key;
-(void)_internal_resetCoreHapticsEngine;
-(void)_internal_coreHapticsEngineStoppedForReason:(long long)arg1 ;
-(void)_coreHapticsEngineStoppedForReason:(long long)arg1 ;
-(void)_resetCoreHapticsEngine;
-(CHHapticEngine *)coreHapticsEngine;
-(id)_internal_createCoreHapticsEngine;
-(BOOL)_internal_initializeCoreHapticsEngine;
-(void)_internal_startRunningFeedbackPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_coreHapticsEngineFinishedWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_internal_prewarmUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
@end

