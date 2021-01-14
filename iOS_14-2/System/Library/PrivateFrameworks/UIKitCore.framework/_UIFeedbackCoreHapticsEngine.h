/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 ;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 allowsIgnoreCapture:(BOOL)arg2 ;
+(void)_loadHapticEngineClass;
+(BOOL)_supportsAbortingDeactivation;
+(void)_setHapticEngineCreationBlock:(/*^block*/id)arg1 ;
+(void)_setHapticPatternClass:(Class)arg1 ;
+(id)_internalQueue;
+(id)sharedEngine;
+(BOOL)_supportsPlayingFeedbackPatternsDirectly;
-(id)_stats_key;
-(id)init;
-(void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetCoreHapticsEngine;
-(void)_internal_resetCoreHapticsEngine;
-(CHHapticEngine *)coreHapticsEngine;
-(void)_internal_coreHapticsEngineStoppedForReason:(long long)arg1 ;
-(void)_coreHapticsEngineStoppedForReason:(long long)arg1 ;
-(id)_internal_createCoreHapticsEngine;
-(void)_internal_coreHapticsEngineFinishedWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_internal_initializeCoreHapticsEngine;
-(void)_internal_startRunningFeedbackPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_prewarmUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
@end

