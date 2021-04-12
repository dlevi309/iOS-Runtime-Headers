/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackEngine.h>
#import <UIKitCore/_UIFeedbackPlayer_Internal.h>

@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal> {

	/*^block*/id _invalidationBlock;

}

@property (nonatomic,copy) id invalidationBlock;              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 ;
+(id)sharedEngine;
-(id)_stats_key;
-(void)setInvalidationBlock:(id)arg1 ;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2 ;
-(id)invalidationBlock;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3 ;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_stopFeedback:(id)arg1 ;
@end

