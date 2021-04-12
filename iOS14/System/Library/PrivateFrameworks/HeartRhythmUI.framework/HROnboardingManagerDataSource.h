/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@protocol HROnboardingManagerDataSource <NSObject>
@optional
-(id)onboardingManager:(id)arg1 customViewControllerForPage:(id)arg2;

@required
-(id)availableOnboardingStepsForOnboardingManager:(id)arg1;
-(id)onboardingManager:(id)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3;

@end

