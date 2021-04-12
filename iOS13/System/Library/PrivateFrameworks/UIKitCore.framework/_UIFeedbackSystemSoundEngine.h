/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackEngine.h>
#import <UIKitCore/_UIFeedbackPlayer_Internal.h>

@class NSCountedSet;

@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal> {

	/*^block*/id _invalidationBlock;
	NSCountedSet* _warmSSIDs;
	NSCountedSet* _suspendedSSIDs;

}

@property (nonatomic,readonly) NSCountedSet * suspendedSSIDs;              //@synthesize suspendedSSIDs=_suspendedSSIDs - In the implementation block
@property (nonatomic,readonly) NSCountedSet * warmSSIDs;                   //@synthesize warmSSIDs=_warmSSIDs - In the implementation block
@property (nonatomic,copy) id invalidationBlock;                           //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
+(id)_internalQueue;
+(id)sharedEngine;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 ;
-(void)_stopFeedback:(id)arg1 ;
-(id)_stats_key;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(void)setInvalidationBlock:(id)arg1 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3 ;
-(void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2 ;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(id)invalidationBlock;
-(void)_internal_updateSuspension;
-(void)_internal_startWarmingFeedbacks:(id)arg1 ;
-(void)_internal_stopWarmingFeedbacks:(id)arg1 ;
-(BOOL)_internal_prepareSystemSoundID:(unsigned)arg1 forBeingActive:(BOOL)arg2 ;
-(void)_internal_performForEachSSIDsInFeedbacks:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_internal_playFeedbackDataNow:(id)arg1 forFeedback:(id)arg2 withOptions:(id)arg3 ;
-(NSCountedSet *)warmSSIDs;
-(NSCountedSet *)suspendedSSIDs;
@end

