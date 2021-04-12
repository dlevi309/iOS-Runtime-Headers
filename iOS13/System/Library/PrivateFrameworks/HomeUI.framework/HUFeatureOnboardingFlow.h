/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NAFuture, HMHome;


@protocol HUFeatureOnboardingFlow <NSObject>
@property (nonatomic,retain) NAFuture * onboardingFuture; 
@property (nonatomic,readonly) BOOL shouldAbortThisOnboardingFlowGroup; 
@property (nonatomic,readonly) BOOL shouldAbortAllOnboarding; 
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> initialViewController; 
@property (nonatomic,retain) HMHome * home; 
@optional
-(void)checkIfStillRequiredFromCurrentResults:(id)arg1;

@required
-(HMHome *)home;
-(void)setHome:(id)arg1;
-(UIViewController*<HUConfigurationViewController>)initialViewController;
-(void)setInitialViewController:(id)arg1;
-(NAFuture *)onboardingFuture;
-(id)processUserInput:(id)arg1;
-(void)setOnboardingFuture:(id)arg1;
-(BOOL)shouldAbortThisOnboardingFlowGroup;
-(BOOL)shouldAbortAllOnboarding;

@end

