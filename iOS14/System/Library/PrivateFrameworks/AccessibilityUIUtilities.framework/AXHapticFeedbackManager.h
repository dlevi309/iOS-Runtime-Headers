/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@interface AXHapticFeedbackManager : NSObject
+(id)sharedManager;
-(void)_playDiscreteFeedbackForType:(long long)arg1 ;
-(void)_playFeedbackImpactBehaviorWithIntensity:(double)arg1 ;
-(void)_playPatternFeedback:(long long)arg1 numberOfRepetitions:(long long)arg2 atInterval:(double)arg3 ;
-(void)_playCancelPatternFeedback;
-(void)playHapticFeedbackForType:(long long)arg1 ;
-(void)_playFeedback:(id)arg1 ;
@end

