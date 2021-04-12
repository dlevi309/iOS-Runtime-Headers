/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@interface AXHapticFeedbackManager : NSObject
+(id)sharedManager;
-(void)_playFeedback:(id)arg1 ;
-(void)_playDiscreteFeedbackForType:(long long)arg1 ;
-(void)_playFeedbackImpactBehaviorWithIntensity:(double)arg1 ;
-(void)_playPatternFeedback:(long long)arg1 numberOfRepetitions:(long long)arg2 atInterval:(double)arg3 ;
-(void)_playCancelPatternFeedback;
-(void)playHapticFeedbackForType:(long long)arg1 ;
@end

